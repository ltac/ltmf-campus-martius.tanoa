/*
* Description:
* Loadout definition for Afghan insurgent forces
* Weapons: AK47/RPK/RPG/SVD
* Uniforms: CAF Afghan fatigues
* Extremely limited equipment
*
* Author:
* BWMF
* modified by Legion Tactical
*/
class opf_f {

  // Rifle
  #define EAST_RIFLE "rhs_weap_akm"
  #define EAST_RIFLE_MAG "rhs_30Rnd_762x39mm:8","rhs_30Rnd_762x39mm_tracer:2"
  #define EAST_RIFLE_SCOPE "RH_barska_rds"
  #define EAST_RIFLE_RAIL "rhsusf_acc_anpeq15A"
  // GL Rifle
  #define EAST_GLRIFLE "rhs_weap_akm_gp25"
  #define EAST_GLRIFLE_MAG "rhs_30Rnd_762x39mm:8","rhs_30Rnd_762x39mm_tracer:2"
  #define EAST_GLRIFLE_MAG_SMOKE "rhs_GRD40_White:4","rhs_GRD40_Green:2","rhs_GRD40_Red:3"
  #define EAST_GLRIFLE_MAG_HE "rhs_VOG25:8"
  #define EAST_GLRIFLE_MAG_FLARE "rhs_VG40OP_white:2","rhs_VG40OP_green:2"
  #define EAST_GLRIFLE_SCOPE "RH_barska_rds"
  #define EAST_GLRIFLE_RAIL "rhsusf_acc_anpeq15A"
  // Carbine
  #define EAST_CARBINE "rhs_weap_akm"
  #define EAST_CARBINE_MAG "rhs_30Rnd_762x39mm:8","rhs_30Rnd_762x39mm_tracer:2"
  #define EAST_CARBINE_SCOPE "RH_barska_rds"
  #define EAST_CARBINE_RAIL "rhsusf_acc_anpeq15A"
  // AR
  #define EAST_AR "hlc_rifle_rpk"
  #define EAST_AR_MAG "hlc_75Rnd_762x39_m_rpk:5"
  #define EAST_AR_MAG2 "hlc_75Rnd_762x39_m_rpk:5"
  #define EAST_AR_SCOPE "rhs_acc_pkas"
  // AT
  #define EAST_AT "rhs_weap_rpg7"
  #define EAST_AT_MAG "rhs_rpg7_PG7VL_mag"
  // MMG
  #define EAST_MMG "rhs_weap_pkp"
  #define EAST_MMG_MAG "rhs_100Rnd_762x54mmR_green:5"
  #define EAST_MMG_SCOPE "RH_barska_rds"
  #define EAST_MMG_RAIL "rhsusf_acc_anpeq15A"
  // MAT
  #define EAST_MAT "rhs_weap_rpg7"
  #define EAST_MAT_MAG "rhs_rpg7_PG7VL_mag"
  // SAM
  #define EAST_SAM "rhs_weap_igla"
  #define EAST_SAM_MAG "rhs_mag_9k38_rocket:2"
  // Sniper Rifle
  #define EAST_SNIPER "rhs_weap_svdp"
  #define EAST_SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
  #define EAST_SNIPER_SCOPE "rhs_acc_pso1m2"
  #define EAST_SNIPER_RAIL "rhsusf_acc_anpeq15side"
  // Spotter Rifle
  #define EAST_SPOTTER "rhs_weap_akm"
  #define EAST_SPOTTER_MAG "rhs_30Rnd_762x39mm:8"
  #define EAST_SPOTTER_SCOPE "RH_barska_rds"
  #define EAST_SPOTTER_RAIL "rhsusf_acc_anpeq15A"
  // SMG
  #define EAST_SMG "rhs_weap_akm"
  #define EAST_SMG_MAG "rhs_30Rnd_762x39mm:6"
  #define EAST_SMG_SCOPE "RH_barska_rds"
  #define EAST_SMG_RAIL "rhsusf_acc_anpeq15A"
  // Pistol
  #define EAST_PISTOL "rhs_weap_pya"
  #define EAST_PISTOL_MAG "rhs_mag_9x19_17:4"
  // Radio
  #define EAST_RADIO_RIFLEMAN "tf_pnr1000a"
  #define EAST_RADIO_SHORTWAVE "tf_fadak"
  #define EAST_RADIO_MANPACK "tf_mr3000"
  #define EAST_RADIO_AIRBORNE "tf_mr6000l"
  // Throwables
  #define EAST_SMOKE_WHITE "rhs_mag_rdg2_white:2"
  #define EAST_SMOKE_COLOR "rhs_mag_rdg2_black:2"
  #define EAST_CHEMLIGHT "Chemlight_red:2"
  #define EAST_FRAG "rhs_mag_rgd5:2"
  // Backpacks
  #define EAST_PACK_LIGHT "rhs_sidor","B_TacticalPack_blk","B_TacticalPack_rgr","B_TacticalPack_oli","rhs_assault_umbts_engineer_empty","rhs_assault_umbts","MNP_B_RU2_FP","B_FieldPack_khk","B_FieldPack_blk","ibr_backpack"
  #define EAST_PACK_MEDIUM "B_Kitbag_rgr","B_Kitbag_cbr"
  #define EAST_PACK_HEAVY "MNP_B_RU2_CA"

