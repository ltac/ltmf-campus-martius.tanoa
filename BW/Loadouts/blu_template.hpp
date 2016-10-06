/*
* Description:
* Loadout definition for US Army OCP forces
* Weapons: M4/M249/M240/M136 variants
* Uniforms: MNP OCP
* Ubiquitous NVG and Optics
*
* Author:
* BWMF
* modified by Legion Tactical
*/
class blu_f {
	/*
	* NOTE This comment can be deleted when copied in actual loadout files
	* Template file for BLUFOR faction loadouts.
	*
	* All objects are specified by their classname. Classnames can be
	* found easily by creating a loadout in the Virtual Arsenal
	* (ARMA 3 Main Menu > Learn > Virtual Arsenal), clicking Export,
	* then pasting into a text document.
	*
	* For placing multiples of some object in inventory, type the
	* classname, a colon, then the number of that item to place.
	* For example, if we want the Car class to contain 12 ACE Bandages,
	* then we include "ACE_fieldDressing:12".
	*
	* When #define-ing the standard magazine loadouts, you can list
	* multiple magazine types and counts by separating them with a comma.
	* For example:
	* #define WEST_RIFLE_MAG "hlc_30rnd_556x45_EPR:8","30Rnd_556x45_Stanag_Tracer_Yellow:2"
	*
	* This will add 8 EPR magazines and 2 yellow tracer magazines to
	* the loadout.
	*/

	// Rifle
	#define WEST_RIFLE "rhs_weap_m4a1_carryhandle_grip2"
	#define WEST_RIFLE_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8","rhs_mag_m18_red:2"
  #define WEST_RIFLE_SCOPE "rhsusf_acc_eotech_552"
  #define WEST_RIFLE_RAIL "rhsusf_acc_anpeq15A"
	// GL Rifle
	#define WEST_GLRIFLE "rhs_weap_m4a1_carryhandle_m203S"
	#define WEST_GLRIFLE_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8","rhs_mag_m18_red:2"
	#define WEST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeGreen_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:3"
	#define WEST_GLRIFLE_MAG_HE "rhs_mag_M433_HEDP:8"
	#define WEST_GLRIFLE_MAG_FLARE "UGL_FlareRed_F:2","UGL_FlareGreen_F:2"
  #define WEST_GLRIFLE_SCOPE "rhsusf_acc_eotech_552"
  #define WEST_GLRIFLE_RAIL "rhsusf_acc_anpeq15A"
	// Carbine
	#define WEST_CARBINE "rhs_weap_m4a1_carryhandle_grip"
	#define WEST_CARBINE_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8","rhs_mag_m18_red:2"
	#define WEST_CARBINE_SCOPE "rhsusf_acc_eotech_552"
  #define WEST_CARBINE_RAIL "rhsusf_acc_anpeq15A"
	// AR
	#define WEST_AR "rhs_weap_m249_pip_L"
	#define WEST_AR_MAG "rhsusf_200Rnd_556x45_soft_pouch:2"
	#define WEST_AR_MAG2 "rhsusf_200Rnd_556x45_soft_pouch:2"
  #define WEST_AR_SCOPE "rhsusf_acc_eotech_552"
  #define WEST_AR_RAIL "rhsusf_acc_anpeq15A"
	// AT
	#define WEST_AT "rhs_weap_M136"
	#define WEST_AT_MAG "rhs_m136_mag"
	// MMG
	#define WEST_MMG "rhs_weap_m240B"
	#define WEST_MMG_MAG "rhsusf_100Rnd_762x51:5"
  #define WEST_MMG_SCOPE "rhsusf_acc_eotech_552"
  #define WEST_MMG_RAIL "rhsusf_acc_anpeq15A"
	// MAT
	#define WEST_MAT "launch_I_Titan_short_F"
	#define WEST_MAT_MAG "Titan_AT:2","Titan_AP:1"
	// SAM
	#define WEST_SAM "rhs_weap_fim92"
	#define WEST_SAM_MAG "rhs_fim92_mag:2"
	// Sniper Rifle
	#define WEST_SNIPER "rhs_weap_m14ebrri"
	#define WEST_SNIPER_MAG "rhsusf_20Rnd_762x51_m993_Mag:8"
  #define WEST_SNIPER_SCOPE "rhsusf_acc_LEUPOLDMK4_2"
  #define WEST_SNIPER_RAIL "rhsusf_acc_anpeq15side"
	// Spotter Rifle
	#define WEST_SPOTTER "rhs_weap_m4a1_blockII_grip2_KAC"
	#define WEST_SPOTTER_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8"
  #define WEST_SPOTTER_SCOPE "rhsusf_acc_eotech_552"
  #define WEST_SPOTTER_RAIL "rhsusf_acc_anpeq15A"
	// SMG
	#define WEST_SMG "hlc_smg_mp5a4"
	#define WEST_SMG_MAG "hlc_30Rnd_9x19_B_MP5:6"
  #define WEST_SMG_SCOPE "rhsusf_acc_eotech_552"
  #define WEST_SMG_RAIL "rhsusf_acc_anpeq15A"
	// Pistol
	#define WEST_PISTOL "rhsusf_weap_m1911a1"
	#define WEST_PISTOL_MAG "rhsusf_mag_7x45acp_MHP:4"
	// Radio
	#define WEST_RADIO_RIFLEMAN "tf_rf7800str"
	#define WEST_RADIO_SHORTWAVE "tf_anprc152"
	#define WEST_RADIO_MANPACK "tf_rt1523g_big"
	#define WEST_RADIO_AIRBORNE "tf_anarc210"
  // Throwables
  #define WEST_SMOKE_WHITE "SmokeShell:2"
  #define WEST_SMOKE_COLOR "SmokeShellGreen:2"
  #define WEST_CHEMLIGHT "Chemlight_green:2"
  #define WEST_FRAG "HandGrenade:2"
  // Backpacks
  #define WEST_PACK_LIGHT "rhsusf_assault_eagleaiii_ocp"
  #define WEST_PACK_MEDIUM "B_Kitbag_rgr"
  #define WEST_PACK_HEAVY "B_Carryall_oli"

