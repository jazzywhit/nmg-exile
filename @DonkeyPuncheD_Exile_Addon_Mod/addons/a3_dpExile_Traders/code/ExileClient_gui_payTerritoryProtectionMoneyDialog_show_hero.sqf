/**
 * ExileClient_gui_payTerritoryProtectionMoneyDialog_show
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display","_playerUID","_territoryDropDown","_flag","_buildRights","_index","_currencyDropDown","_payButton"];
disableSerialization;
_playerRank = ExileClientPlayerRank;
if (_playerRank > 4999.9) then 
{
createDialog "RscExilePayTerritoryProtectionMoneyDialog";
_display = uiNameSpace getVariable ["RscExilePayTerritoryProtectionMoneyDialog", displayNull];
_playerUID = getPlayerUID player;
_territoryDropDown = _display displayCtrl 4001;
lbClear _territoryDropDown;
{
	_flag = _x;
	_buildRights = _flag getVariable ["ExileTerritoryBuildRights", []];
	if (_playerUID in _buildRights) then
	{
		_name = _flag getVariable ["ExileTerritoryName", ""];
		_index = _territoryDropDown lbAdd _name;
		_territoryDropDown lbSetData [_index, netId _flag]; 
	};
}
forEach (allMissionObjects "Exile_Construction_Flag_Static");
_currencyDropDown = _display displayCtrl 4000;
_currencyDropDown ctrlEnable false;
lbClear _currencyDropDown;
_payButton = _display displayCtrl 4002;
_payButton ctrlEnable false;
}
else
{
["NeedHeroRank", []] call ExileClient_gui_notification_event_addNotification;
};