#include "..\script_component.hpp"

params [
    ["_transactionID", 0, [0]]
];

if (_transactionID <= 0) exitWith { []; };

[
    "banks/transactions/%1",
    [
        _transactionID
    ],
    "GET",
    [
        QUSERS_ACCESS_TOKEN_HEADER, EGVAR(api_users,token),
        QPROFILES_ACCESS_TOKEN_HEADER, EGVAR(api_profiles,token)
    ],
    []
] call EFUNC(api,request);