	// By default, BLUFOR uses White, Black, and Asian faces.
	// If you want something else, specify the list here.
	faces[] = {};

	// Define the cargo for Vehicles
	class Car {
		TransportMagazines[] = {
			WEST_RIFLE_MAG,
			WEST_RIFLE_MAG,
			WEST_CARBINE_MAG,
			WEST_AR_MAG,
			WEST_AR_MAG,
			WEST_GLRIFLE_MAG_HE,
			WEST_AT_MAG,
      WEST_FRAG,
      WEST_FRAG,
      WEST_FRAG,
      WEST_FRAG,
      WEST_SMOKE_COLOR,
      WEST_SMOKE_COLOR,
      WEST_SMOKE_COLOR,
      WEST_SMOKE_COLOR,
      WEST_SMOKE_WHITE,
      WEST_SMOKE_WHITE,
      WEST_SMOKE_WHITE,
      WEST_SMOKE_WHITE
		};
		TransportItems[] = {
			"ACE_fieldDressing:12",
			"ACE_morphine:4"
		};
	};

	// Define the cargo for Tanks
	class Tank {
		TransportMagazines[] = {
			WEST_RIFLE_MAG,
			WEST_RIFLE_MAG,
			WEST_CARBINE_MAG,
			WEST_AR_MAG,
			WEST_AR_MAG,
			WEST_GLRIFLE_MAG_HE,
			WEST_AT_MAG,
      WEST_FRAG,
      WEST_FRAG,
      WEST_FRAG,
      WEST_FRAG,
      WEST_SMOKE_COLOR,
      WEST_SMOKE_COLOR,
      WEST_SMOKE_COLOR,
      WEST_SMOKE_COLOR,
      WEST_SMOKE_WHITE,
      WEST_SMOKE_WHITE,
      WEST_SMOKE_WHITE,
      WEST_SMOKE_WHITE
		};
		TransportItems[] = {
			"ACE_fieldDressing:12",
			"ACE_morphine:4"
		};
	};

