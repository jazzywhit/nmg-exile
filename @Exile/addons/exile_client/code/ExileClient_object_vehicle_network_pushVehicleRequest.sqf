/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_vehicle"];
_vehicle = _this select 0;
if(local _vehicle)then
{
	_this call ExileClient_util_vehicle_push;
}
else
{
	"PUSH: Local object is not local DEFUCK!" call ExileClient_util_log;
};
true