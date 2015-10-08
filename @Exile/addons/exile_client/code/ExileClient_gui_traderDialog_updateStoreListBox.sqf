/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_dialog","_categoryDropdown","_currentCategoryIndex","_currentCategory","_storeListBox","_traderConfig","_applyItemClassFilter","_filterToItemClasses","_primaryWeaponCheckbox","_handgunCheckbox","_categoryClass","_categoryItemClassNames","_itemClassName","_showItem","_configName","_quality","_salesPrice","_qualityColor","_indexEntryIndex"];
disableSerialization;
_dialog = uiNameSpace getVariable ["RscExileTraderDialog", displayNull];
_categoryDropdown = _dialog displayCtrl 4008;
_currentCategoryIndex = lbCurSel _categoryDropdown;
_currentCategory = _categoryDropdown lbData _currentCategoryIndex;
_storeListBox = _dialog displayCtrl 4009;
lbClear _storeListBox;
_traderConfig = missionConfigFile >> "CfgTraders" >> typeOf ExileClientCurrentTrader;
_applyItemClassFilter = false;
_filterToItemClasses = [];
if !((primaryWeapon player) isEqualTo "") then
{
	_primaryWeaponCheckbox = _dialog displayCtrl 4044;
	if (cbChecked _primaryWeaponCheckbox) then
	{
		_applyItemClassFilter = true;
		_filterToItemClasses append ((primaryWeapon player) call ExileClient_util_item_getCompatibleWeaponItems);
	};
};
if !((handgunWeapon player) isEqualTo "") then
{
	_handgunCheckbox = _dialog displayCtrl 4045;
	if (cbChecked _handgunCheckbox) then
	{
		_applyItemClassFilter = true;
		_filterToItemClasses append ((handgunWeapon player) call ExileClient_util_item_getCompatibleWeaponItems);
	};
};
{
	_categoryClass = _x;
	if (_currentCategoryIndex isEqualTo 0 || _currentCategory isEqualTo _categoryClass) then
	{
		_categoryItemClassNames = getArray(missionConfigFile >> "CfgTraderCategories" >> _categoryClass >> "items");
		{
			_itemClassName = _x;
			_showItem = true;
			if (_applyItemClassFilter) then
			{
				_showItem = _itemClassName in _filterToItemClasses;
			};
			if (_showItem) then
			{
				_configName = _x call ExileClient_util_gear_getConfigNameByClassName;
				_quality = getNumber(missionConfigFile >> "CfgExileArsenal" >> _itemClassName >> "quality");
				_salesPrice = getNumber(missionConfigFile >> "CfgExileArsenal" >> _itemClassName >> "price");
				_qualityColor = [1, 1, 1, 1];
				switch (_quality) do
				{
					case 2: 		 { _qualityColor = [0, 0.78, 0.93, 1]; };
					case 3:		 { _qualityColor = [0.7, 0.93, 0, 1]; };
					case 9000: 	 { _qualityColor = [0.93, 0, 0.48, 1]; };							
				};
				_indexEntryIndex = _storeListBox lbAdd getText(configFile >> _configName >> _itemClassName >> "displayName");
				_storeListBox lbSetData [_indexEntryIndex, _itemClassName];
				_storeListBox lbSetColor [_indexEntryIndex, _qualityColor];
		    	_storeListBox lbSetPicture [_indexEntryIndex, getText(configFile >> _configName >> _itemClassName >> "picture")];
		    	_storeListBox lbSetTextRight [_indexEntryIndex, format["%1", _salesPrice]];
		    	_storeListBox lbSetPictureRight [_indexEntryIndex, "exile_client\texture\ui\poptab_trader_ca.paa"];
		    	if (_salesPrice > ExileClientPlayerMoney) then
	    		{
	    			_storeListBox lbSetColorRight [_indexEntryIndex, [0.91, 0, 0, 0.6]];
	    		};
    		};
		}
		forEach _categoryItemClassNames;
	};
}
forEach getArray(_traderConfig >> "categories");
true