	// Define the cargo for Helicopters
	class Helicopter {
		TransportMagazines[] = {
			WEST_RIFLE_MAG,
			WEST_RIFLE_MAG,
			WEST_CARBINE_MAG,
			WEST_AR_MAG,
			WEST_AR_MAG,
			WEST_GLRIFLE_MAG_HE,
      WEST_FRAG,
      WEST_FRAG,
      WEST_FRAG,
      WEST_FRAG,
      WEST_SMOKE_COLOR,
      WEST_SMOKE_COLOR,
      WEST_SMOKE_COLOR,
      WEST_SMOKE_COLOR,
      WEST_SMOKE_WHITE,
      WEST_SMOKE_WHITE,
      WEST_SMOKE_WHITE,
      WEST_SMOKE_WHITE
		};
		TransportItems[] = {
			"ACE_fieldDressing:12",
			"ACE_morphine:4",
			"ItemGPS"
		};
	};

	// Define the cargo for Jets
	class Plane {
		TransportMagazines[] = {};
	};

	// Define the cargo for Boats
	class Ship_F {
		TransportMagazines[] = {};
	};

	/* RIFLEMAN BASE */

	/*
	NOTE This comment can be deleted when copied in actual loadout files
	-Rifleman
	-Officer
	-Squad leader
	-Team leader
	-Autorifleman
	-UAV Operator
	-Assistant Autorifleman
	-AT Rifleman
	-Medic
	-MMG Gunner
	-MMG Spotter
	-MAT Gunner
	-MAT Assistant
	-SAM Gunner
	-SAM Assistant
	-Mortar Gunner
	-Mortar Assistant

	Each specific class can add to or completely override the
	loadouts defined by this base
	*/
	class B_Soldier_F {
		/* Randomized gear
		One item from each of these lists will be chosen at
		random when the unit spawns.

		Leave the list empty {} to add nothing of that type.
		*/

		// Define the list of possible uniforms that units will wear
		uniform[] = {
			"rhs_uniform_cu_ocp"
		};
		// Define the list of possible vests that units will wear
		vest[] = {
			"rhsusf_iotv_ocp",
			"rhsusf_iotv_ocp_Rifleman"
		};
		// Define the list of possible headgear that units will wear
		headgear[] = {
			"rhsusf_ach_helmet_ocp",
			"rhsusf_ach_helmet_ESS_ocp",
			"rhsusf_ach_helmet_headset_ocp",
			"rhsusf_ach_helmet_headset_ess_ocp",
			"rhsusf_ach_helmet_camo_ocp"
		};
		// Define the list of possible facewear that units will wear
		facewear[] = {nil};
		// Define the list of possible backpacks that units will wear
		backpack[] = {
			WEST_PACK_LIGHT
		};
		// Define the list of possible primary weapons that units
		// will be assigned
		weapons[] = {WEST_RIFLE};
		// Define the list of possible launcher weapons that units
		// will be assigned
		launchers[] = {};
		// Define the list of possible sidearms that units
		// will be assigned
		handguns[] = {};
		/* END Randomized Gear */

		/*
		Gear lists

		These lists are not randomized; all items from these lists
		will selected and placed in the unit's inventory.
		Leave them empty {} to add nothing of that type by default.
		*/

		// List the items (along with the amount) that will be placed
		// specifically in the unit's backpack
		backpackItems[] = {

		};
		// List the magazines, explosives, and throwables
		// that will be placed wherever there is room in the unit's
		// inventory
		magazines[] = {
			WEST_RIFLE_MAG,
			WEST_FRAG,
			WEST_SMOKE_WHITE
		};
		// List the items (along with the amount) that will be placed
		// wherever there is room in the unit's inventory
		items[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_IR_Strobe_item",
			"ACE_CableTie",
			"ACE_Flashlight_XL50"	
		};
		// List the gear items txhat should be automatically slotted
		// correctly for the unit (like Map, Watch, NVG, etc)
		linkedItems[] = {
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"rhsusf_ANPVS_14"
		};
		// List the attachments that will be automatically added
		// to the unit's equipped weapons
		attachments[] = {
			WEST_RIFLE_SCOPE,
			WEST_RIFLE_RAIL
		};
		// Set the basic radio for the unit
		radio = WEST_RADIO_RIFLEMAN;
	};

