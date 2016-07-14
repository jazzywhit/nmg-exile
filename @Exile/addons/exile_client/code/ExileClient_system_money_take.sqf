/**
 * ExileClient_system_money_take
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_object"];
_object = _this;
if !(isNull _object) then 
{
	if !(ExileClientIsWaitingForInventoryMoneyTransaction) then 
	{
		ExileClientIsWaitingForInventoryMoneyTransaction = true;
		["takeMoneyRequest", [netId _object, 0]] call ExileClient_system_network_send;
	};
};