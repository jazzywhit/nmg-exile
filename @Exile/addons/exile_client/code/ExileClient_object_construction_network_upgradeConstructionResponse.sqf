/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_newObject"];
_newObject = _this select 0;
[player, "Exile_Item_FortificationUpgrade"] call ExileClient_util_playerCargo_remove;
["Success",["Successfuly Upgraded"]] call ExileClient_gui_notification_event_addNotification;
true