	/* END RIFLEMAN BASE */

	/* RIFLEMAN EXTENSIONS */

	/*
	The next set of units all copy their gear from the Rifleman Base,
	as defined with the : in the class definition. For example,

	class B_officer_F : B_Soldier_F

	says that B_officer_F will have the same properties and data
	as B_Soldier_F unless specifically set otherwise.

	You can override a certain type of gear by setting it to something
	new using =
	For example:
	backpack[] = {WEST_RADIO_MANPACK};

	Instead of replacing gear, you can also add to gear by using +=
	For example, to add GPS in addition to the base Watch, Map,
	and Compass:
	linkedItems[] += {"ItemGPS"};
	*/

	// CO and DC
	// Define gear additions and overrides for Officer units
	class B_officer_F: B_Soldier_F {
		backpack[] = {WEST_RADIO_MANPACK};
		weapons[] = {WEST_GLRIFLE};
		magazines[] = {
			WEST_GLRIFLE_MAG,
			WEST_GLRIFLE_MAG_HE,
			WEST_GLRIFLE_MAG_SMOKE,
			WEST_GLRIFLE_MAG_FLARE,
			WEST_PISTOL_MAG,
			WEST_FRAG,
			WEST_SMOKE_WHITE,
			WEST_SMOKE_COLOR
		};
    attachments[] = {
			WEST_GLRIFLE_SCOPE,
			WEST_GLRIFLE_RAIL
		};
		handguns[] = {WEST_PISTOL}; /// randomized
		backpackItems[] += {"ACE_key_west"};
		linkedItems[] += {
			"ItemGPS",
			"ACE_Vector"
		};
		items[] = {"ACE_MapTools"};
		radio = WEST_RADIO_SHORTWAVE;
	};

	// SL
	// Define gear additions and overrides for Squad Leader units
	class B_Soldier_SL_F: B_Officer_F {
		backpack[] = {WEST_RADIO_MANPACK};
		linkedItems[] += {
			"Binocular"
		};
		items[] = {"ACE_MapTools"};
		backpackItems[] += {"ACE_fieldDressing"};
		radio = WEST_RADIO_SHORTWAVE;
	};

	// UAV
	// Define gear additions and overrides for UAV Operator units
	class B_Soldier_UAV_F: B_Soldier_F {
		backpack[] = {"B_rhsusf_B_BACKPACK"};
		linkedItems[] += {
			"B_uavterminal"
		};
		radio = WEST_RADIO_SHORTWAVE;
	};

	// FTL
	// Define gear additions and overrides for Team Leader units
	class B_Soldier_TL_F: B_Soldier_F {
		weapons[] = {WEST_GLRIFLE};
		magazines[] = {
			WEST_GLRIFLE_MAG,
			WEST_GLRIFLE_MAG_HE,
			WEST_GLRIFLE_MAG_SMOKE,
			WEST_GLRIFLE_MAG_FLARE,
			WEST_SMOKE_COLOR,
			WEST_FRAG,
			WEST_SMOKE_WHITE,
			WEST_FRAG,
			WEST_SMOKE_WHITE
		};
    attachments[] = {
			WEST_GLRIFLE_SCOPE,
			WEST_GLRIFLE_RAIL
		};
		backpackItems[] += {"ACE_key_west"};
		linkedItems[] += {
			"ItemGPS",
			"Binocular"
		};
	};

	// AR
	// Define gear additions and overrides for Autorifleman units
	class B_Soldier_AR_F: B_Soldier_F {
		weapons[] = {WEST_AR};
		magazines[] = {
			WEST_AR_MAG,
			WEST_PISTOL_MAG,
			WEST_FRAG,
			WEST_SMOKE_WHITE
		};
    attachments[] = {
			WEST_AR_SCOPE,
			WEST_AR_RAIL
		};
		handguns[] = {WEST_PISTOL}; /// randomized
	};