  // Define the cargo for Vehicles
  class Car {
    TransportMagazines[] = {
      EAST_RIFLE_MAG,
      EAST_RIFLE_MAG,
      EAST_CARBINE_MAG,
      EAST_AR_MAG,
      EAST_AR_MAG,
      EAST_GLRIFLE_MAG_HE,
      EAST_AT_MAG
    };
    TransportItems[] = {
      "ACE_fieldDressing:12",
      "ACE_morphine:4"
    };
  };

  // Define the cargo for Tanks
  class Tank {
    TransportMagazines[] = {
      EAST_RIFLE_MAG,
      EAST_RIFLE_MAG,
      EAST_CARBINE_MAG,
      EAST_AR_MAG,
      EAST_AR_MAG,
      EAST_GLRIFLE_MAG_HE,
      EAST_AT_MAG
    };
    TransportItems[] = {
      "ACE_fieldDressing:12",
      "ACE_morphine:4"
    };
  };

  // Define the cargo for Helicopters
  class Helicopter {
    TransportMagazines[] = {
      EAST_RIFLE_MAG,
      EAST_RIFLE_MAG,
      EAST_CARBINE_MAG,
      EAST_AR_MAG,
      EAST_AR_MAG,
      EAST_GLRIFLE_MAG_HE
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

  class O_Soldier_F {

    // Define the list of possible uniforms that units will wear
    uniform[] = {
      "U_CAF_AG_ME_FATIGUES_01",
      "U_CAF_AG_ME_FATIGUES_01a",
      "U_CAF_AG_ME_FATIGUES_01b",
      "U_CAF_AG_ME_FATIGUES_01c",
      "U_CAF_AG_ME_FATIGUES_01d",
      "U_CAF_AG_ME_ROBES_Mil_01",
      "U_CAF_AG_ME_ROBES_mil_01a",
      "U_CAF_AG_ME_ROBES_01",
      "U_CAF_AG_ME_ROBES_01a",
      "U_CAF_AG_ME_ROBES_01b",
      "U_CAF_AG_ME_ROBES_01c",
      "U_CAF_AG_ME_ROBES_01d",
      "U_CAF_AG_ME_ROBES_02",
      "U_CAF_AG_ME_ROBES_02a",
      "U_CAF_AG_ME_ROBES_02b",
      "U_CAF_AG_ME_ROBES_02c",
      "U_CAF_AG_ME_ROBES_03",
      "U_CAF_AG_ME_ROBES_03a",
      "U_CAF_AG_ME_ROBES_03b",
      "U_CAF_AG_ME_ROBES_03c",
      "U_CAF_AG_ME_ROBES_03d",
      "U_CAF_AG_ME_ROBES_04",
      "U_CAF_AG_ME_ROBES_04a",
      "U_CAF_AG_ME_ROBES_04b",
      "U_CAF_AG_ME_ROBES_04c",
      "U_CAF_AG_ME_ROBES_04d"
    };
    // Define the list of possible vests that units will wear
    vest[] = {
      "rhs_vydra_3m",
      "rhs_6sh46",
      "rhs_6b23",
      "rhs_6b23_ML_crewofficer",
      "rhs_6b23_ML_crew",
      "rhs_6sh92",
      "rhs_6sh92_vog",
      "rhs_6b23_rifleman",
      "V_Chestrig_blk",
      "V_Chestrig_rgr",
      "V_Chestrig_khk",
      "V_Chestrig_oli",
      "V_BandollierB_blk",
      "V_BandollierB_cbr",
      "V_BandollierB_rgr",
      "V_BandollierB_khk",
      "V_BandollierB_oli"
    };
    // Define the list of possible headgear that units will wear
    headgear[] = {
      "H_caf_ag_turban",
      "H_Shemag_olive",
      "H_ShemagOpen_tan",
      "H_ShemagOpen_khk",
      "H_caf_ag_paktol_04",
      "H_caf_ag_paktol",
      "H_caf_ag_paktol_03",
      "H_caf_ag_paktol_02",
      "H_caf_ag_paktol_04",
      "H_caf_ag_paktol_04",
      "ibr_mol_redberet",
      "H_caf_ag_fur2",
      "H_caf_ag_fur",
      "H_caf_ag_wrap"
    };
    // Define the list of possible facewear that units will wear
    facewear[] = {};
    // Define the list of possible backpacks that units will wear
    backpack[] = {EAST_PACK_LIGHT};
    // Define the list of possible primary weapons that units
    // will be assigned
    weapons[] = {EAST_RIFLE};
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
      EAST_RIFLE_MAG,
      EAST_FRAG,
      EAST_SMOKE_WHITE
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
      "ItemWatch"
    };
    // List the attachments that will be automatically added
    // to the unit's equipped weapons
    attachments[] = {};
    // Set the basic radio for the unit
    radio = EAST_RADIO_RIFLEMAN;
  };

