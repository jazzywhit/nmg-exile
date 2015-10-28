/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 #include "CfgLootTables.hpp"

class CfgPatches
{
	class exile_server_config
	{
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};


class CfgBuildings
{
	///////////////////////////////////////////////////////////////////////////
	// Castles & Lighthouses & Life Guard Towers
	///////////////////////////////////////////////////////////////////////////
	class Land_LifeguardTower_01_F
	{
		table = "Tourist";
		positions[] = {{-0.498047, -0.222656, 1.13312}};
	};

	class Land_LightHouse_F
	{
		table = "Tourist";
		positions[] = {{-5.74805, 11.0859, -3.75002}, {0.789063, -2.94336, -11.0953}, {1.07813, -2.83008, 5.39755}};
	};

	class Land_Lighthouse_small_F
	{
		table = "Tourist";
		positions[] = {{-0.369141, 1.18555, -3.39546}, {4.32617, -0.462891, -3.39546}};
	};

	class Land_Castle_01_tower_F
	{
		table = "Tourist";
		positions[] = {{-1.66602, 0.603516, 7.94255}, {-1.99023, -1.70508, -1.0866}, {-2.14453, 2.73633, -3.95897}, {0.164063, 1.33203, -9.47995}, {1.14844, -1.18359, 7.94255}, {2.06641, 2.66992, -6.67494}, {2.15039, -1.89063, 1.70487}, {2.27344, 2.70703, 4.42336}};
	};

	///////////////////////////////////////////////////////////////////////////
	// Military
	///////////////////////////////////////////////////////////////////////////
	//"Land_Airport_center_F"
	//"Land_Airport_left_F"
	//"Land_Airport_right_F"
	// TODO: "Land_Cargo_House_V2_F",

	class Land_TentHangar_V1_F
	{
		table = "Military";
		positions[] = {{-8.1582, -2.20703, -4.08853}, {-8.1582, 6.85547, -4.08853}, {-8.52734, -7.57227, -4.08853}, {7.76953, -7.64453, -4.08853}, {8.16016, 1.89453, -4.08853}, {8.57617, 7.48438, -4.08853}};
	};

	class Land_Hangar_F
	{
		table = "Military";
		positions[] = {{-11.6641, 20.9063, -5.38129}, {-12.1133, 9.19336, -5.38129}, {-12.1543, -3.90625, -5.38129}, {-12.1816, -16.8906, -5.38129}, {1.75, 20.9688, -5.38129}, {11.3711, -19.2734, -5.38129}, {12.0469, -5.7168, -5.38129}, {12.7305, 6.83203, -5.38129}, {13.7285, 18.1602, -5.38129}};
	};

	class Land_Airport_Tower_F
	{
		table = "Military";
		positions[] = {{-0.363281, 6.25586, -10.4415}, {-0.636719, -2.08203, -1.4408}, {-0.638672, 2.21875, -4.44063}, {-0.705078, 1.94336, -7.44128}, {-0.751953, 5.2793, 1.55464}, {-1.10742, -4.67578, 2.25613}};
	};

	class Land_Cargo_House_V1_F
	{
		table = "Military";
		positions[] = {{-1.38281, 3.12109, 0.040287}, {1.24805, 2.54102, 0.0402873}};
	};

	class Land_Cargo_House_V3_F
	{
		table = "Military";
		positions[] = {{-2.0918, 1.58984, -0.0957484}, {1.11914, 3.17969, 0.0402873}};
	};

	class Land_Cargo_HQ_V1_F
	{
		table = "Military";
		positions[] = {{-0.294922, -3.42188, -3.27229}, {-1.46484, 3.26172, -3.27229}, {-2.02734, -2.62891, -0.747443}, {4.24609, 1.51758, -0.747443}, {4.98633, 3.64844, -3.27229}};
	};

	class Land_Cargo_HQ_V2_F
	{
		table = "Military";
		positions[] = {{-1.25586, 1.48828, -0.747442}, {-1.50391, -2.52148, -3.27229}, {-1.50391, 2.67773, -3.27229}, {-1.9043, -4.61133, -0.747442}, {5.35156, 1.64648, -0.747442}, {5.5332, 3.30859, -3.27229}};
	};

	class Land_Cargo_HQ_V3_F
	{
		table = "Military";
		positions[] = {{-1.56641, -2.93164, -0.747444}, {-1.81641, -4.90234, -3.27229}, {-1.89648, 0.654297, -3.27229}, {4.65234, 2.41602, -3.27229}, {5.24805, 1.60742, -0.747444}};
	};

	class Land_u_Barracks_V2_F
	{
		table = "Military";
		// There are broken?
		//positions[] = {{-0.505859, 3.2168, 0.605521}, {-0.601563, 3.07617, 3.9395}, {-11.0234, -2.65625, 0.60552}, {-11.1328, -3.58398, 3.9395}, {-12.377, 0.271484, 3.9395}, {-2.39453, -3.92773, 0.605342}, {-5.09766, -4.89844, 3.93943}, {-8.69922, 3.24414, 3.9395}, {-9.12695, 3.73047, 0.60552}, {10.3711, 3.51367, 0.605521}, {10.6484, 2.85156, 3.9395}, {13.0684, -3.30469, 0.605521}, {13.1934, -3.42383, 3.9395}, {3.28711, -3.98633, 0.605521}, {3.4707, -3.55469, 3.9395}, {6.22852, 3.50391, 3.9395}, {6.39258, 3.05664, 0.605521}};
		positions[] = {{9.75244, -1.66211, 1.43508}, {9.70215, -1.77148, -1.89791}, {-5.31592, -2.94531, -1.89791}, {-16.0903, 1.21094, -1.8979}, {6.95557, 4.13867, -1.89791}, {-14.6865, -2.08008, -1.89791}, {-3.89746, 3.95898, -1.89791}, {0.0639648, -2.16406, 1.43507}, {2.74951, 4.44336, 1.43507}, {2.84521, 4.22461, -1.89791}, {-12.3584, 4.30469, 1.43508}, {-12.1733, 4.46875, -1.89791}, {-16.123, 1.125, 1.43507}, {0.137695, -1.90625, -1.89791}, {-14.585, -1.94336, 1.43508}, {-5.88818, -3.99609, 1.43507}, {-3.96143, 4.37109, 1.43508}, {6.89014, 4.32227, 1.43507}};
	};

