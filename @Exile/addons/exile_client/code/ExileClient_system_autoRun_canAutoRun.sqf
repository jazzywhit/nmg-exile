/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_canAutoRun"];
_canAutoRun = true;
try 
{
	if !((vehicle player) isEqualTo player) then
	{
		throw false;
	};
	if (surfaceIsWater (getPos player)) then
	{
		throw false;
	};
	if ((damage player) >= 0.5) then
	{
		throw false;
	};
}
catch 
{
	_canAutoRun = false;
};
_canAutoRun