  /* END RIFLEMAN BASE */

  /* RIFLEMAN EXTENSIONS */

  // CO and DC
  // Define gear additions and overrides for Officer units
  class O_Officer_F: O_Soldier_F {
    backpack[] = {EAST_RADIO_MANPACK};
    weapons[] = {EAST_GLRIFLE};
    magazines[] = {
      EAST_GLRIFLE_MAG,
      EAST_GLRIFLE_MAG_HE,
      EAST_GLRIFLE_MAG_SMOKE,
      EAST_PISTOL_MAG,
      EAST_FRAG,
      EAST_SMOKE_WHITE,
      EAST_SMOKE_COLOR
    };
    handguns[] = {EAST_PISTOL};
    backpackItems[] += {"ACE_key_east"};
    linkedItems[] += {
      "Binocular"
    };
    items[] = {"ACE_MapTools"};
    radio = EAST_RADIO_SHORTWAVE;
  };

  // SL
  // Define gear additions and overrides for Squad Leader units
  class O_Soldier_SL_F: O_Officer_F {
    items[] = {"ACE_MapTools"};
    backpackItems[] += {"ACE_fieldDressing"};
    radio = EAST_RADIO_SHORTWAVE;
  };

  // UAV
  // Define gear additions and overrides for UAV Operator units
  class O_Soldier_UAV_F: O_Soldier_F {
    // Afghan should not have uav, so keep as normal soldier
  };

  // FTL
  // Define gear additions and overrides for Team Leader units
  class O_Soldier_TL_F: O_Soldier_F {
    vest[] = {"rhs_6sh92_vog"};
    weapons[] = {EAST_GLRIFLE};
    magazines[] = {
      EAST_GLRIFLE_MAG,
      EAST_GLRIFLE_MAG_HE,
      EAST_GLRIFLE_MAG_SMOKE,
      EAST_SMOKE_COLOR,
      EAST_FRAG,
      EAST_SMOKE_WHITE,
      EAST_FRAG,
      EAST_SMOKE_WHITE
    };
    backpackItems[] += {"ACE_key_east"};
    linkedItems[] += {
      "Binocular"
    };
  };

