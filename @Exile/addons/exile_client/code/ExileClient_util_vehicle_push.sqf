/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_vehicle","_direction","_magnitude","_caller"];
_vehicle = _this select 0;
_direction = _this select 1;
_magnitude = _this select 2;
_caller = _this select 3;
try
{
	if!(local _vehicle)then
	{
		throw "No can do: not local"
	};
	if((_vehicle distance _caller) > 7)then
	{
		throw "No can do: to far away";
	};
	if(_magnitude > 15)then
	{
		throw "No can do: FuS ro Dah DISSALOWED!";
	};
	_vehicle setVelocity [
		(sin _direction * _magnitude),
		(cos _direction * _magnitude),
		0
	];
}
catch
{
	diag_log format ["Exile Push: %1",_exception];
};
true