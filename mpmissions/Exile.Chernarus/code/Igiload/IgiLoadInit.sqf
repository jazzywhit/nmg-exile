waituntil {!isnil "bis_fnc_init"};
//if (isDedicated) exitwith {};
//if (isServer) exitwith {};
//waitUntil { !(isNull player) };
waitUntil { time > 0 };

IL_EV_Count = 0;
IL_Veh_Array = [];


//cutText ["IgiLoad is loading. Please wait...","PLAIN",2];
sleep (random 30);

//cutText [Format ["IgiLoad init Player: %1", Player],"PLAIN",2];

_null = [Player] execVM "code\IgiLoad\IgiLoad.sqf";
waitUntil {scriptDone _null};

sleep (random (IL_Check_Veh_Max - IL_Check_Veh_Min));

{
	if ((typeOf _x) in (IL_Supported_Vehicles_All)) then
	{
		IL_Veh_Array = IL_Veh_Array + [_x];
		_null = [_x] execVM "code\IgiLoad\IgiLoad.sqf";
		waitUntil {scriptDone _null};
	};
} forEach (vehicles);

call compileFinal preprocessFileLineNumbers "code\IgiLoad\IgiLoadTaru.sqf";
//cutText ["IgiLoad loaded. Have fun :)","PLAIN",2];

while {true} do 
{
	sleep (IL_Check_Veh_Min + (random (IL_Check_Veh_Max - IL_Check_Veh_Min)));
	IL_LST_Count = nearestObjects[getPos player,IL_Supported_Init_All,75];
	//Delete vehicles from "IL_Veh_Array" if not in "vehicles"
	{
		if !(_x in vehicles) then
		{
			IL_Veh_Array = IL_Veh_Array - [_x];
		};
	} forEach (IL_Veh_Array);
	{
		if (((typeOf _x) in (IL_Supported_Vehicles_All)) && !(_x in IL_Veh_Array)) then
		{
			IL_Veh_Array = IL_Veh_Array + [_x];
			_null = [_x] execVM "code\IgiLoad\IgiLoad.sqf";
			waitUntil {scriptDone _null};
		};
	} forEach IL_LST_Count;
};