  // AR
  // Define gear additions and overrides for Autorifleman units
  class O_Soldier_AR_F: O_Soldier_F {
    weapons[] = {EAST_AR};
    magazines[] = {
      EAST_AR_MAG,
      EAST_PISTOL_MAG,
      EAST_FRAG,
      EAST_SMOKE_WHITE
    };
    attachments[] = {};
    handguns[] = {EAST_PISTOL};
  };

  // AAR
  // Define gear additions and overrides for Asst Autorifleman units
  class O_Soldier_AAR_F: O_Soldier_F {
    backpackItems[] += {EAST_AR_MAG2};
    linkedItems[] += {"Binocular"};
  };

  // RAT
  // Define gear additions and overrides for AT Rifleman units
  class O_Soldier_LAT_F: O_Soldier_F {
    weapons[] = {EAST_CARBINE};
    magazines[] = {
      EAST_CARBINE_MAG,
      EAST_AT_MAG,
      EAST_FRAG,
      EAST_SMOKE_WHITE
    };
    launchers[] = {EAST_AT};
  };

  // Medic
  // Define gear additions and overrides for Medic units
  class O_medic_F: O_Soldier_F {
    vest[] = {"rhs_6b23_medic"};
    weapons[] = {EAST_CARBINE};
    magazines[] = {
      EAST_CARBINE_MAG,
      EAST_SMOKE_WHITE,
      EAST_SMOKE_WHITE,
      EAST_SMOKE_WHITE
    };
    backpackItems[] = {
      "Medikit",
      "FirstAidKit:3"
    };
  };

  // MMG
  // Define gear additions and overrides for MMG Gunner units
  class O_support_MG_F: O_Soldier_F {
    weapons[] = {EAST_MMG};
    magazines[] = {
      EAST_MMG_MAG,
      EAST_PISTOL_MAG,
      EAST_FRAG,
      EAST_SMOKE_WHITE
    };
    handguns[] = {EAST_PISTOL}; /// randomized
    attachments[] = {};
  };

  // MMG Asst
  // Define gear additions and overrides for MMG Spotter units
  class O_Soldier_A_F: O_Soldier_F {
    backpack[] = {EAST_PACK_MEDIUM};
    backpackItems[] += {EAST_MMG_MAG};
    linkedItems[] += {"Binocular"};
  };

  // Medium AT
  // Define gear additions and overrides for MAT Gunner units
  class O_Soldier_AT_F: O_Soldier_F {
    weapons[] = {EAST_CARBINE};
    magazines[] = {
      EAST_CARBINE_MAG,
      EAST_FRAG,
      EAST_SMOKE_WHITE
    };
    launchers[] = {EAST_MAT};
    items[] += {
      "ACE_fieldDressing:3",
      "ACE_morphine"
    };
    backpack[] = {"rhs_rpg_empty"};
    backpackItems[] = {EAST_MAT_MAG};
  };

  // Medium AT Asst
  // Define gear additions and overrides for MAT Spotter units
  class O_Soldier_AAT_F: O_Soldier_F {
    backpack[] = {"rhs_rpg_empty"};
    backpackItems[] = {EAST_MAT_MAG};
    linkedItems[] += {"Binocular"};
    items[] += {
      "ACE_fieldDressing:3",
      "ACE_morphine"
    };
  };

  // AA Gunner
  // Define gear additions and overrides for AA Gunner units
  class O_Soldier_AA_F: O_Soldier_F {
    backpack[] = {EAST_PACK_HEAVY};
    weapons[] = {EAST_CARBINE};
    magazines[] = {
      EAST_CARBINE_MAG,
      EAST_FRAG,
      "rhs_mag_rgn:1",
      EAST_SMOKE_WHITE
    };
    launchers[] = {EAST_SAM};
    backpackItems[] += {EAST_SAM_MAG};
  };

  // AA Asst
  // Define gear additions and overrides for AA Spotter units
  class O_Soldier_AAA_F: O_Soldier_F {
    backpack[] = {EAST_PACK_HEAVY};
    backpackItems[] = {EAST_SAM_MAG};
    linkedItems[] += {"Binocular"};
  };

