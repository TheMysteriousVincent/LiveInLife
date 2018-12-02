#include "..\script_component.hpp"

params [
    ["_transactionID", 0, [0]]
];

if (_transactionID <= 0) exitWith { []; };

[
    "banks/orders",
    [],
    "DELETE",
    [
        "Authorization", EGVAR(api_users,token),
        "ProfileAuthorization", EGVAR(api_profiles,token)
    ],
    []
] call EFUNC(api,request);