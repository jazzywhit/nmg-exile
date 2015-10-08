/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_dialog","_inventoryDropdown","_dropdownIndex","_tradeContainerType","_tradeVehicleObject","_inventoryListBox","_currentLoad","_maximumLoad","_items","_containerClass","_tradeVehicleNetID","_inventoryLoadProgress","_inventoryLoadValue","_itemClassName","_configName","_quality","_salesPrice","_qualityColor","_indexEntryIndex","_canSellItem","_containerClassName","_containerContainer","_itemsInContainer"];
disableSerialization;
_dialog = uiNameSpace getVariable ["RscExileTraderDialog", displayNull];
_inventoryDropdown = _dialog displayCtrl 4004;
_dropdownIndex = lbCurSel _inventoryDropdown;
_tradeContainerType = _inventoryDropdown lbValue _dropdownIndex;
_tradeVehicleObject = objNull;
_inventoryListBox = _dialog displayCtrl 4005;
lbClear _inventoryListBox;
switch (_tradeContainerType) do
{
	case 1: 
	{
		_currentLoad = (loadAbs player);
		_maximumLoad = 1200;
		_items = [player, true] call ExileClient_util_playerEquipment_list;
	};
	case 2:
	{
		_containerClass = getText(configFile >> "CfgWeapons" >> (uniform player) >> "ItemInfo" >> "containerClass");
		_maximumLoad = getNumber(configFile >> "CfgVehicles" >> _containerClass >> "maximumLoad");
		_currentLoad = (loadUniform player) * _maximumLoad;
		_items = (uniformContainer player) call ExileClient_util_containerCargo_list;
	};
	case 3: 
	{
		_containerClass = getText(configFile >> "CfgWeapons" >> (vest player) >> "ItemInfo" >> "containerClass");
		_maximumLoad = getNumber(configFile >> "CfgVehicles" >> _containerClass >> "maximumLoad");
		_currentLoad = (loadVest player) * _maximumLoad;
		_items = (vestContainer player) call ExileClient_util_containerCargo_list;
	};
	case 4:
	{
		_maximumLoad = getNumber(configFile >> "CfgVehicles" >> (backpack player) >> "maximumLoad");
		_currentLoad = (loadBackpack player) * _maximumLoad;
		_items = (backpackContainer player) call ExileClient_util_containerCargo_list;
	};
	default 
	{
		_tradeVehicleNetID = _inventoryDropdown lbData _dropdownIndex;
		_tradeVehicleObject = objectFromNetId _tradeVehicleNetID;
		_maximumLoad = getNumber(configFile >> "CfgVehicles" >> (typeOf _tradeVehicleObject) >> "maximumLoad");
		_items = _tradeVehicleObject call ExileClient_util_containerCargo_list;
		_currentLoad = _items call ExileClient_util_gear_calculateLoad;
	};
};
_inventoryLoadProgress = _dialog displayCtrl 4012;
_inventoryLoadProgress progressSetPosition (_currentLoad / (_maximumLoad max 1));
_inventoryLoadValue = _dialog displayCtrl 4014;
_inventoryLoadValue ctrlSetStructuredText (parseText format["<t size='1' font='puristaMedium' align='right'>%1/%2</t>", round(_currentLoad), _maximumLoad]);
{
	_itemClassName = _x;
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
	_indexEntryIndex = _inventoryListBox lbAdd getText(configFile >> _configName >> _itemClassName >> "displayName");
	_inventoryListBox lbSetData [_indexEntryIndex, _itemClassName];
	_inventoryListBox lbSetColor [_indexEntryIndex, _qualityColor];
	_inventoryListBox lbSetPicture [_indexEntryIndex, getText(configFile >> _configName >> _itemClassName >> "picture")];
	_canSellItem = true;
	if (_tradeContainerType isEqualTo 1) then
	{
		{
			_containerClassName = _x select 0;
			_containerContainer = _x select 1;
			if (_itemClassName isEqualTo _containerClassName) then
			{
				_itemsInContainer = _containerContainer call ExileClient_util_containerCargo_list;
				if !((count _itemsInContainer) isEqualTo 0) exitWith
				{
					_canSellItem = false;
				};
			};
		}
		forEach 
		[
			[uniform player, uniformContainer player], 
			[vest player, vestContainer player], 
			[backpack player, backpackContainer player]
		];
		if (_itemClassName isEqualTo (primaryWeapon player)) then
		{
			{
				{
					if !(_x isEqualTo "") then
					{
						_salesPrice = _salesPrice + getNumber (missionConfigFile >> "CfgExileArsenal" >> _x >> "price");
					};
				}
				forEach _x;
			}
			forEach 
			[
				primaryWeaponItems player,
				primaryWeaponMagazine player
			];
		};
		if (_itemClassName isEqualTo (handgunWeapon player)) then
		{
			{
				{
					if !(_x isEqualTo "") then
					{
						_salesPrice = _salesPrice + getNumber (missionConfigFile >> "CfgExileArsenal" >> _x >> "price");
					};
				}
				forEach _x;
			}
			forEach 
			[
				handgunItems player,
				handgunMagazine player
			];
		};
	};
	_salesPrice = floor(_salesPrice * 0.5); 
	if (_canSellItem) then
	{
    	if (_salesPrice > 0) then
    	{
    		_inventoryListBox lbSetValue [_indexEntryIndex, _salesPrice];
	    	_inventoryListBox lbSetTextRight [_indexEntryIndex, format["%1", _salesPrice]];
	    	_inventoryListBox lbSetPictureRight [_indexEntryIndex, "exile_client\texture\ui\poptab_trader_ca.paa"];
    	}
    	else 
    	{
    		_inventoryListBox lbSetValue [_indexEntryIndex, -1];
    		_inventoryListBox lbSetColorRight [_indexEntryIndex, [0.5, 0.5, 0.5, 1]];
    		_inventoryListBox lbSetTextRight [_indexEntryIndex, "(unsaleable)"];	
    	};
	}
	else 
	{
		_inventoryListBox lbSetValue [_indexEntryIndex, -1];
		_inventoryListBox lbSetColorRight [_indexEntryIndex, [0.5, 0.5, 0.5, 1]];
		_inventoryListBox lbSetTextRight [_indexEntryIndex, "(not empty)"];	
	};
}
forEach _items;
true