	class Land_i_Barracks_V2_F
	{
		table = "Military";
		positions[] = {{-0.505859, 3.2168, 0.605521}, {-0.601563, 3.07617, 3.9395}, {-11.0234, -2.65625, 0.60552}, {-11.1328, -3.58398, 3.9395}, {-12.377, 0.271484, 3.9395}, {-2.39453, -3.92773, 0.605342}, {-5.09766, -4.89844, 3.93943}, {-8.69922, 3.24414, 3.9395}, {-9.12695, 3.73047, 0.60552}, {10.3711, 3.51367, 0.605521}, {10.6484, 2.85156, 3.9395}, {13.0684, -3.30469, 0.605521}, {13.1934, -3.42383, 3.9395}, {3.28711, -3.98633, 0.605521}, {3.4707, -3.55469, 3.9395}, {6.22852, 3.50391, 3.9395}, {6.39258, 3.05664, 0.605521}};
	};

	class Land_i_Barracks_V1_F
	{
		table = "Military";
		positions[] = {{-0.464844, 3.49219, 0.605521}, {-0.476563, 3.95703, 3.9395}, {-10.4844, -3.32422, 3.9395}, {-11.1055, -2.92188, 0.605521}, {-12.3066, 0.222656, 0.605521}, {-2.29688, -4.23828, 0.605283}, {-3.89648, -4.80078, 3.93923}, {-8.66992, 3.86328, 0.605521}, {-9.03516, 3.31055, 3.9395}, {10.3301, 2.77734, 0.605521}, {10.4023, 3.18945, 3.9395}, {13.0352, -3.23438, 3.9395}, {13.1738, -3.31055, 0.605521}, {3.57227, -3.49414, 0.605522}, {3.61133, -2.98047, 3.9395}, {6.38281, 3.41992, 0.60552}, {6.4082, 2.87695, 3.9395}};
	};

	class Land_Cargo_Patrol_V1_F
	{
		table = "Military";
		positions[] = {{-1.6875, -1.03906, -0.55952}, {1.73828, -1.17383, -0.55952}};
	};

	class Land_Cargo_Patrol_V2_F
	{
		table = "Military";
		positions[] = {{-1.01953, -1.0918, -0.55952}, {1.82031, -0.695313, -0.55952}};
	};

	class Land_Cargo_Tower_V1_F
	{
		table = "Military";
		positions[] = {{-3.54785, -3.01758, 2.47987},{-3.15625, -0.837891, 5.00472},{-2.0498, -3.29883, -0.120125},{4.55957, 4.39258, -0.120125},{-4.42383, 2.45117, -0.120125},{-2.87598, 2.20898, -4.2958},{-2.88281, 4.14258, 5.00472},{0.235352, -1.19727, 5.07987},{3.58105, 4.11719, 2.47988},{1.27441, 3.17773, -8.24333},{2.50488, 0.0625, 5.00472}};
	};

	class Land_Cargo_Tower_V1_No1_F
	{
		table = "Military";
		positions[] = {{-2.4668, -4.10156, 5.00471}, {-2.7168, 1.0625, -0.120123}, {-2.83984, -2.95313, 2.47987}, {-3.06641, -2.66992, -0.120123}, {-3.12109, 2.42773, -4.2958}, {-3.16211, 4.51563, 5.00471}, {1.26367, 2.49609, -8.24333}, {2.25195, 4.30664, -0.120123}, {3.34766, 3.33203, 2.47987}, {3.66797, 1.8457, 5.00471}};
	};

	class Land_Cargo_Tower_V1_No2_F
	{
		table = "Military";
		positions[] = {{-2.71289, 3.0957, -0.120123}, {-2.83203, 5.06445, 5.00472}, {-3.48633, 2.28906, -4.2958}, {-3.64844, -2.87891, 2.47988}, {-3.77344, -3.32617, 5.00472}, {-3.80664, -1.75977, -0.120123}, {0.0625, -0.287109, 5.07988}, {1.58984, -2.11523, -0.120123}, {2.13672, 2.20703, -8.24332}, {3.57422, 4.22461, 2.47988}, {3.75, 1.31055, 5.00472}, {4.98633, 3.90625, -0.120123}};
	};

	class Land_Cargo_Tower_V1_No3_F
	{
		table = "Military";
		positions[] = {{-0.214844, -0.460938, 5.07988}, {-2.33203, -2.96094, -0.120119}, {-2.89648, -4.0625, 5.00472}, {-3.08008, -2.8125, 2.47988}, {-3.28711, 2.60352, -4.2958}, {-3.61328, 4.44141, 5.00472}, {-4.01758, 1.86133, -0.120119}, {1.54688, 2.61133, -8.24332}, {3.52734, 3.8418, 2.47988}, {3.5332, -0.386719, 5.00472}, {4.88477, 4.18945, -0.120119}};
	};

	class Land_Cargo_Tower_V1_No4_F
	{
		table = "Military";
		positions[] = {{-2.68555, -3.07031, -0.120119}, {-2.93359, -4.27148, 5.00472}, {-3.22461, 4.84375, 5.00472}, {-3.6543, 1.57227, -4.2958}, {-3.70508, -3.0332, 2.47988}, {-4.26367, 0.980469, -0.120119}, {2.1543, 2.08789, -8.24332}, {3.46289, 2.25781, 2.47988}, {3.62305, 2.16797, 5.00472}, {5.10156, 4.20898, -0.120119}};
	};

	class Land_Cargo_Tower_V1_No5_F
	{
		table = "Military";
		positions[] = {{-2.25781, -2.77344, -0.120119}, {-2.375, -4.45508, 5.00472}, {-2.41602, 5.18164, 5.00472}, {-2.94922, 2.4082, -4.2958}, {-3.89648, -2.7832, 2.47988}, {-4.03906, 1.43945, -0.120119}, {0.0410156, -0.8125, 5.07988}, {1.62305, 2.55664, -8.24332}, {2.97461, -0.335938, 5.00472}, {3.90039, 3.68555, 2.47988}, {4.80859, 3.57422, -0.120117}};
	};

	class Land_Cargo_Tower_V1_No6_F
	{
		table = "Military";
		positions[] = {{-1.6875, -2.5918, -0.120119}, {-3.16992, -3.74219, 5.00472}, {-3.41797, 1.87305, -0.120119}, {-3.49805, 2.06836, -4.2958}, {-3.81055, 4.59766, 5.00472}, {-3.92969, -2.12109, 2.47988}, {1.92578, 2.27344, -8.24332}, {3.50195, 2.76563, 2.47988}, {3.64258, 0.0078125, 5.00472}, {5.19141, 4.45117, -0.120119}};
	};

