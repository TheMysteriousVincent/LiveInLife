
if !(call lilc_messages_fnc_canOpenMenu) exitWith {};
if !(createDialog "lilcm_messageMenu") exitWith {};

call lilc_messages_fnc_message_updateMenu;
