/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_cancelEvent","_container"];
_cancelEvent = false;
_container = _this select 1;
if (ExileClientIsInConstructionMode) then
{
	_cancelEvent = true;	
}
else 
{	
	if ((locked _container) isEqualTo 2) then
	{
		_cancelEvent = true;
	}
	else
	{
		if (_container getVariable ["ExileIsLocked", 1] isEqualTo -1) then 
		{
			_cancelEvent = true;
		}
		else 
		{
			ExileClientInventoryOpened = true;
			ExileClientCurrentInventoryContainer = _container;
		};
	};
};
_cancelEvent // OKAY!