	class Land_Cargo_Tower_V1_No7_F
	{
		table = "Military";
		positions[] = {{-2.59766, -3.14063, -0.120119}, {-2.7832, 1.94531, -4.2958}, {-2.83203, 1.58594, -0.120119}, {-3.20508, 4.62891, 5.00472}, {-3.29883, -2.90234, 5.00472}, {-3.87891, -3.11914, 2.47988}, {0.228516, -1.05273, 5.07988}, {1.65234, 2.58594, -8.24332}, {3.40039, 3.05859, 2.47988}, {4.18164, 0.246094, 5.00472}, {4.42578, 3.99805, -0.120119}};
	};

	class Land_Cargo_Tower_V2_F
	{
		table = "Military";
		positions[] = {{4.29492, 3.70508, -0.120117}, {-2.5293, -3.10742, 2.47988}, {-2.6543, 2.01172, -4.2958}, {-2.66797, -3.4707, 5.00472}, {-2.67773, 4.97461, 5.00472}, {-3.06836, 1.80273, -0.120117}, {-3.25586, -3.56445, -0.120117}, {0.611328, 0.0214844, 5.07988}, {2.46094, 1.92383, -8.24332}, {2.61328, -0.296875, 2.47988}, {3.07422, 4.14063, 2.47988}, {3.50195, 1.22656, 5.00472}};
	};

	class Land_Cargo_Tower_V3_F
	{
		table = "Military";
		positions[] = {{-1.59375, -2.7168, -0.120119}, {-2.40039, 2.39648, -4.2958}, {-3.24023, -3.17773, 5.00472}, {-3.51367, 4.57617, 5.00472}, {-3.70703, -3.60547, 2.47988}, {-4.54883, 2.47266, -0.120119}, {0.142578, -0.179688, 5.07988}, {2.2793, 2.25391, -8.24332}, {3.87109, 3.3418, 2.47988}, {4.22656, 0.390625, 5.00472}, {5.05469, 4.16406, -0.120119}};
	};

	class Land_MilOffices_V1_F
	{
		table = "Military";
		positions[] = {{-11.6309, -5.04492, -2.86675}, {-15.1172, 9.07617, -2.86675}, {-15.123, 2.19336, -2.86675}, {-15.5938, -4.07227, -2.86675}, {-3.46484, -3.22266, -2.86675}, {-4.10352, 9.33398, -2.86675}, {-7.09766, -2.95898, -2.86675}, {-8.6582, 9.02344, -2.86675}, {0.794922, -3.08594, -2.86675}, {1.45703, 8.60156, -2.86675}, {13.9258, 0.492188, -2.86675}, {15.3613, 8.10742, -2.86675}, {8.54883, 8.01563, -2.86675}, {8.61133, -4.3125, -2.86675}, {8.68359, -1.73438, -2.86675}};
	};

	class Land_Radar_F
	{
		table = "Military";
		positions[] = {{-10.1797, -9.80859, -6.00412}, {-9.61719, 10.4219, -6.00412}, {11.6211, 1.06641, -6.00412}, {2.81445, 12.2578, -7.78305}};
	};

	///////////////////////////////////////////////////////////////////////////
	// Medical
	///////////////////////////////////////////////////////////////////////////
	//"Land_Hospital_main_F",
	//"Land_Hospital_side1_F",
	//"Land_Hospital_side2_F",
	class Land_Medevac_house_V1_F
	{
		table = "Medical";
		positions[] = {{-1.25, 1.01367, -0.105749}, {1.38281, 2.82227, 0.0302868}};
	};

	class Land_Medevac_HQ_V1_F
	{
		table = "Medical";
		positions[] = {{-0.896484, 2.24219, -3.26622}, {-1.45898, -3.75391, -3.26622}, {-1.54297, 1.05469, -0.741375}, {5.17578, 2.66992, -3.26622}, {5.6875, 1.63477, -0.741374}};
	};

	///////////////////////////////////////////////////////////////////////////
	// Garages / Vehicle
	///////////////////////////////////////////////////////////////////////////
	class Land_FuelStation_Build_F
	{
		table = "VehicleService";
		positions[] = {{-1.02344, -0.509766, -1.33601}, {2.07617, 0.580078, -1.3361}};
	};

	class Land_i_Garage_V1_F
	{
		table = "VehicleService";
		positions[] = {{-0.925781, 2.05469, -0.0974805}, {-1.52539, -1.99805, -0.0974805}, {3.80273, -0.939453, -0.0974805}};
	};

	class Land_i_Garage_V2_F
	{
		table = "VehicleService";
		positions[] = {{-0.00585938, -1.24609, -0.0974801}, {-2.16016, 1.54492, -0.0974798}, {1.60547, 2.11719, -0.0974803}, {3.2832, -1.51953, -0.0974796}};
	};

	class Land_CarService_F
	{
		table = "VehicleService";
		positions[] = {{-0.964844, 1.77148, -1.25606}, {-3.15625, 7.39844, -1.25606}, {-4.54688, 4, -1.25606}, {0.492188, 2.8457, -1.25606}, {3.50781, -0.113281, -1.25606}, {3.74414, 6.12891, -1.25606}};
	};

	///////////////////////////////////////////////////////////////////////////
	// Civillian Lower Class
	///////////////////////////////////////////////////////////////////////////
	// TODO: "Land_u_Addon_02_V1_F",
	// TODO: "Land_i_Addon_02_V1_F",
	// TODO: "Land_i_Addon_03mid_V1_F",

	class Land_Chapel_Small_V1_F
	{
		table = "CivillianLowerClass";
		positions[] = {{0.482422, 0.65625, -0.867858}, {3.08984, -1.2832, -0.867858}};
	};

	class Land_Chapel_Small_V2_F
	{
		table = "CivillianLowerClass";
		positions[] = {{0.556641, -0.966797, -0.867857}, {3.54297, 0.486328, -0.867857}};
	};