  // Mortar Gunner
  // Define gear additions and overrides for Mortar Gunner units
  class O_support_Mort_F: O_Soldier_F {
    weapons[] = {EAST_CARBINE};
    magazines[] = {
      EAST_CARBINE_MAG,
      EAST_FRAG,
      EAST_SMOKE_WHITE
    };
    items[] += {
      "ACE_fieldDressing:3",
      "ACE_morphine"
    };
    backpack[] = {"B_Mortar_01_weapon_F"};
  };

  // Mortar Asst
  // Define gear additions and overrides for Mortar Asst units
  class O_support_AMort_F: O_Soldier_F {
    backpack[] = {"B_Mortar_01_support_F"};
    linkedItems[] += {"Binocular"};
    items[] += {
      "ACE_fieldDressing:3",
      "ACE_morphine"
    };
  };

  /* END RIFLEMAN EXTENSIONS */

  /* SPOTTER BASE */

  // Define the base class for Spotter units
  class O_spotter_F {
    uniform[] = {
      "U_CAF_AG_ME_FATIGUES_01",
      "U_CAF_AG_ME_FATIGUES_01a",
      "U_CAF_AG_ME_FATIGUES_01b",
      "U_CAF_AG_ME_FATIGUES_01c",
      "U_CAF_AG_ME_FATIGUES_01d",
      "U_CAF_AG_ME_ROBES_Mil_01",
      "U_CAF_AG_ME_ROBES_mil_01a",
      "U_CAF_AG_ME_ROBES_01",
      "U_CAF_AG_ME_ROBES_01a",
      "U_CAF_AG_ME_ROBES_01b",
      "U_CAF_AG_ME_ROBES_01c",
      "U_CAF_AG_ME_ROBES_01d",
      "U_CAF_AG_ME_ROBES_02",
      "U_CAF_AG_ME_ROBES_02a",
      "U_CAF_AG_ME_ROBES_02b",
      "U_CAF_AG_ME_ROBES_02c",
      "U_CAF_AG_ME_ROBES_03",
      "U_CAF_AG_ME_ROBES_03a",
      "U_CAF_AG_ME_ROBES_03b",
      "U_CAF_AG_ME_ROBES_03c",
      "U_CAF_AG_ME_ROBES_03d",
      "U_CAF_AG_ME_ROBES_04",
      "U_CAF_AG_ME_ROBES_04a",
      "U_CAF_AG_ME_ROBES_04b",
      "U_CAF_AG_ME_ROBES_04c",
      "U_CAF_AG_ME_ROBES_04d"
    };
    vest[] = {
      "rhs_vydra_3m",
      "rhs_6sh46",
      "rhs_6b23",
      "rhs_6b23_ML_crewofficer",
      "rhs_6b23_ML_crew",
      "rhs_6sh92",
      "rhs_6sh92_vog",
      "rhs_6b23_rifleman",
      "V_Chestrig_blk",
      "V_Chestrig_rgr",
      "V_Chestrig_khk",
      "V_Chestrig_oli",
      "V_BandollierB_blk",
      "V_BandollierB_cbr",
      "V_BandollierB_rgr",
      "V_BandollierB_khk",
      "V_BandollierB_oli"
    };
    headgear[] = {
      "H_caf_ag_turban",
      "H_Shemag_olive",
      "H_ShemagOpen_tan",
      "H_ShemagOpen_khk",
      "H_caf_ag_paktol_04",
      "H_caf_ag_paktol",
      "H_caf_ag_paktol_03",
      "H_caf_ag_paktol_02",
      "H_caf_ag_paktol_04",
      "H_caf_ag_paktol_04",
      "ibr_mol_redberet",
      "H_caf_ag_fur2",
      "H_caf_ag_fur",
      "H_caf_ag_wrap"
    };
    facewear[] = {};
    backpack[] = {
      "rhs_sidor",
      "B_TacticalPack_blk",
      "B_TacticalPack_rgr",
      "B_TacticalPack_oli",
      "rhs_assault_umbts_engineer_empty",
      "rhs_assault_umbts",
      "MNP_B_RU2_FP",
      "B_FieldPack_khk",
      "B_FieldPack_blk",
      "ibr_backpack"
    };

