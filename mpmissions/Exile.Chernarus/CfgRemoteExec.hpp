class CfgRemoteExec
{
	class Functions
	{
		mode = 1;
		jip = 0;
		class fnc_AdminReq { allowedTargets=2; };
		class ExileServer_system_network_dispatchIncomingMessage { allowedTargets=2; };

		// Lockpick
        class w4_lockpick_fnc_lockpicked { allowedTargets = 2; };
        class w4_lockpick_fnc_lockpick_attempt { allowedTargets = 2; };
        class w4_lockpick_fnc_lockpick_failed { allowedTargets = 2; };
        class w4_lockpick_fnc_create_marker_client { allowedTargets = 1; };

        //AVS
        class AVS_fnc_rearmVehicle { allowedTargets=2; };
        class AVS_fnc_refuelVehicle { allowedTargets=2; };

	};
	class Commands
	{
		mode=0;
		jip=0;
	};
};