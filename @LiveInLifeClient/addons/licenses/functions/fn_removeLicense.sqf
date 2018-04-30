
params [
    ["_licenseName", "", [""]],
    ["_target", ((findDisplay 1301) getVariable ["lilc_licenses_target", objNull]), [objNull]]
];

try
{
    if !([_target] call lilc_common_fnc_isAlive) throw false;
    private _itemConfig = ([_licenseName] call lilc_virtualInventory_fnc_getVirtualItemConfig);
    if (isNull _itemConfig) throw false;

    private _itemTypes = getArray(_itemConfig >> "types");
    if !("license" in _itemTypes) throw false;

    if !([([(["licenses", _licenseName, "remove"] call lilc_permissions_fnc_bindPermissionTree)] call lilc_permissions_fnc_have)] call lilc_permissions_fnc_have) throw false;

    [
        _target,
        _licenseName,
        -1
    ] call lilc_virtualInventory_fnc_remove;
    ["Die Lizenz wurde erfolgreich entfernt."] call lilc_ui_fnc_hint;
    [false, "lilc_licenses_fnc_licenseRemoved", _target] call lilc_common_fnc_send;
}
catch
{
    if !(_exception) then {
        ["Die Lizenz konnte nicht entfernt werden.", "ERROR"] call lilc_ui_fnc_hint;
    };
};
