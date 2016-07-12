/**
 * ExileClient_util_world_isInTraderZone
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
  * MODIFIED by JohnO all credits go to @EXILE
 */
 
private["_position","_result"];
_position = _this;
_result = false;
{
	if (((_x select 0) distance2D _position) < (_x select 1)) exitWith
	{
		_result = true;
	};
}
forEach Exile_zombie_TraderZoneMarkerPositionsAndSize;
_result