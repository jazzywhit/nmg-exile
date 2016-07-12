private ["_actualItem","_itemList","_itemChance","_rnd","_bags","_zombie"];

_zombie = _this select 0;

_randomNumber = random 100;

if (ZMB_ChanceForLoot >= _randomNumber) then
{	
	_bags = ["B_AssaultPack_khk","B_AssaultPack_dgtl","B_AssaultPack_rgr","B_AssaultPack_sgg","B_AssaultPack_blk","B_AssaultPack_cbr","B_AssaultPack_mcamo","B_AssaultPack_ocamo"];
	_zombie addBackpack (_bags select (random (count _bags)));

	for "_i" from 1 to ZLT_MAXITEM do
	{	
		_itemList = [];

		_rnd = random 100;												

		{
			_itemChance = _x select 1;

			if (_itemChance >= _rnd) then
			{
				_itemList = _itemList + [_x select 0];
			};
		} forEach ZMB_ITEMS;
		if !(_itemList isEqualTo []) then
		{	
			_actualItem = _itemList call BIS_fnc_selectRandom;
			
			_zombie addItemToBackpack _actualItem;
		};	
	};
};

/*

// OLD SYSTEM

_zombie = _this select 0;
_isMilitary = _this select 1;


_chanceForLoot = ZMB_ChanceForLoot;

_randomNumber = random 100;

if (ZMB_ChanceForLoot >= _randomNumber) then
{	

	_bags = ["B_AssaultPack_khk","B_AssaultPack_dgtl","B_AssaultPack_rgr","B_AssaultPack_sgg","B_AssaultPack_blk","B_AssaultPack_cbr","B_AssaultPack_mcamo","B_AssaultPack_ocamo"];
	_zombie addBackpack (_bags select (random (count _bags)));

	for "_i" from 0 to ZLT_MAXITEM do
	{
		_rndItemIndex = ZMB_ITEMS select (random (count ZMB_ITEMS -1));
		_rnd = random 100;

		if(_rnd <= _rndItemIndex select 1) then 
		{
			_item = _rndItemIndex select 0;
			if(_zombie canAdd _item)then
			{ 
				_zombie addItem _item; 
			};
		};
	};
};	
	
*/
