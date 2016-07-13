//init
_WELCOME_CREDITS_SCRIPT 	= getNumber(missionConfigFile >> "CfgScriptControlMission" >> "SCRIPT_config" >> "WELCOME_CREDITS_SCRIPT");
_KILL_MESSAGE_SCRIPT 		= getNumber(missionConfigFile >> "CfgScriptControlMission" >> "SCRIPT_config" >> "KILL_MESSAGE_SCRIPT");
_IGILOAD_SCRIPT 			= getNumber(missionConfigFile >> "CfgScriptControlMission" >> "SCRIPT_config" >> "IGILOAD_SCRIPT");
_WEATHER_EFFECTS_SCRIPT 	= getNumber(missionConfigFile >> "CfgScriptControlMission" >> "SCRIPT_config" >> "WEATHER_EFFECTS_SCRIPT");
_FOG_SCRIPT 				= getNumber(missionConfigFile >> "CfgScriptControlMission" >> "SCRIPT_config" >> "FOG_SCRIPT");
_LOCK_PICK_SCRIPT 			= getNumber(missionConfigFile >> "CfgScriptControlMission" >> "SCRIPT_config" >> "LOCK_PICK_SCRIPT");
_BLOWOUT_SCRIPT				= getNumber(missionConfigFile >> "CfgScriptControlMission" >> "SCRIPT_config" >> "BLOWOUT_SCRIPT");
_ELECTRICAL_STORMS_SCRIPT 	= getNumber(missionConfigFile >> "CfgScriptControlMission" >> "SCRIPT_config" >> "ELECTRICAL_STORMS_SCRIPT");
_AVS_SCRIPT 				= getNumber(missionConfigFile >> "CfgScriptControlMission" >> "SCRIPT_config" >> "AVS_SCRIPT");
_WATER_CRATES 				= getNumber(missionConfigFile >> "CfgScriptControlMission" >> "SCRIPT_config" >> "WATER_CRATES");

//Loads mapcenter based on map name set in scriptcontrol
[] execVM "code\mapcenter.sqf";

//AVS
if  (_AVS_SCRIPT isEqualTo 1) then { 
[] execVM "AVS\AVS_fnc_init.sqf";
};

//Lockpick
if (_LOCK_PICK_SCRIPT isEqualTo 1) then {
	[] execVM "code\w4_lockpick\initLockpick.sqf";
	diag_log "Lock Pick - Loaded";
};

// Welcome Credits by Gr8
if (_WELCOME_CREDITS_SCRIPT isEqualTo 1) then {
	[] execVM "code\welcome.sqf";
	diag_log "Welcome Credits Loaded";
};

// Kill Messages By GR8
if (_KILL_MESSAGE_SCRIPT isEqualTo 1) then {
	[] execVM "code\KillMessages.sqf";
	diag_log "Kill Messages By GR8 - Loaded";
};

// Igiload
if (_IGILOAD_SCRIPT isEqualTo 1) then {
	[] execVM "code\IgiLoad\IgiLoadInit.sqf";
	diag_log "IgiLoad - Loaded";
};

//Ground Fog
if (_FOG_SCRIPT isEqualTo 1) then {
	_GF = [] execVM "code\fog.sqf";
	diag_log "Ground Fog - Loaded";
};

//blow out
if (_BLOWOUT_SCRIPT isEqualTo 1) then {
	// to use only 1 type 
	ns_blow_itemapsi = ["H_PilotHelmetFighter_B","H_PilotHelmetFighter_I","H_PilotHelmetFighter_O"];//set headgear protection here
	ns_blow_itemtype = 1; // 1=Headgear 2=Vest 3=Item  4=Goggles 5=Uniform
	ns_blow_removeapsi = true; // remove/destroy APSI item after storm
	ns_blow_delaymod = 0.1; //blowout delay - higher number longer time between blowouts

	//amount of damage blowout causes - value of 1 or higher will kill player!
	 // set to 0 to have player take no damage regardless of having APSI
	ns_blow_damage_unprotected = 0.60; //damage taken when outside unprotected
	ns_blow_damage_invehicle = 0.0; //damage taken when in vehicle
	ns_blow_damage_inbuilding = 0.0; // damage taken when inside
	ns_prep_time = 20; //time to prepare/hide after storm is started 

	ns_blowout = true;//Do not change
	ns_blowout_exile = true;//Do not change
	ns_blow_prep = false;//Do not change
	ns_blow_status = false;//Do not change
	ns_blow_action = false;//Do not change
	phasAPSI = false;//Do not change

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//				TESTING MAY NOT WORK IF THEY CAUSE ANY ISSUES SET TO FALSE
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	ns_blow_lightning = false; //spawn lightning at storm location
	//WARNING can destroy already damaged vehicles!!
	ns_blow_damage_vehicles = false; //damage ALL vehicles on map
	ns_blow_vehicle_damageamount = 0.10; // amount of damage vehicles take - value of 1 or higher will destroy vehicles!
	//WARNING - can cause choppers/planes to crash!!!
	ns_blow_disable_vehicles = false; // disable vehicles during storm - 
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	fnc_isInsideBuilding = compile preprocessFileLineNumbers "code\blowout\external\fn_isInsideBuilding.sqf";
	fnc_hasAPSI = compile preprocessFileLineNumbers "code\blowout\external\fn_hasAPSI.sqf";

	if (!isDedicated) then {
		 _bul = [] execVM "code\blowout\module\blowout_client.sqf";
		diag_log "BLOWOUT CLIENT - Loading";
	};

	if (isServer) then {
		_bul = [] execVM "code\blowout\module\blowout_server.sqf";
		sleep 2;
	};
};

if (_ELECTRICAL_STORMS_SCRIPT isEqualTo 1) then {
	[] execVM "code\storms\config_storms.sqf";
	diag_log "Electrical Storms - Loaded";
};

if (_WEATHER_EFFECTS_SCRIPT isEqualTo 1) then {
	[] execVM "code\weatherEffects.sqf";
	diag_log "Weather Effects - Loaded";
};

if (_WATER_CRATES isEqualTo 1) then {
	[] execVM "code\waterCrates\init.sqf";
	diag_log "Water Crates - Loaded";
};

// Zupa Control Points
//execVM "zcp.sqf";