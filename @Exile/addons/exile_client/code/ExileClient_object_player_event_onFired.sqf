/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_unit","_weapon","_muzzle","_mode","_ammo","_magazine","_projectile","_intersection","_firstInsection"];
_unit = _this select 0;
_weapon = _this select 1;
_muzzle = _this select 2;
_mode =	_this select 3;
_ammo = _this select 4;
_magazine =	_this select 5;
_projectile = _this select 6;
if (ExilePlayerInSafezone) then 
{
	if (local _projectile) then 
	{
		deleteVehicle _projectile;
	};
}
else 
{
	if (_ammo isKindOf "Exile_Ammo_Swing") then
	{
		player playActionNow "GestureAxeSwing01";
		[] call ExileClient_object_tree_chop;
	}
	else 
	{
		if (_weapon isEqualTo "Put") then
		{
			if (_magazine in ["DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag"]) then
			{
				if ((cursorTarget isKindOf "LandVehicle") || (cursorTarget isKindOf "Air") || (cursorTarget isKindOf "Boat") || (cursorTarget isKindOf "Man") || (cursorTarget isKindOf "Exile_Construction_Abstract_Static")) then
				{
					_intersection = lineIntersectsSurfaces 
					[
						AGLToASL positionCameraToWorld [0, 0, 0],  
						AGLToASL positionCameraToWorld [0, 0, 5],  
						player, 
						objNull, 
						true, 
						1, 
						"VIEW", 
						"GEOM" 
					];
					if (count _intersection > 0) then 
					{
						_firstInsection = _intersection select 0;
						_projectile setPosASL [0, 0, 0]; 
						_projectile attachTo [cursorTarget, cursorTarget worldToModel (ASLtoAGL (_firstInsection select 0)) ];
						_projectile setVectorUp (_firstInsection select 1);
					};
				};
			};
		}
		else 
		{
			if !(ExilePlayerInSafezone) then
			{
				if !(_weapon isEqualTo "Throw") then
				{
					ExileClientPlayerIsInCombat = true;
					ExileClientPlayerLastCombatAt = diag_tickTime;
					true call ExileClient_gui_hud_toggleCombatIcon;
				};
			};
		};
	};
};
true