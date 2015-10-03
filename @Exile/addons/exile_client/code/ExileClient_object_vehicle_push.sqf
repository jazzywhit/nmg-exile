/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_object","_pos","_direction"];
_object = _this select 0;
_pos = getPosASL player;
_direction = getDir player;
if(local _object)then
{
	[_object,_direction,10,player] call ExileClient_util_vehicle_push;
}	
else
{
	["pushVehicleRequest",[netId _object,_direction,10,netId player]] call ExileClient_system_network_send;
};
true