    weapons[] = {EAST_SPOTTER};
    launchers[] = {};
    handguns[] = {};

    magazines[] = {
      EAST_SPOTTER_MAG,
      EAST_SMOKE_WHITE,
      EAST_FRAG
    };
    items[] = {
      "ACE_fieldDressing:3",
      "ACE_morphine",
      "ACE_CableTie",
      "ACE_Flashlight_XL50"
    };
    attachments[] = {
			EAST_SPOTTER_SCOPE,
			EAST_SPOTTER_RAIL
		};
    backpackItems[] = {};
    linkedItems[] = {
      "itemWatch",
      "itemMap",
      "itemCompass",
      "Binocular"
    };
    radio = EAST_RADIO_SHORTWAVE;
  };

  /* SNIPER BASE */

  // Define the base class for Sniper units
  class O_sniper_F {
    uniform[] = {
      "U_CAF_AG_ME_FATIGUES_01",
      "U_CAF_AG_ME_FATIGUES_01a",
      "U_CAF_AG_ME_FATIGUES_01b",
      "U_CAF_AG_ME_FATIGUES_01c",
      "U_CAF_AG_ME_FATIGUES_01d",
      "U_CAF_AG_ME_ROBES_Mil_01",
      "U_CAF_AG_ME_ROBES_mil_01a",
      "U_CAF_AG_ME_ROBES_01",
      "U_CAF_AG_ME_ROBES_01a",
      "U_CAF_AG_ME_ROBES_01b",
      "U_CAF_AG_ME_ROBES_01c",
      "U_CAF_AG_ME_ROBES_01d",
      "U_CAF_AG_ME_ROBES_02",
      "U_CAF_AG_ME_ROBES_02a",
      "U_CAF_AG_ME_ROBES_02b",
      "U_CAF_AG_ME_ROBES_02c",
      "U_CAF_AG_ME_ROBES_03",
      "U_CAF_AG_ME_ROBES_03a",
      "U_CAF_AG_ME_ROBES_03b",
      "U_CAF_AG_ME_ROBES_03c",
      "U_CAF_AG_ME_ROBES_03d",
      "U_CAF_AG_ME_ROBES_04",
      "U_CAF_AG_ME_ROBES_04a",
      "U_CAF_AG_ME_ROBES_04b",
      "U_CAF_AG_ME_ROBES_04c",
      "U_CAF_AG_ME_ROBES_04d"
    };
    vest[] = {
      "rhs_vydra_3m",
      "rhs_vest_commander",
      "rhs_6sh46",
      "rhs_6b23",
      "rhs_6b23_ML_crewofficer",
      "rhs_6b23_ML_crew",
      "rhs_6sh92",
      "rhs_6sh92_vog",
      "rhs_6b23_rifleman",
      "V_Chestrig_blk",
      "V_Chestrig_rgr",
      "V_Chestrig_khk",
      "V_Chestrig_oli",
      "V_BandollierB_blk",
      "V_BandollierB_cbr",
      "V_BandollierB_rgr",
      "V_BandollierB_khk",
      "V_BandollierB_oli"
    };
    headgear[] = {
      "H_caf_ag_turban",
      "H_Shemag_olive",
      "H_ShemagOpen_tan",
      "H_ShemagOpen_khk",
      "H_caf_ag_paktol_04",
      "H_caf_ag_paktol",
      "H_caf_ag_paktol_03",
      "H_caf_ag_paktol_02",
      "H_caf_ag_paktol_04",
      "H_caf_ag_paktol_04",
      "ibr_mol_redberet",
      "H_caf_ag_fur2",
      "H_caf_ag_fur",
      "H_caf_ag_wrap"
    };
    facewear[] = {};
    backpack[] = {
      "rhs_sidor",
      "B_TacticalPack_blk",
      "B_TacticalPack_rgr",
      "B_TacticalPack_oli",
      "rhs_assault_umbts_engineer_empty",
      "rhs_assault_umbts",
      "MNP_B_RU2_FP",
      "B_FieldPack_khk",
      "B_FieldPack_blk",
      "ibr_backpack"
    };