	class Land_Chapel_V1_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-3.22852, -3.4043, -2.80848}, {-3.65625, 2.8418, -2.80848}, {-6.47266, -2.20703, -2.80848}, {3.98438, 2.72852, -2.80848}, {4.73242, -2.59375, -2.80848}, {9.35938, -0.285156, -2.60848}};
	};

	class Land_Chapel_V2_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-2.36523, 2.46289, -2.80848}, {-3.06445, -2, -2.80848}, {-6.61328, -1.54688, -2.80848}, {4.75781, 3.67383, -2.80848}, {4.82813, -2.96484, -2.80848}, {9.03711, 0.316406, -2.60848}};
	};

	class Land_Church_01_V1_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-4.36719, -5.81055, -5.46942}, {-4.46875, -2.23633, -5.74363}, {-4.54492, 1.57422, -5.74363}, {-4.8125, 5.58789, -5.49442}, {3.00781, -5.92969, -6.44017}, {4.19141, 5.77148, -6.44865}};
	};

	class Land_i_Addon_03_V1_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-2.98828, -0.244141, -0.0501008}, {3.53711, -0.578125, -0.0501013}};
	};

	class Land_i_Addon_04_V1_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-1.25, 0.0175781, 0.0796976}};
	};

	class Land_u_Addon_01_V1_F
	{
		table = "CivillianLowerClass";
		positions[] = {{1.69727, 3.04102, 0.0627024}, {4.28125, 1.1543, 0.0627022}};
	};

	class Land_i_Windmill01_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-0.585938, 0.908203, -3.53162}};
	};

	class Land_d_Windmill01_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-0.935547, 0.259766, -2.2985}, {-1.65039, 0.365234, 0.947132}};
	};

	class Land_Slum_House01_F
	{
		table = "CivillianLowerClass";
		positions[] = {{0.767578, 0.773438, -1.07847}};
	};

	class Land_Slum_House02_F
	{
		table = "CivillianLowerClass";
		positions[] = {{1.13867, 2.50391, -0.798099}, {1.59375, -0.0566406, -0.798099}};
	};

	class Land_Slum_House03_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-1.29688, 0.566406, -1.07377}, {2.27148, 1.125, -1.07377}};
	};

	class Land_cargo_house_slum_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-3.04688, -0.306641, -0.36025}};
	};

	class Land_i_Stone_HouseBig_V1_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-0.777344, 2.19922, 1.21893}, {-1.33789, 0.355469, -1.65434}, {1.58594, -0.576172, 1.21893}, {3.7793, 1.48828, -1.64097}};
	};

	class Land_i_Stone_HouseBig_V2_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-0.207031, 2.62305, 1.21893}, {-1.26953, 0.136719, -1.65416}, {2.55078, -0.556641, 1.21893}, {4.26367, 1.48828, -1.63971}};
	};

	class Land_i_Stone_HouseBig_V3_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-0.484375, 2.57617, 1.21893}, {-0.759766, 0.404297, -1.65283}, {2.29102, -1.02539, 1.21893}, {4.02734, 1.1543, -1.64032}};
	};

	class Land_i_Stone_HouseSmall_V1_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-3.47656, 2.25195, -0.627007}, {-6.96094, 3.02539, -0.619827}, {3.27148, 2.02734, -0.611488}, {6.61914, 2.50977, -0.596566}};
	};

	class Land_i_Stone_HouseSmall_V2_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-2.41992, 1.76758, -0.632064}, {-7.00391, 1.83594, -0.633547}, {3.77148, 2.05664, -0.609262}, {7.33008, 2.02539, -0.593399}};
	};

	class Land_i_Stone_HouseSmall_V3_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-2.68945, 2.05664, -0.628867}, {-7.74023, 3.45313, -0.615288}, {3.60938, 1.61328, -0.609982}, {6.83984, 3.07227, -0.595582}};
	};

	class Land_i_Stone_Shed_V1_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-2.63867, 1.96484, -0.100502}, {1.19141, 2.16992, -0.100502}};
	};

	class Land_i_Stone_Shed_V2_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-2.12305, 1.86914, -0.100502}, {1.78125, 1.625, -0.100502}};
	};

	class Land_i_Stone_Shed_V3_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-2.3125, 2.05469, -0.100502}, {1.79297, 1.93359, -0.100502}};
	};

	class Land_u_House_Big_01_V1_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-1.89648, 6.0332, 0.855065}, {-2.35742, 5.4082, -2.56494}, {-2.89648, -3.33203, 0.855065}, {-3.0957, -0.896484, -2.65494}, {1.25, -1.31445, -2.56494}, {2.0293, -0.521484, 0.855065}, {2.36523, 5.47461, -2.56493}, {2.95117, 5.49609, 0.855065}, {2.99023, -5.02734, 0.855065}, {3.58789, -4.98828, -2.56494}};
	};

	class Land_u_House_Big_02_V1_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-2.43164, 2.83008, 0.965823}, {-2.70703, -2.07422, 0.965824}, {-2.88281, 1.88086, -2.54418}, {0.871094, -1.66016, -2.54418}, {2.41602, 3.00977, 0.965824}, {3.66992, -5.79883, -2.10418}, {3.9082, 3.56055, -2.54418}};
	};

	class Land_u_House_Small_01_V1_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-1.18359, 3.63281, -0.904629}, {-1.7793, -2.59961, -0.903945}, {3.25195, 3.44531, -0.904572}};
	};

	class Land_u_House_Small_02_V1_F
	{
		table = "CivillianLowerClass";
		positions[] = {{-0.916016, -2.17969, -0.71971}, {-1.49609, 0.962891, -0.714579}, {3.83203, 1.15234, -0.713537}, {5.80469, -1.7207, -0.710968}};
	};

	///////////////////////////////////////////////////////////////////////////
	// Civillian Upper Class
	///////////////////////////////////////////////////////////////////////////
	class Land_Offices_01_V1_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-13.502, -6.54883, 9.84601}, {10.7676, -5.27734, 4.66547}, {-10.7031, 6.85156, -7.05899}, {-3.26953, 5.84961, 9.84601}, {1.09375, -4.51172, -7.05899}, {5.52148, 2.22852, 0.752261}, {5.68164, 4.16602, -7.05899}, {5.94531, -2.68945, -3.15997}, {6.1875, 2.40625, 4.66546}, {9.07422, -4.97656, 9.84601}};
	};

	class Land_i_House_Big_01_V1_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-2.21484, 5.46875, -2.56493}, {-3.24023, -1.5918, -2.65493}, {0.558594, -0.640625, 0.855072}, {1.24023, -1.98828, -2.56493}, {1.66602, -5.2832, 0.855072}, {2.19531, 5.19922, -2.56493}, {2.4375, 5.01172, 0.855076}, {2.87305, -5.01758, -2.56493}};
	};

	class Land_i_House_Big_01_V2_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-2.05078, 5.41016, 0.855071}, {-2.11133, 5.51758, -2.56493}, {-3.19531, -1.45117, -2.65493}, {0.328125, 0.283203, -2.56493}, {0.759766, -1.29688, 0.855071}, {1.27539, -5.21484, 0.855071}, {2.25195, -4.56445, -2.56493}, {3.68359, 5.18359, 0.855071}};
	};

	class Land_i_House_Big_01_V3_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-2.78125, 5.69336, -2.56493}, {-2.7832, 5.31055, 0.855072}, {-2.78906, 0.654297, 0.855072}, {-3.03906, -1.11133, -2.65493}, {0.675781, -1.29883, -2.56493}, {1.61133, -0.865234, 0.855072}, {2.51758, 5.85938, 0.855072}, {2.65625, -4.94531, -2.56493}, {2.99414, -5.15625, 0.855073}, {3.16211, 5.16406, -2.56493}};
	};

	class Land_i_House_Big_02_V1_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-1.69141, -2.51172, 0.784063}, {-2.58789, 3.63672, 0.784063}, {-2.86914, 2.97266, -2.62327}, {1.15234, -1.65625, -2.62327}, {2.55273, 1.625, 0.784063}, {3.08203, 2.11914, -2.62327}, {3.33594, -5.625, -2.28594}};
	};

	class Land_i_House_Big_02_V2_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-2.08789, -2.46484, 0.784063}, {-2.54688, 2.53906, -2.62327}, {-3.01758, 3.12109, 0.784063}, {1.11328, -1.46289, -2.62327}, {2.68945, 2.03711, 0.784063}, {3.02734, 2.27344, -2.62327}, {3.26367, -5.55273, -2.28594}};
	};

	class Land_i_House_Big_02_V3_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-2.50391, -2.10742, -2.62327}, {-3.00781, 3.68164, 0.784063}, {-3.0957, 2.57227, -2.62327}, {-3.31055, -2.88867, 0.784063}, {1.26953, -1.73438, -2.62327}, {2.40234, 2.26953, -2.62327}, {2.89844, 2.11719, 0.784064}, {3.26758, -5.52734, -2.28594}};
	};

	class Land_i_House_Small_01_V1_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-1.2207, 3.05078, -1.0419}, {-2.74414, -0.560547, -1.04199}, {3.06641, -1.90234, -1.0404}, {3.35547, 2.94336, -1.04187}};
	};

	class Land_i_House_Small_01_V2_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-2.53711, -1.80664, -1.0418}, {-3.90625, 3.26367, -1.04239}, {3.31836, -1.31641, -1.04058}, {3.38672, 3.78906, -1.04213}};
	};

	class Land_i_House_Small_01_V3_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-0.738281, 3.17578, -1.04194}, {-2.46094, -2.16992, -1.04174}, {-2.68359, -1.76563, -1.04187}, {-2.76563, 3.31641, -1.04232}, {3.07422, -1.27539, -1.04059}, {3.08398, 3.04883, -1.0419}, {3.41406, 3.10547, -1.04192}, {3.61719, -0.394531, -1.04086}};
	};

	class Land_i_House_Small_02_V1_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-1.08008, -2.11133, -0.709651}, {-1.18945, 0.785156, -0.705689}, {2.64258, -2.09766, -0.704848}, {5.95313, 0.556641, -0.700583}};
	};

	class Land_i_House_Small_02_V2_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-1.29688, 1.06641, -0.704727}, {-1.56836, -1.83789, -0.710279}, {2.85352, -1.52148, -0.704572}, {2.88086, 1.76367, -0.702332}, {5.21289, 0.935547, -0.701534}};
	};

	class Land_i_House_Small_02_V3_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-1.35352, 0.873047, -0.705387}, {-1.5, -2.00781, -0.710184}, {3.49219, -1.16602, -0.703744}, {5.61328, 1.51367, -0.70101}};
	};

	class Land_i_House_Small_03_V1_F
	{
		table = "CivillianUpperClass";
		positions[] = {{-3.89648, -0.134766, -0.371629}, {0.419922, 2.68555, -0.371629}, {3.59961, 2.0918, -0.371629}, {3.70703, -4.19727, -0.371629}};
	};

	///////////////////////////////////////////////////////////////////////////
	// Shops
	///////////////////////////////////////////////////////////////////////////
	class Land_i_Shop_01_V1_F
	{
		table = "Shop";
		positions[] = {{-0.863281, 6.10938, -2.76158}, {-1.2168, 0.232422, -2.76158}, {-1.2832, -0.884766, 1.10984}, {-2.28516, 6.1875, 1.10975}};
	};

	class Land_i_Shop_01_V2_F
	{
		table = "Shop";
		positions[] = {{-1.17969, 5.32813, -2.76158}, {-18.127, 16.7285, -2.74088}, {-2.39258, 5.51563, 1.10978}, {-2.53906, 0.253906, -2.76158}, {-2.70703, -1.4707, 1.10992}, {-24.2051, 3.65039, 1.25308}, {1.15625, 1.20313, 1.10906}};
	};

	class Land_i_Shop_01_V3_F
	{
		table = "Shop";
		positions[] = {{-1.5918, 5.35156, -2.76158}, {-2.39258, -0.544922, -2.76158}, {-2.73242, -1.03906, 1.10991}, {-2.98242, 5.80664, 1.10999}, {1.66016, 1.70508, 1.10901}};
	};

	class Land_i_Shop_02_V1_F
	{
		table = "Shop";
		positions[] = {{-0.824219, 1.10742, -2.67036}, {-4.04883, -3.18555, 1.2386}, {-4.43359, -1.98242, -2.69136}, {0.78125, -2.35547, -2.66928}, {2.27734, 1.0957, 1.2386}};
	};

	class Land_i_Shop_02_V2_F
	{
		table = "Shop";
		positions[] = {{-0.171875, -1.43359, -2.66855}, {-2.57422, -4.19336, 1.23859}, {-4.51758, 2.74023, -2.66855}, {1.61523, 0.28125, 1.23859}};
	};

	class Land_i_Shop_02_V3_F
	{
		table = "Shop";
		positions[] = {{-1.01953, 0.71875, -2.66924}, {-2.86719, -3.83594, 1.23859}, {-4.25195, 3.58789, -2.66855}, {1.56641, 0.509766, 1.23859}};
	};

	class Land_u_Shop_01_V1_F
	{
		table = "Shop";
		positions[] = {{-1.14258, 1.23438, -2.88084}, {-2.32422, 3.14648, 0.9905}, {-3.31836, 5.81836, 0.990853}, {0.808594, -0.544922, 0.990474}, {2.58789, 5.81641, -2.88084}};
	};

	class Land_u_Shop_02_V1_F
	{
		table = "Shop";
		positions[] = {{-3.46484, -1.625, 1.23859}, {-3.9082, 3.0957, -2.66855}, {0.751953, -3.26563, -2.66855}, {1.71484, 0.486328, 1.23859}};
	};

	class Land_Kiosk_blueking_F
	{
		table = "Shop";
		positions[] = {{-1.62109, 0.341797, -1.76588}, {1.36328, -0.908203, -1.76588}};
	};

	class Land_Kiosk_gyros_F
	{
		table = "Shop";
		positions[] = {{-1.20898, -1.07813, -1.97606}, {1.26758, -0.128906, -1.97606}};
	};

	class Land_Kiosk_redburger_F
	{
		table = "Shop";
		positions[] = {{-1.07617, -0.335938, -2.87051}, {1.42188, -0.373047, -2.87051}};
	};

	///////////////////////////////////////////////////////////////////////////
	// Industrial
	///////////////////////////////////////////////////////////////////////////
	// TODO: "Land_Factory_Main_F"

	class Land_Unfinished_Building_01_F
	{
		table = "Industrial";
		positions[] = {{-0.158203, 3.50391, 1.19791}, {-2.34375, 4.20898, -2.29709}, {-2.51563, 0.337891, 1.19791}, {-3.25391, 0.0351563, -2.29709}, {2.45508, -0.144531, -2.29709}, {3.10742, -2.34766, 1.19791}};
	};

	class Land_Unfinished_Building_02_F
	{
		table = "Industrial";
		positions[] = {{-0.890625, -3.35742, 0.976167}, {-2.31055, -1.57227, -2.48553}, {-6.36523, 2.20898, 0.976168}, {-6.58398, 3.67383, -2.50139}, {3.58008, 3.13281, -2.49362}, {4.33594, 3.00391, 0.976168}};
	};

	class Land_WIP_F
	{
		table = "Industrial";
		positions[] = {{-10.0645, -4.58398, 8.3499}, {-12.5254, 10.1191, 8.348}, {-13.3496, 9.04883, 12.3173}, {-14.3477, -2.64844, 0.392311}, {-15.1621, 9.90039, 0.407514}, {-15.9004, -9.26367, 12.3304}, {-16.0352, -2.52734, 4.32572}, {-16.0996, 4.24023, 0.444829}, {-16.4004, 8.88672, 4.32572}, {-16.7813, -8.80078, 0.347982}, {-17.0195, -8.72852, 4.32572}, {-3.60156, -14.6484, 4.32041}, {-4.18359, -1.03516, 0.386505}, {-6.93359, -0.988281, 12.1457}, {-7.66016, 9.24414, 0.417827}, {-7.77344, -10.4785, 0.359629}, {-8.33008, -14.7305, 12.3244}, {-8.73242, 9.51953, 4.32572}, {-8.88867, -13.3887, 0.355543}, {11.9922, -7.99219, 12.2546}, {12.9023, 9.91797, 0.448912}, {18.0801, -9.25781, 4.32428}, {19.5586, -7.8457, 8.33803}, {2.11719, 9.48438, 0.337147}, {20.6309, -9.31445, 0.329187}, {22.334, -2.5332, 4.32572}, {24.0859, -0.179688, 8.29181}, {3.30859, 6.66602, 8.36808}, {3.99219, -8.87891, 8.34295}, {4.74414, -8.89063, 4.32432}, {6.0332, -8.34961, 0.384681}, {7.08984, 10.4727, 4.32572}, {8.53906, 8.4082, 0.415831}, {9.10742, -1.40625, 0.431863}, {9.64844, 6.28906, 12.3112}};
	};

	class Land_dp_smallTank_F
	{
		table = "Industrial";
		positions[] = {{-0.0898438, -1.58203, 5.32797}};
	};

	class Land_dp_mainFactory_F
	{
		table = "Industrial";
		positions[] = {{-12.8477, -4.8457, -4.45162}, {-15.4961, 6.70703, -4.45162}, {-6.36133, -2.13477, 1.18268}, {-6.91211, -15.3555, 1.18268}, {0.736328, 8.16406, 1.18268}, {1.25391, -10.5801, 1.18268}, {12.8926, 7.0332, -5.51301}, {13.0332, -3.95117, -4.22302}, {13.1719, 4.60742, -4.22302}, {13.2676, 0.710938, -4.22302}, {14.793, -16.8613, -4.08302}, {18.1406, -9.24023, -4.08302}, {19.0566, 5.17969, -7.61482}, {19.0996, -5.68555, -5.51301}, {19.3535, 2.14844, -5.51301}, {3.43555, -2.94141, 1.18268}, {8.82617, -7.33008, -0.280016}, {8.92773, -13.9453, -0.280016}, {9.13281, 8.58203, -0.280016}};
	};

	class Land_dp_bigTank_F
	{
		table = "Industrial";
		positions[] = {{-1.54102, -1.93359, 3.59794}, {-5.79883, -0.496094, 3.59794}, {5.9707, -1.84375, 3.59794}};
	};

	class Land_dp_smallFactory_F
	{
		table = "Industrial";
		positions[] = {{-1.97266, 3.14844, 2.62608}, {-6.49609, -4.92773, 2.82442}, {5.32422, -3.69531, 2.95848}, {9.49805, -4.71094, 1.21193}, {9.95898, 1.41211, 1.21193}};
	};

	class Land_u_Shed_Ind_F
	{
		table = "Industrial";
		positions[] = {{-2.41211, 4.91602, -1.40862}, {-6.54688, -0.166016, -1.40862}, {10.6914, 2.14648, -1.40862}};
	};

	class Land_Metal_Shed_F
	{
		table = "Industrial";
		positions[] = {{-3.34375, -1.80273, -1.343}, {3.52539, -2.15625, -1.343}};
	};

	class Land_i_Shed_Ind_F
	{
		table = "Industrial";
		positions[] = {{-2.66797, -0.576172, -1.40977}, {-2.85547, 6.49023, -1.40977}, {-5.78906, 0.158203, -1.40977}, {14.1348, 6.31445, -1.40977}, {5.70508, 0.423828, -1.40977}, {6.49609, 6.5625, -1.40977}};
	};

	class Land_Research_house_V1_F
	{
		table = "Industrial";
		positions[] = {{-1.28516, 2.89258, 0.0302877}, {1.12305, 2.04492, -0.0384929}};
	};

	class Land_Research_HQ_F
	{
		table = "Industrial";
		positions[] = {{-1.03125, 2.60547, -3.26622}, {-2.25195, -2.75586, -0.741376}, {-2.28711, -3.94141, -3.26622}, {4.69336, 4.01172, -3.26622}, {6.06445, 3.50391, -0.741376}};
	};
};

