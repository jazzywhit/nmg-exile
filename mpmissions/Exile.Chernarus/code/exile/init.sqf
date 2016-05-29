/**
 * Created by: Narrow Minded Gaming
 * Not intended for distribution
 * This file should have all functions that are overwriting the functions in Exile
 * Exile functions should exist in <mission_file>/code/
 * Completely custom functionality should exist in <mission_file>/custom/
 */

if (!isDedicated) then {
  ExileClient_object_player_event_onPlayerKilled = compile preprocessFileLineNumbers "code\ExileClient_object_player_event_onPlayerKilled.sqf";
};
