//Controls all script on/off
// 1 is on 
// 0 is off

//Dynamic vehicles spawn with items
class CfgScriptControlMission
{
	class SCRIPT_config
	{
		//Map name
		MAPNAME = "Chernarus";
		//Spawn items in dynamic vehicles
		DYNAMIC_ITEMS_SCRIPT = 1;
		//chopwood directly into to vehicles
		CHOPWOOD_DIRECT_TO_TRUCK = 1;
		//IGILOAD
		IGILOAD_SCRIPT = 1;
		//Kill Messages - GR8
		KILL_MESSAGE_SCRIPT = 1;
		//Welcome Credits - GR8
		WELCOME_CREDITS_SCRIPT = 1;
		//Weather Effects by john
		WEATHER_EFFECTS_SCRIPT = 0;
		//Ground Fog
		FOG_SCRIPT = 1;
		//Lockpick by W4rGo
		LOCK_PICK_SCRIPT = 1;
		//Blowout
		BLOWOUT_SCRIPT = 0;
		//Electrical Storms
		ELECTRICAL_STORMS_SCRIPT = 0;
		//Advanced Vehicle System
		AVS_SCRIPT = 1;
		//pack bike - Into a vehicle, not a person
		PACK_BIKE = 1;
		//Need gps for map markers
		GPS_MAP_MARKERS = 1;
		//Respect Based loadouts
		RESPECT_BASED_LOADOUTS = 1;
	};

	//////////////////////////////////
	// DO NOT EDIT BELOW THIS LINE
	//////////////////////////////////
	class version_config
	{
		REPACK_VERSION = 0.01; //current release number
		BUILD_VERSION = 197; //should match the current git commits number
	};
};