class CfgSettings
{
	///////////////////////////////////////////////////////////////////////
	// GARBAGE COLLECTOR
	///////////////////////////////////////////////////////////////////////
	class GarbageCollector
	{
		/*
		* despawnAfterMinutes defines after how many minutes (+1..5 minutes imprecision)
		* a corpse, vehicle wreck or dropped item should despawn.
        *
        * These things will despawn after despawnAfterMinutes time, but only
        * if there is no player within delayDespawnIfPlayerInRange. If
        * forceDespawnAfterMinutes exceeded, it will not delay despawning and
        * force a despawn after despawnAfterMinutes.
        *
        * despawnAfterMinutes = minutes
        * forceDespawnAfterMinutes = minutes
        * delayDespawnIfPlayerInRange = meters
		*/

		class Corpses
		{
			despawnAfterMinutes = 15;
			delayDespawnIfPlayerInRange = 40;
			forceDespawnAfterMinutes = 25;
		};

		class Wrecks
		{
			// Wrecks should always despawn after 5 minutes, since
			// they are useless
			despawnAfterMinutes = 5;
			delayDespawnIfPlayerInRange = 40;
			forceDespawnAfterMinutes = 5;
		};

		class DroppedItems
		{
			despawnAfterMinutes = 15;
			delayDespawnIfPlayerInRange = 20;
			forceDespawnAfterMinutes = 25;
		};
	};