    weapons[] = {EAST_SNIPER};
    launchers[] = {};
    handguns[] = {};

    magazines[] = {
      EAST_SNIPER_MAG,
      EAST_SMOKE_WHITE,
      EAST_FRAG
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
      "Binocular"
    };
    attachments[] = {
			EAST_SNIPER_SCOPE
		};

    radio = EAST_RADIO_SHORTWAVE;
  };

  /* HELICOPTER CREW BASE */

  // Heli Pilot
  // Define the base class for all Helicopter pilot and crew units
  class O_Helipilot_F {
    uniform[] = {
      "U_CAF_AG_ME_FATIGUES_01",
      "U_CAF_AG_ME_FATIGUES_01a",
      "U_CAF_AG_ME_FATIGUES_01b",
      "U_CAF_AG_ME_FATIGUES_01c",
      "U_CAF_AG_ME_FATIGUES_01d",
      "U_CAF_AG_ME_ROBES_Mil_01",
      "U_CAF_AG_ME_ROBES_mil_01a",
      "U_CAF_AG_ME_ROBES_01",
      "U_CAF_AG_ME_ROBES_01a",
      "U_CAF_AG_ME_ROBES_01b",
      "U_CAF_AG_ME_ROBES_01c",
      "U_CAF_AG_ME_ROBES_01d",
      "U_CAF_AG_ME_ROBES_02",
      "U_CAF_AG_ME_ROBES_02a",
      "U_CAF_AG_ME_ROBES_02b",
      "U_CAF_AG_ME_ROBES_02c",
      "U_CAF_AG_ME_ROBES_03",
      "U_CAF_AG_ME_ROBES_03a",
      "U_CAF_AG_ME_ROBES_03b",
      "U_CAF_AG_ME_ROBES_03c",
      "U_CAF_AG_ME_ROBES_03d",
      "U_CAF_AG_ME_ROBES_04",
      "U_CAF_AG_ME_ROBES_04a",
      "U_CAF_AG_ME_ROBES_04b",
      "U_CAF_AG_ME_ROBES_04c",
      "U_CAF_AG_ME_ROBES_04d"
    };
    headgear[] = {
      "rhs_gssh18"
    };
    vest[] = {
      "rhs_6b23_ML_crewofficer",
    };
    facewear[] = {};
    backpack[] = {
      "rhs_sidor"
    };

    weapons[] = {EAST_SMG};
    launchers[] = {};
    handguns[] = {EAST_PISTOL};

    magazines[] = {
      EAST_SMG_MAG,
      EAST_PISTOL_MAG,
      EAST_SMOKE_WHITE
    };
    backpackItems[] += {"ACE_key_east"};
    items[] = {
      "ACE_fieldDressing:3",
      "ACE_morphine",
      "ACE_CableTie",
      "ACE_Flashlight_XL50"
    };
    linkedItems[] = {
      "ItemWatch",
      "ItemMap",
      "ItemCompass"
    };
    attachments[] = {
			EAST_SMG_SCOPE,
			EAST_SMG_RAIL
		};
    radio = EAST_RADIO_SHORTWAVE;
  };

  // Heli crew
  // Define gear additions and overrides for Helicopter Crew units
  class O_helicrew_F: O_Helipilot_F {
    vest[] = {
      "rhs_6b23_ML_crew",
    };
  };

  /* VEHICLE CREW BASE */

