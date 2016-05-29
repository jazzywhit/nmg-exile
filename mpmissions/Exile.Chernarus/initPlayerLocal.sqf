////
// Static Objects
////

// Taken away for now
//#include "initServer.sqf"

if (!hasInterface || isServer) exitWith {};

_MAPNAME = getNumber(missionConfigFile >> "CfgScriptControlMisson" >> "SCRIPT_config" >> "MAPNAME");

if (_MAPNAME == "Altis") then{
	[] execVM "code\traders\altistraders.sqf";
};
if (_MAPNAME == "Esseker") then{
	[] execVM "code\traders\Essekertraders.sqf";
};
if (_MAPNAME == "Chernarus") then{
	[] execVM "code\traders\Chernarustraders.sqf";
};
if (_MAPNAME == "Sahrani") then{
	[] execVM "code\traders\Sahranitraders.sqf";
};
//al Rayak Map
if (_MAPNAME == "pja310") then{
	[] execVM "code\traders\pja310traders.sqf";
};
if (_MAPNAME == "Bornholm") then{
	[] execVM "code\traders\Bornholmtraders.sqf";
};
