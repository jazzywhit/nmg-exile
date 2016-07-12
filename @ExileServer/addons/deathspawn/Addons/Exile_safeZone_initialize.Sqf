/**
 * ExileClient_system_map_initialize
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 * MODIFIED by JohnO all credits go to @EXILE
 */

Exile_zombie_TraderZoneMarkerPositions = [];
Exile_zombie_TraderZoneMarkerPositionsAndSize = [];
{
	switch (getMarkerType _x) do 
	{
		case "ExileTraderZone": 
		{
			Exile_zombie_TraderZoneMarkerPositions pushBack (getMarkerPos _x);
			Exile_zombie_TraderZoneMarkerPositionsAndSize pushBack [getMarkerPos _x, (getMarkerSize _x) select 0];
		};
	};
}
forEach allMapMarkers;

diag_log format["-- DeathSpawn : Found SafeZones at :: %1 :: Zombies entering these areas will be killed",Exile_zombie_TraderZoneMarkerPositions];

uiSleep 60;

[15, JohnO_fnc_zombieInSafeZone, [], true] call ExileServer_system_thread_addtask;