	///////////////////////////////////////////////////////////////////////
	// RESPECT, YO
	///////////////////////////////////////////////////////////////////////
	class Respect
	{
		/**
		* Defines the factor of respect you gain for every pop tab in revenue
		*
		* Default: Get 1 respect for every 10 pop tabs
		*/
		tradingRespectFactor = 0.1;

		/**
		* Defines the amount of respect earned/lost for certain types of frags
		*/
		class Frags
		{
			bambi = -500;				// Bambi slayers
			friendlyFire = -100;		// For party members
			standard = 100;				// Normal kill
			letItRain = 150;			// MG, also vehicle MGs
			humiliation = 300;			// Axe
			passenger = 400;			// Out of car/chopper/boat
			roadKill = 500;				// :)
			bigBird = 600;				// Roadkill, but with chopper/plane
			chuteGreaterChopper = 600; 	// Someone flies into chute and chopper/plane explodes
		};

		class Bonus
		{
			// Bonus per full 100m
			per100mDistance = 10;

			// First blood after server restart
			firstBlood = 100;

			/*
				Example with killstreak = 50

				Frag  Factor   Bonus
				2    * 50      +100
				3    * 50      +150
				4    * 50      +200
				5    * 50      +250
			*/
			killStreak = 50;

			// Kills within this amount of seconds stack (default: 2 minutes)
			killStreakTimeout = 120;
		};
	};

