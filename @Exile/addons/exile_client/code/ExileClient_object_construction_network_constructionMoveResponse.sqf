/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_response","_objectClass"];
_response = _this select 0;
_objectClass = _this select 1;
if(_response)then
{
	_objectClass call ExileClient_construction_beginExistingObject;
	["Success",["Object Owned by you! Moving ALLOWED!"]] call ExileClient_gui_notification_event_addNotification;
}
else
{
	["Whoops",["Object Owned by NOT you! Moving DISALOWED!"]] call ExileClient_gui_notification_event_addNotification;
};
true