/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

private["_layer"];
//getvariable ["ace_common_isAlive", false]
if (alive player) then
{
  systemChat "Player is alive...";
	player allowDamage true;
	player removeEventHandler ["Fired",ExileSafeZoneFiredEH];
	player addEventHandler ["HandleDamage",{_this call ExileClient_object_player_event_onHandleDamage}];
	player setDamage 1;
}
else
{
	systemChat "Respawning...";
	_layer = "BIS_fnc_respawnCounter" call bis_fnc_rscLayer;
	_layer cuttext ["", "plain"];
	if !(ExileClientBleedOutThread isEqualTo -1) then
	{
		systemChat "Removing bleed out thread...";
		[ExileClientBleedOutThread] call ExileClient_system_thread_removeTask;
		ExileClientBleedOutThread = -1;
	};
	showChat true;
	[] spawn
	{
		uiSleep 4;
		[] execFSM "exile_client\fsm\login.fsm";
	};
};
