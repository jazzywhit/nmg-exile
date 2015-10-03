/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_vehicle","_pos"];
_vehicle = _this select 0;
if (local _vehicle) then
{
	_pos = getPosATL _vehicle;
	_pos set [2,(_pos select 2) + 0.1];
	_vehicle setPosATL _pos;
}
else
{
	["flipVehRequest",[netId _vehicle]] call ExileClient_system_network_send;
};
true