  // Define the base class for all vehicle crew and engineer units
  class O_crew_F {
    uniform[] = {
      "U_CAF_AG_ME_FATIGUES_01",
      "U_CAF_AG_ME_FATIGUES_01a",
      "U_CAF_AG_ME_FATIGUES_01b",
      "U_CAF_AG_ME_FATIGUES_01c",
      "U_CAF_AG_ME_FATIGUES_01d",
      "U_CAF_AG_ME_ROBES_Mil_01",
      "U_CAF_AG_ME_ROBES_mil_01a",
      "U_CAF_AG_ME_ROBES_01",
      "U_CAF_AG_ME_ROBES_01a",
      "U_CAF_AG_ME_ROBES_01b",
      "U_CAF_AG_ME_ROBES_01c",
      "U_CAF_AG_ME_ROBES_01d",
      "U_CAF_AG_ME_ROBES_02",
      "U_CAF_AG_ME_ROBES_02a",
      "U_CAF_AG_ME_ROBES_02b",
      "U_CAF_AG_ME_ROBES_02c",
      "U_CAF_AG_ME_ROBES_03",
      "U_CAF_AG_ME_ROBES_03a",
      "U_CAF_AG_ME_ROBES_03b",
      "U_CAF_AG_ME_ROBES_03c",
      "U_CAF_AG_ME_ROBES_03d",
      "U_CAF_AG_ME_ROBES_04",
      "U_CAF_AG_ME_ROBES_04a",
      "U_CAF_AG_ME_ROBES_04b",
      "U_CAF_AG_ME_ROBES_04c",
      "U_CAF_AG_ME_ROBES_04d"
    };
    headgear[] = {
      "H_caf_ag_turban",
      "H_Shemag_olive",
      "H_ShemagOpen_tan",
      "H_ShemagOpen_khk",
      "H_caf_ag_paktol_04",
      "H_caf_ag_paktol",
      "H_caf_ag_paktol_03",
      "H_caf_ag_paktol_02",
      "H_caf_ag_paktol_04",
      "H_caf_ag_paktol_04",
      "ibr_mol_redberet",
      "H_caf_ag_fur2",
      "H_caf_ag_fur",
      "H_caf_ag_wrap"
    };
    vest[] = {"rhs_6b23_ML_crew"};
    facewear[] = {};
    backpack[] = {
      "rhs_sidor"
    };

    weapons[] = {EAST_SMG};
    launchers[] = {};
    handguns[] = {};

    magazines[] = {
      EAST_SMG_MAG,
      EAST_SMOKE_WHITE
    };
    backpackItems[] = {"ACE_key_east"};
    items[] = {
      "ACE_fieldDressing:3",
      "ACE_morphine",
      "ACE_CableTie",
      "ACE_Flashlight_XL50"
    };
    linkedItems[] = {
      "ItemWatch",
      "ItemMap",
      "ItemCompass"
    };
    attachments[] = {
			EAST_SMG_SCOPE,
			EAST_SMG_RAIL
		};
    radio = EAST_RADIO_SHORTWAVE;
  };

  // Repair Specialist
  // Define gear additions and overrides for Repair Specialist units
  // as well as the base class for all Explosive/Mine specialists
  class O_Soldier_repair_F: O_crew_F {
    weapons[] = {EAST_CARBINE};
    magazines[] = {
      EAST_CARBINE_MAG,
      EAST_FRAG,
      EAST_SMOKE_WHITE
    };
    attachments[] = {
			EAST_CARBINE_SCOPE,
			EAST_CARBINE_RAIL
		};
    backpack[] = {
      "B_Kitbag_rgr",
      "B_Kitbag_cbr"
    };
    backpackItems[] = {"Toolkit"};
  };

  // Explosive Specialist
  // Define gear additions and overrides for Explosive Specialist units
  class O_Soldier_exp_F: O_Soldier_repair_F {
    backpackItems[] = {
      "Toolkit",
      "ACE_DefusalKit",
      "ACE_Clacker",
      "MineDetector"
    };
    magazines[] = {
      EAST_CARBINE_MAG,
      "DemoCharge_Remote_Mag:3",
      "SatchelCharge_Remote_Mag:2"
    };
  };

  // Mine Specialist
  // Define gear additions and overrides for Mine Specialist units
  class O_engineer_F: O_Soldier_repair_F {
    backpackItems[] = {
      "Toolkit",
      "ACE_DefusalKit",
      "ACE_Clacker",
      "MineDetector"
    };
    magazines[] = {
      EAST_CARBINE_MAG,
      "ATMine_Range_Mag:2",
      "APERSBoundingMine_Range_Mag:2",
      "APERSMine_Range_Mag:2"
    };
  };

  // Default if no other loadout can be found
  class fallback: O_soldier_f {
    // Same as normal rifleman
  };
};
