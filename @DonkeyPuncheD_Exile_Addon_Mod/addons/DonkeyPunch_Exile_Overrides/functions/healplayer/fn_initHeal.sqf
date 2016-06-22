if (!hasInterface && isServer) exitWith {
Diag_log "Initializing DonkeyPunch HealPlayer Compiles!";
};

private ['_code', '_function', '_file'];

{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;
    _code = compileFinal (preprocessFileLineNumbers _file);
    missionNamespace setVariable [_function, _code];
}
forEach
[
	['ExileClient_object_player_healPlayer', 'Custom\dpheal\ExileClient_object_player_healPlayer.sqf'],
	['ExileClient_object_player_network_healPatientResponse', 'Custom\dpheal\ExileClient_object_player_network_healPatientResponse.sqf']
];

true