
/*
	Author(s):
		Vincent Heins
	
	Description:
		Checks whether a player can punch a given target.

	Parameter(s):
		(_this select 0) : _target : <objNull> : the unit to check

	Result:
		<bool> : can the player punch a designated person?

	Example(s):
		(Example 1)
		private _canPunchPerson = ([player] call lilc_actions_fnc_canPunchCorpse);
*/

params [
    ["_target", objNull , [objNull]]
];

(
	!lilc_action_active &&
	!visibleMap &&
	!dialog &&
	(
		(
			(isNull _target || (_target distance player > 2)) &&
			!(player getVariable ["ace_captives_isSurrendering", false]) &&
			!(player getVariable ["ace_captives_isHandcuffed", false]) &&
			!(player getVariable ["ace_isUnconscious", false])
		) ||
		(
			(_target getVariable ["lilc_actions_isPunchable", true]) &&
			([_target] call lilc_common_fnc_isAlive) &&
			!(_target getVariable ["ace_isUnconscious", false]) &&
			!(_target getVariable ["ace_captives_isSurrendering", false]) &&
			/*!(_target getVariable ["lilc_actions_isBeaten", false]) &&*/
			!(_target getVariable ["ace_captives_isHandcuffed", false]) &&
			!(player getVariable ["ace_captives_isSurrendering", false]) &&
			!(player getVariable ["ace_captives_isHandcuffed", false]) &&
			!(player getVariable ["ace_isUnconscious", false]) &&
			!(lineIntersects [(eyePos player), (eyePos _target), player, _target]) &&
			!((player getVariable ["ace_dragging_carriedObject", objNull]) isEqualTo _target) &&
			!(surfaceIsWater position player)
		)
	)
);