	// AAR
	// Define gear additions and overrides for Asst Autorifleman units
	class B_Soldier_AAR_F: B_Soldier_F {
		backpackItems[] += {WEST_AR_MAG2};
		attachments[] += {"rhsusf_acc_ACOG_USMC"};
		linkedItems[] += {"Binocular"};
	};

	// RAT
	// Define gear additions and overrides for AT Rifleman units
	class B_Soldier_LAT_F: B_Soldier_F {
		weapons[] = {WEST_CARBINE};
		magazines[] = {
			WEST_CARBINE_MAG,
			WEST_AT_MAG,
			WEST_FRAG,
			WEST_SMOKE_WHITE
		};
		launchers[] = {WEST_AT};
	};

	// Medic
	// Define gear additions and overrides for Medic units
	class B_medic_F: B_Soldier_F {
		weapons[] = {WEST_CARBINE};
		magazines[] = {
			WEST_CARBINE_MAG,
			WEST_SMOKE_WHITE,
      WEST_SMOKE_WHITE,
      WEST_SMOKE_WHITE
		};
		backpackItems[] = {
			"Medikit",
      "FirstAidKit:3"
		};
	};

	// MMG
	// Define gear additions and overrides for MMG Gunner units
	class B_support_MG_F: B_Soldier_F {
		weapons[] = {WEST_MMG};
		magazines[] = {
			WEST_MMG_MAG,
			WEST_PISTOL_MAG,
			WEST_FRAG,
			WEST_SMOKE_WHITE
		};
		handguns[] = {WEST_PISTOL}; /// randomized
    attachments[] = {
			WEST_MMG_SCOPE,
			WEST_MMG_RAIL
		};
	};

	// MMG Asst
	// Define gear additions and overrides for MMG Spotter units
	class B_Soldier_A_F: B_Soldier_F {
		backpack[] = {WEST_PACK_MEDIUM};
		backpackItems[] += {WEST_MMG_MAG};
		linkedItems[] += {"ACE_Vector"};
	};

