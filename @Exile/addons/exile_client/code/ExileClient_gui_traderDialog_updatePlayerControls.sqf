/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_dialog","_playerName","_playerMoney"];
disableSerialization;
_dialog = uiNameSpace getVariable ["RscExileTraderDialog", displayNull];
_playerName = _dialog displayCtrl 4000;
_playerName ctrlSetText (toUpper profileName);
_playerMoney = _dialog displayCtrl 4002;
_playerMoney ctrlSetStructuredText (parseText format["<t size='1' font='puristaMedium' align='right'>%1<img image='\exile_client\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>", ExileClientPlayerMoney]);
true