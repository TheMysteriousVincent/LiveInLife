#include "script_component.hpp"

[QGVAR(userAuthenticated), {
    params [
        ["_accessToken", "", [""]],
        ["_refreshToken", "", [""]]
    ];

    GVAR(token) = _accessToken;
    GVAR(refresh_token) = _refreshToken;
}] call CBA_fnc_addEventHandler;

[{
    if (GVAR(token) != "" && GVAR(refresh_token) != "") then {
        [] spawn {
            [QGVAR(updateToken)] call CBA_fnc_localEvent;
        };
    };
}, ACCESS_TOKEN_EXPIRY - 15] call CBA_fnc_addPerFrameHandler;

[QGVAR(updateToken), {
    private _resp = call FUNC(refreshUserToken);
    if REQ_IS_OK(_resp) then {
        private _res = REQ_GET_BODY(_resp);
        GVAR(token) = [_res, "access_token"] call a3uf_json_fnc_get;
        GVAR(refresh_token) = [_res, "refresh_token"] call a3uf_json_fnc_get;
    };
}] call CBA_fnc_addEventHandler;
