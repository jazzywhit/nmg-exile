/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_messageName","_messageParameters"];
_messageName = _this select 0;
_messageParameters = _this select 1;
PublicMessage = [_messageName, _messageParameters];
publicVariable "PublicMessage";
PublicMessage = nil;