	///////////////////////////////////////////////////////////////////////
	// KILLFEED MAN!
	///////////////////////////////////////////////////////////////////////

	class KillFeed
	{
		// Shows a kill feed for well kills
		showKillFeed = 1;
	};

	///////////////////////////////////////////////////////////////////////
	// PLAYER SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////
	class BambiSettings
	{
		/**
		 * Loadout of new bambi players
		 *
		 * (They will always spawn with a bambi overall - you cannot
		 * change the loadout uniform)
		 */
		loadOut[] =
		{
			"ItemCompass",
			"ItemMap",
			"Exile_Item_XM8",
			"ItemRadio",
			"Exile_Item_PlasticBottleFreshWater"
		};

		/**
		 * Enables or disables parachute spawning.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		parachuteSpawning = 1;

		/**
		 * Enables or disables halo jumping. Only applies
		 * if parachute spawning is enabled.
		 *
		 * Remember that if you enable halo jump, it is adviced
		 * to adjust the parachuteDropHeight to something around
		 * 1km or so.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		haloJump = 1;

		/**
		 * Parachute drop height in meters.
		 */
		parachuteDropHeight = 1000;

		/**
		 * Number of minutes where a fresh spawned player remains in the
		 * bambi state. It will end the bambi state after this timeout
		 * expired or when they pick up their first weapon. Whatever
		 * happens first.
		 */
		protectionDuration = 5;

		/**
		 * Radius of spawn zones around the center of spawn zone markers.
		 */
		spawnZoneRadius = 500;

		/**
		 * These vehicles spawn on server restart close to spawn zones.
		 * They are non-persistent and will despawn on server restart.
		 * Basically they are just used to get away from the spawn zone
		 * faster.
		 *
		 * {Number of vehicles *per* spawn zone, vehicle class name}
		 */
		spawnZoneVehicles[] =
		{
			{5, "Exile_Bike_OldBike"},
			{5, "Exile_Bike_MountainBike"}
		};
	};

	///////////////////////////////////////////////////////////////////////
	// LOOT CONFIGURATION
	///////////////////////////////////////////////////////////////////////
	class LootSettings
	{
		/**
		 * Chance in % to spawn loot in a building
		 */
		spawnChancePerBuilding = 50;

		/**
		 * Chance in % to spawn loot per loot spot per building.
		 *
		 * 100% = Super high loot
		 * 50%  = Normal loot spawn rates
		 * 20%  = You get the point
		 */
		spawnChancePerPosition = 50;

		/**
		 * Should be self-explanatory :)
		 */
		maximumNumberOfLootSpotsPerBuilding = 4;

		/**
		 * Exile spawns a random number of items per loot spot. This
		 * is the upper cap for that. So 3 means it could spawn 1, 2
		 * or 3.
		 */
		maximumNumberOfItemsPerLootSpot = 3;

		/**
		 * Radius in meter to spawn loot AROUND each player.
		 * Do NOT touch this value if you dont know what you do.
		 * The higher the number, the higher the drop rates, the
		 * easier your server will lag.
		 *
		 * 50m  = Minimum
		 * 200m = Maximum
		 */
		spawnRadius = 80;

		/**
		* Define a de-spawn radius here. That is the radius where loot
		* is not near to players and their lifeTime expired. It will
		* also not spawn loot in a circle around the players to
		* prevent "flickering".
		*
		* 10m  = Minimum (thats better if a house is alone in the wild)
		* 50m = Maximum
		*/
		visualThreshold = 10;

		/**
		 * Time in seconds to define how long loot stays on the ground
		 * after it has been spawned. Loot will despawn after this time
		 * has passed and if no player is within the despawnRadius.
		 * If the maximum life time expired, it will despawn loot
		 * regardless if players are nearby or not.
		 */
		minimumLifeTime = 300; // 5 minutes
		maximumLifeTime = 600; // 10 minutes

		/**
		 * Notify players that loot spawned for them
		 *
		 * 1 = Yes
		 * 0 = No
		 */
		notifyPlayer = 1;

		/**
		 * Defines the radius around trader cities where the system should
		 * not spawn loot. Set this to 0 if you want to have loot spawning
		 * in trader citites, ugh.
		 */
		minimumDistanceToTraderZones = 500;

		/**
		 * Defines the radius around territories where no loot spawns.
		 * This does not regard the actual size of a territory. So do not
		 * set this to a lower value than the maximum radius of a territory,
		 * which is 150m by default.
		 */
		minimumDistanceToTerritories = 150;
	};