	// Medium AT
	// Define gear additions and overrides for MAT Gunner units
	class B_Soldier_AT_F: B_Soldier_F {
		weapons[] = {WEST_CARBINE};
		magazines[] = {
			WEST_CARBINE_MAG,
			WEST_FRAG,
			WEST_SMOKE_WHITE
		};
		launchers[] = {WEST_MAT};
		items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine"
		};
		backpack[] = {WEST_PACK_MEDIUM};
		backpackItems[] = {WEST_MAT_MAG};
	};

	// Medium AT Asst
	// Define gear additions and overrides for MAT Spotter units
	class B_Soldier_AAT_F: B_Soldier_F {
		backpack[] = {WEST_PACK_MEDIUM};
		backpackItems[] = {WEST_MAT_MAG};
		linkedItems[] += {"ACE_Vector"};
		items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine"
		};
	};

	// AA Gunner
	// Define gear additions and overrides for AA Gunner units
	class B_Soldier_AA_F: B_Soldier_F {
		backpack[] = {WEST_PACK_HEAVY};
		weapons[] = {WEST_CARBINE};
		magazines[] = {
			WEST_CARBINE_MAG,
			WEST_FRAG,
			"MiniGrenade:1",
			WEST_SMOKE_WHITE
		};
		launchers[] = {WEST_SAM};
		backpackItems[] += {WEST_SAM_MAG};
	};

	// AA Asst
	// Define gear additions and overrides for AA Spotter units
	class B_Soldier_AAA_F: B_Soldier_F {
		backpack[] = {WEST_PACK_HEAVY};
		backpackItems[] = {WEST_SAM_MAG};
		linkedItems[] += {"ACE_Vector"};
	};

	// Mortar Gunner
	// Define gear additions and overrides for Mortar Gunner units
	class B_support_Mort_F: B_Soldier_F {
		weapons[] = {WEST_CARBINE};
		magazines[] = {
			WEST_CARBINE_MAG,
			WEST_FRAG,
			WEST_SMOKE_WHITE
		};
		items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine"
		};
		backpack[] = {"B_Mortar_01_weapon_F"};
	};

	// Mortar Asst
	// Define gear additions and overrides for Mortar Asst units
	class B_support_AMort_F: B_Soldier_F {
		backpack[] = {"B_Mortar_01_support_F"};
		linkedItems[] += {"ACE_Vector"};
		items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine"
		};
	};

	/* END RIFLEMAN EXTENSIONS */

	/* SPOTTER BASE */

	// Define the base class for Spotter units
	class B_spotter_F {
		uniform[] = {
			"rhs_uniform_cu_ocp"
		};
		vest[] = {
			"rhsusf_iotv_ocp",
			"rhsusf_iotv_ocp_Rifleman"
		};
		headgear[] = {
			"rhsusf_ach_helmet_ocp",
			"rhsusf_ach_helmet_ESS_ocp",
			"rhsusf_ach_helmet_headset_ocp",
			"rhsusf_ach_helmet_headset_ess_ocp",
			"rhsusf_ach_helmet_camo_ocp"
		};
		facewear[] = {
			nil
		};
		backpack[] = {
			WEST_PACK_LIGHT
		};

		weapons[] = {WEST_SPOTTER};
		launchers[] = {};
		handguns[] = {};

		magazines[] = {
			WEST_SPOTTER_MAG,
			WEST_SMOKE_WHITE,
			WEST_FRAG
		};
		items[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_CableTie",
			"ACE_Flashlight_XL50"
		};
		backpackItems[] = {};
		linkedItems[] = {
			"itemWatch",
			"itemMap",
			"itemCompass",
			"itemGPS",
			"LaserDesignator",
			"rhsusf_ANPVS_15"
		};
    attachments[] = {
			WEST_SPOTTER_SCOPE,
			WEST_SPOTTER_RAIL
		};
		radio = WEST_RADIO_SHORTWAVE;
	};

	/* SNIPER BASE */

	// Define the base class for Sniper units
	class B_sniper_F {
		uniform[] = {
			"rhs_uniform_cu_ocp"
		};
		vest[] = {
			"rhsusf_iotv_ocp",
			"rhsusf_iotv_ocp_Rifleman"
		};
		headgear[] = {
			"rhsusf_ach_helmet_ocp",
			"rhsusf_ach_helmet_ESS_ocp",
			"rhsusf_ach_helmet_headset_ocp",
			"rhsusf_ach_helmet_headset_ess_ocp",
			"rhsusf_ach_helmet_camo_ocp"
		};
		facewear[] = {
			nil
		};
		backpack[] = {
			WEST_PACK_LIGHT
		};

		weapons[] = {WEST_SNIPER};
		launchers[] = {};
		handguns[] = {};

		magazines[] = {
			WEST_SNIPER_MAG,
			WEST_SMOKE_WHITE,
			WEST_FRAG
		};
		items[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_CableTie",
			"ACE_Flashlight_XL50"
		};
		backpackItems[] = {};
		linkedItems[] = {
			"itemWatch",
			"itemMap",
			"itemCompass",
			"itemGPS",
			"LaserDesignator",
			"rhsusf_ANPVS_15"
		};
    attachments[] = {
			WEST_SNIPER_SCOPE,
			WEST_SNIPER_RAIL
		};
		radio = WEST_RADIO_SHORTWAVE;
	};

	/* HELICOPTER CREW BASE */

	// Heli Pilot
	// Define the base class for all Helicopter pilot and crew units
	class B_Helipilot_F {
		uniform[] = {
			"rhs_uniform_cu_ocp"
		};
		headgear[] = {"H_PilotHelmetHeli_B"};
		vest[] = {
			"rhsusf_iotv_ocp",
			"rhsusf_iotv_ocp_Rifleman"
		};
		facewear[] = {nil};
		backpack[] = {
			WEST_PACK_LIGHT
		};

		weapons[] = {WEST_SMG};
		launchers[] = {};
		handguns[] = {WEST_PISTOL};

		magazines[] = {
			WEST_SMG_MAG,
			WEST_PISTOL_MAG,
			WEST_SMOKE_WHITE
		};
		backpackItems[] += {"ACE_key_west"};
		items[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_CableTie",
			"ACE_Flashlight_XL50"
		};
		linkedItems[] = {
			"ItemWatch",
			"ItemMap",
			"ItemCompass",
			"itemGPS",
			"rhsusf_ANPVS_15"
		};
    attachments[] = {
			WEST_SMG_SCOPE,
			WEST_SMG_RAIL
		};
		radio = WEST_RADIO_SHORTWAVE;
	};

	// Heli crew
	// Define gear additions and overrides for Helicopter Crew units
	class B_helicrew_F: B_Helipilot_F {
		// No changes
	};

	/* VEHICLE CREW BASE */

	// Define the base class for all vehicle crew and engineer units
	class B_crew_F {
		uniform[] = {
			"rhs_uniform_cu_ocp"
		};
		vest[] = {
			"rhsusf_iotv_ocp",
			"rhsusf_iotv_ocp_Rifleman"
		};
		headgear[] = {
			"rhsusf_ach_helmet_ocp",
			"rhsusf_ach_helmet_ESS_ocp",
			"rhsusf_ach_helmet_headset_ocp",
			"rhsusf_ach_helmet_headset_ess_ocp",
			"rhsusf_ach_helmet_camo_ocp"
		};
		facewear[] = {
			nil
		};
		backpack[] = {
			WEST_PACK_LIGHT
		};

		weapons[] = {WEST_SMG};
		launchers[] = {};
		handguns[] = {};

		magazines[] = {
			WEST_SMG_MAG,
			WEST_SMOKE_WHITE
		};
		backpackItems[] = {"ACE_key_west"};
		items[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_CableTie",
			"ACE_Flashlight_XL50"
		};
		linkedItems[] = {
			"ItemWatch",
			"ItemMap",
			"ItemCompass",
			"itemGPS",
			"rhsusf_ANPVS_15"
		};
    attachments[] = {
			WEST_SMG_SCOPE,
			WEST_SMG_RAIL
		};
		radio = WEST_RADIO_SHORTWAVE;
	};

	// Repair Specialist
	// Define gear additions and overrides for Repair Specialist units
	// as well as the base class for all Explosive/Mine specialists
	class B_Soldier_repair_F: B_crew_F {
		weapons[] = {WEST_CARBINE};
		magazines[] = {
			WEST_CARBINE_MAG,
			WEST_FRAG,
			WEST_SMOKE_WHITE
		};
    attachments[] = {
			WEST_CARBINE_SCOPE,
			WEST_CARBINE_RAIL
		};
		backpack[] = {WEST_PACK_MEDIUM};
		backpackItems[] = {"Toolkit"};
	};

	// Explosive Specialist
	// Define gear additions and overrides for Explosive Specialist units
	class B_Soldier_exp_F: B_Soldier_repair_F {
		backpackItems[] = {
			"Toolkit",
			"ACE_DefusalKit",
			"ACE_Clacker",
			"MineDetector"
		};
		magazines[] = {
			WEST_CARBINE_MAG,
			"DemoCharge_Remote_Mag:3",
			"SatchelCharge_Remote_Mag:2"
		};
	};

	// Mine Specialist
	// Define gear additions and overrides for Mine Specialist units
	class B_engineer_F: B_Soldier_repair_F {
		backpackItems[] = {
			"Toolkit",
			"ACE_DefusalKit",
			"ACE_Clacker",
			"MineDetector"
		};
		magazines[] = {
			WEST_CARBINE_MAG,
			"ATMine_Range_Mag:2",
			"APERSBoundingMine_Range_Mag:2",
			"APERSMine_Range_Mag:2"
		};
	};

	// Default if no other loadout can be found
	class fallback: B_soldier_f {
		// Same as normal rifleman
	};
};
