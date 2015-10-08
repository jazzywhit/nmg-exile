/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display","_hunger","_hungerValueControl","_hungerLabelControl","_thirst","_thirstValueControl","_thirstLabelControl"];
disableSerialization;
if (diag_tickTime - ExileHudStatsRenderedAt >= 0.25) then
{
	ExileHudStatsRenderedAt = diag_tickTime;
	_display = uiNamespace getVariable "RscExileHUD";
	_hunger = round (ExileClientPlayerAttributes select 2);
	_hungerValueControl = _display displayCtrl 1302;
	_hungerValueControl ctrlSetText format ["%1%2", _hunger, "%"];
	_hungerLabelControl = _display displayCtrl 1303;
	if (_hunger > 25) then
	{
		_hungerLabelControl ctrlSetTextColor [63/255, 212/255, 252/255, 1];
		_hungerValueControl ctrlSetTextColor [1, 1, 1, 1];
	}
	else 
	{
		_hungerLabelControl ctrlSetTextColor [221/255, 38/255, 38/255, 1];
		_hungerValueControl ctrlSetTextColor [221/255, 38/255, 38/255, 1];
	};
	_thirst = round (ExileClientPlayerAttributes select 3);
	_thirstValueControl = _display displayCtrl 1304;
	_thirstValueControl ctrlSetText format ["%1%2", _thirst, "%"];
	_thirstLabelControl = _display displayCtrl 1305;
	if (_thirst > 25) then
	{
		_thirstLabelControl ctrlSetTextColor [63/255, 212/255, 252/255, 1];
		_thirstValueControl ctrlSetTextColor [1, 1, 1, 1];
	}
	else 
	{
		_thirstLabelControl ctrlSetTextColor [221/255, 38/255, 38/255, 1];
		_thirstValueControl ctrlSetTextColor [221/255, 38/255, 38/255, 1];
	};
};