	///////////////////////////////////////////////////////////////////////
	// VEHICLE SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////

	class VehicleSpawn
	{
		/**
		* Grid Size for vehicle spawning,
		* smaller the number more vehicles,
		* you get the point
		*/
		vehiclesGridSize = 2200;

		/**
		* Vehicle ammount per grid
		* kinda self explanitory
		*/
		vehiclesGridAmount = 2;

		/**
		* Creates global markers for vehicle spawn tweeking,
		* after you are satisfied with vehicle ammount and spread set this to 0.
		*/
		vehiclesDebugMarkers = 0;

		/**
		* The server will apply random damage up to this value when spawning a vehicle.
		*/
		damageChance = 100; // 100% chance for a vehicle HITPOINT to be damaged
		maximumDamage = 0.9;

		// Stuff to spawn on water
		water[] =
		{
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey"
		};

		// Stuff to spawn on roads
		ground[] =
		{
			"Exile_Bike_QuadBike_Black",
			"Exile_Bike_QuadBike_Blue",
			"Exile_Bike_QuadBike_Red",
			"Exile_Bike_QuadBike_White",
			"Exile_Bike_QuadBike_Nato",
			"Exile_Bike_QuadBike_Csat",
			"Exile_Bike_QuadBike_Fia",
			"Exile_Bike_QuadBike_Guerilla01",
			"Exile_Bike_QuadBike_Guerilla02",
			"Exile_Car_Hatchback_Rusty1",
			"Exile_Car_Hatchback_Rusty2",
			"Exile_Car_Hatchback_Rusty3",
			"Exile_Car_Hatchback_Sport_Red",
			"Exile_Car_SUV_Red",
			"Exile_Car_Offroad_Rusty1",
			"Exile_Car_Offroad_Rusty2",
			"Exile_Car_Offroad_Rusty3",
			"Exile_Car_Van_Black",
			"Exile_Car_Van_Box_Black",
			"Exile_Car_Van_Fuel_Black"
		};

		/**
		 * Enables or disables nightvision optics on ALL vehicles
		 *
		 * 0 = off
		 * 1 = on
		 */
		nightVision = 1;

		/**
		 * Enables or disables thermal optics on ALL vehicles
		 *
		 * 0 = off
		 * 1 = on
		 */
		thermalVision = 1;
	};

	class LocalityMonitor
	{
		/**
		* Transfers the ownership of construction objects to clients to ease the load on server
		* EXPERIMENTAL!
		*/
		monitor = 0;	// 0 = off, 1 = on

		threshold = 20; // Triggers when x ammout on players are on
	};

	class Weather
	{
		/*
			You can define multiple "keyframes" for the weather to change. The server will pick
			a keyframe randomly to simulate the weather. It will change the weather-keyframes
			based on the following interval
		*/
		interval = 30;

		/*
			Add the keyframes here. The server will pick one random, so if you want one
			weather type of be more dominant compared to others, add it multiple times
		*/
		keyframes[] = {
      "Sunny",
      "Cloudy",
      "Cloudy",
      "LightRain",
      "LightRain",
      "LightRain",
      "HeavyRain",
      "HeavyRain",
      "Thunderstorm"
    };

		/*
			This is a keyframe. Look up the BIKI to get more details about the parameters

			Be sure to design the fog settings at a view distance of 1,600m as this is the
			limit in multiplayer by default

			https://community.bistudio.com/wiki/fogParams
			https://community.bistudio.com/wiki/overcast
			https://community.bistudio.com/wiki/setWaves
			https://community.bistudio.com/wiki/setWindStr
			https://community.bistudio.com/wiki/setGusts
			https://community.bistudio.com/wiki/setRain
			https://community.bistudio.com/wiki/setLightnings
			https://community.bistudio.com/wiki/setRainbow
		*/
		class Sunny
		{
			fogValue = 0.4;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 0.2;
			waves = 0.2;
			wind = 0.1;
			gusts = 0.1;
			rain = 0;
			lightnings = 0;
			rainbows = 1;
		};

		class Cloudy
		{
			fogValue = 0.5;
			fogDecay = 0.1;
			fogBase = 5;
			overcast = 0.4;
			waves = 0.4;
			wind = 0.25;
			gusts = 0.5;
			rain = 0.1;
			lightnings = 0.1;
			rainbows = 0.5;
		};

    class LightRain
		{
			fogValue = 0.6;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 1;
			waves = 0.5;
			wind = 0.25;
			gusts = 0.5;
			rain = 0.5;
			lightnings = 0;
			rainbows = 0.25;
		};

		class HeavyRain
		{
			fogValue = 0.6;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 0.8;
			waves = 0.8;
			wind = 0.3;
			gusts = 0.5;
			rain = 1;
			lightnings = 0;
			rainbows = 0.15;
		};

    class Thunderstorm
    {
      fogValue = 0.7;
      fogDecay = 0.2;
      fogBase = 5;
      overcast = 1;
      waves = 1;
      wind = 0.4;
      gusts = 0.8;
      rain = 1;
      lightnings = 1;
      rainbows = 0;
    };
	};

	class Time
	{
		// Uses Dedicated Server time as ingame Time
		useRealTime = 1;

		// Will overide RealTime
		useStaticTime = 0;

		// time in ARMA FORMAT << CONFIG
		// https://community.bistudio.com/wiki/setDate

		staticTime[] = {2039,10,24,15,30};
	};


	class RCON
	{
		/*
			Note that for this to work you need to have serverCommandPassowrd defined in config.cfg and BE enabled
		*/

		// This needs to match config.cfg serverCommandPassword
		serverPassword = "ReallyLongPassword12!@";

		// Autolocks server until its ready to accept players
		useAutoLock = 0;

		// Server will autoLock at that time before restart (minutes)
		restartAutoLock = 3;

		/*
			Number of hours and minutes of your restart period.

			Examples:

			{4, 0} = Every 4 hours
			{1, 30} = Every one and a half hour (who the hell would do this?)
		*/
		restartTimer[] = {3, 0};

		/*
			Kicks players before restart to prevent gear loss.
			We strongely recommend to use this!

			0 = off
			1 = on
		*/
		useAutoKick = 0;

		/*
			Number of minutes before the server kicks players that did
			not disconnect before the restart. Should at least be two
			minutes!
		*/
		kickTime = 2;

		/*
			Self-explanatory

			0 = off
			1 = on
		*/
		useRestartMessages = 1;

		/*
			Number of minutes before the restart to inform your players.

			Only use full minutes here. Value like 5.5 have not been tested.
		*/
		restartWarningTime[] = {15, 10, 5, 3};
	};
};
