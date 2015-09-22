/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_sessionID","_playerObject","_playerUID","_playerData"];
_sessionID = _this select 0;
_playerObject = _sessionID call ExileServer_system_session_getPlayerObject;
_playerUID = getPlayerUID _playerObject;
_playerData = format["loadPlayer:%1", _playerUID] call ExileServer_system_database_query_selectSingle;
[_playerData,_playerObject,_playerUID,_sessionID] call ExileServer_object_player_database_load;