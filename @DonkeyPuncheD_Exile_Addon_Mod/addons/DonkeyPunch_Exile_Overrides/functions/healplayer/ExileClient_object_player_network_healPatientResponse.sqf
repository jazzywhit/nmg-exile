/**
 * ExileClient_object_player_network_healReceivedRequest
 * created by DonkeyPunch Community Servers for:
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 * by =RAV=MusTanG / DirtySancheZ
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 private["_medicName","_msg"];
 _medicName = "A Good Samaritan";
 player setDamage 0;
 _msg = format["You have been healed by %1",_medicName];
 ["Success", [_msg]] call ExileClient_gui_notification_event_addNotification; 
 //["Exile_Item_InstaDoc"] call ExileClient_object_item_consume;
 diag_log format["This Heal was accepted and used by %1 from %2",player,_medicName];