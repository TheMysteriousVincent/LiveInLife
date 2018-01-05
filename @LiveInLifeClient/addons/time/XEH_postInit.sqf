
lilc_time_currentTime = missionStart;
reverse lilc_time_currentTime;

if (lilc_time_currentTime isEqualTo [0, 0, 0, 0, 0, 0]) then
{
	lilc_time_currentTime = [0, 0, 0, 1, 1, 1970];
};

if (lilc_time_enable) then
{
	lilc_time_PFEHandle = ([
		{
			call lilc_time_fnc_updateTime;

			if (lilc_time_events_enable) then
			{
				call lilc_time_fnc_execEvents;
			};
		},
		1
	] call CBA_fnc_addPerFrameHandler);
};
