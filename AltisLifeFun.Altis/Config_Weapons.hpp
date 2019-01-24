/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
/*
    class Name {
        name = "Waffen Shop Name";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "", "", 5500, 2500 },
			{ "", "", 5500, 2500 },
			{ "", "", 5500, 2500 },
			{ "", "", 5500, 2500 },
			{ "", "", 5500, 2500 },
			{ "", "", 5500, 2500 },
			{ "", "", 5500, 2500 },
			{ "", "", 5500, 2500 },
			{ "Rangefinder", "", 4000, 1500 },
            { "NVGoggles", "", 1200, 980 },
            { "FirstAidKit", "", 1200, 980 },
			{ "muzzle_snds_H", "", 4000, 1500 },
			{ "muzzle_snds_M", "", 4000, 1500 },
			{ "muzzle_snds_B", "", 4000, 1500 }
        };
        mags[] = {
			{ "", "", 300 },
			{ "", "", 300 },
			{ "", "", 300 },
			{ "", "", 300 },
			{ "", "", 300 },
            { "", "", 300 },
            { "", "", 300 },
            { "", "", 300 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 }, 	
			{ "acc_flashlight", "", 2600 },
			{ "acc_pointer_IR", "", 1600 },
			{ "optic_Arco", "", 1600 },
			{ "optic_SOS", "", 1600 },
			{ "optic_Hamr_khk_F", "", 1600 },
			{ "optic_DMS_ghex_F", "", 1600 },
			{ "optic_Hamr", "", 1600 },
			{ "optic_LRPS", "", 1600 },
			{ "optic_DMS", "", 2600 },
			{ "optic_MRCO", "", 1600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
        };
    };
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
			{ "SMG_01_F", "", 18500, -1 },
			{ "SMG_02_F", "", 17500, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
			{ "arifle_MX_F", "", 14500, 6000 },
            { "hgun_PDW2000_F", "", 20000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 50 },
			{ "30Rnd_65x39_caseless_mag", "", 375 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 },
			{ "optic_DMS", "", 2600 },
			{ "optic_Arco", "", 1600 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "srifle_DMR_03_ACO_F", "", 5500, 2500 },
			{ "srifle_DMR_06_camo_F", "", 5500, 2500 },
			{ "srifle_DMR_01_F", "", 5500, 2500 },
			{ "srifle_EBR_F", "", 5500, 2500 },
			{ "arifle_Katiba_F", "", 5500, 2500 },
			{ "arifle_TRG20_F", "", 5500, 2500 },
			{ "SMG_01_F", "", 5500, 2500 },
			{ "arifle_SDAR_F", "", 5500, 2500 },
			{ "Rangefinder", "", 4000, 1500 },
            { "NVGoggles", "", 1200, 980 },
            { "FirstAidKit", "", 1200, 980 },
			{ "muzzle_snds_H", "", 4000, 1500 },
			{ "muzzle_snds_M", "", 4000, 1500 },
			{ "muzzle_snds_B", "", 4000, 1500 }
        };
        mags[] = {
            { "20Rnd_762x51_Mag", "", 300 },
            { "20Rnd_762x51_Mag", "", 300 },
            { "10Rnd_762x54_Mag", "", 300 },
            { "20Rnd_762x51_Mag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 300 },
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 300 },
            { "20Rnd_556x45_UW_mag", "", 125 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 }, 	
			{ "acc_flashlight", "", 2600 },
			{ "acc_pointer_IR", "", 1600 },
			{ "optic_Arco", "", 1600 },
			{ "optic_SOS", "", 1600 },
			{ "optic_Hamr_khk_F", "", 1600 },
			{ "optic_DMS_ghex_F", "", 1600 },
			{ "optic_Hamr", "", 1600 },
			{ "optic_LRPS", "", 1600 },
			{ "optic_DMS", "", 2600 },
			{ "optic_MRCO", "", 1600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
        };
    };

    class red {
        name = "Schwarzmarkt RED";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "arifle_MXM_F", "", 5500, 2500 },
			{ "arifle_MX_F", "", 5500, 2500 },
			{ "arifle_MXC_F", "", 5500, 2500 },
			{ "arifle_MX_SW_F", "", 5500, 2500 },
			{ "arifle_Mk20_F", "", 5500, 2500 },
			{ "SMG_02_F", "", 5500, 2500 },
			{ "Rangefinder", "", 4000, 1500 },
            { "NVGoggles", "", 1200, 980 },
            { "FirstAidKit", "", 1200, 980 },
			{ "muzzle_snds_H", "", 4000, 1500 },
			{ "muzzle_snds_M", "", 4000, 1500 },
			{ "muzzle_snds_B", "", 4000, 1500 }
        };
        mags[] = {
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 300 },
            { "100Rnd_65x39_caseless_mag_Tracer", "", 125 },
            { "30Rnd_556x45_Stanag_Tracer_Green", "", 300 },
            { "30Rnd_9x21_Mag", "", 300 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 }, 	
			{ "acc_flashlight", "", 2600 },
			{ "acc_pointer_IR", "", 1600 },
			{ "optic_Arco", "", 1600 },
			{ "optic_SOS", "", 1600 },
			{ "optic_Hamr_khk_F", "", 1600 },
			{ "optic_DMS_ghex_F", "", 1600 },
			{ "optic_Hamr", "", 1600 },
			{ "optic_LRPS", "", 1600 },
			{ "optic_DMS", "", 2600 },
			{ "optic_MRCO", "", 1600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
        };
    };

    class blue {
        name = "Schwarzmarkt BLUE";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "srifle_DMR_03_woodland_F", "", 5500, 2500 },
			{ "srifle_DMR_01_F", "", 5500, 2500 },
			{ "srifle_EBR_MRCO_pointer_F", "", 5500, 2500 },
			{ "arifle_Katiba_C_F", "", 5500, 2500 },
			{ "arifle_Mk20_plain_F", "", 5500, 2500 },
			{ "arifle_TRG21_F", "", 5500, 2500 },
			{ "SMG_01_F", "", 5500, 2500 },
			{ "SMG_02_F", "", 5500, 2500 },
			{ "Rangefinder", "", 4000, 1500 },
            { "NVGoggles", "", 1200, 980 },
            { "FirstAidKit", "", 1200, 980 },
			{ "muzzle_snds_H", "", 4000, 1500 },
			{ "muzzle_snds_M", "", 4000, 1500 },
			{ "muzzle_snds_B", "", 4000, 1500 }
        };
        mags[] = {
			{ "20Rnd_762x51_Mag", "", 300 },
			{ "10Rnd_762x54_Mag", "", 300 },
			{ "20Rnd_762x51_Mag", "", 300 },
			{ "30Rnd_65x39_caseless_green", "", 300 },
			{ "30Rnd_556x45_Stanag_Tracer_Yellow", "", 300 },
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 300 },
            { "30Rnd_9x21_Mag", "", 300 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 }, 	
			{ "acc_flashlight", "", 2600 },
			{ "acc_pointer_IR", "", 1600 },
			{ "optic_Arco", "", 1600 },
			{ "optic_SOS", "", 1600 },
			{ "optic_Hamr_khk_F", "", 1600 },
			{ "optic_DMS_ghex_F", "", 1600 },
			{ "optic_Hamr", "", 1600 },
			{ "optic_LRPS", "", 1600 },
			{ "optic_DMS", "", 2600 },
			{ "optic_MRCO", "", 1600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
        };
    };

    class black {
        name = "Schwarzmarkt BLACK";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "srifle_DMR_04_F", "", 5500, 2500 },
			{ "srifle_DMR_04_Tan_F", "", 5500, 2500 },
			{ "arifle_Katiba_F", "", 5500, 2500 },
			{ "arifle_TRG21_F", "", 5500, 2500 },
			{ "SMG_01_F", "", 5500, 2500 },
			{ "SMG_02_F", "", 5500, 2500 },
			{ "Rangefinder", "", 4000, 1500 },
            { "NVGoggles", "", 1200, 980 },
            { "FirstAidKit", "", 1200, 980 },
			{ "muzzle_snds_H", "", 4000, 1500 },
			{ "muzzle_snds_M", "", 4000, 1500 },
			{ "muzzle_snds_B", "", 4000, 1500 }
        };
        mags[] = {
			{ "10Rnd_127x54_Mag", "", 300 },
			{ "30Rnd_65x39_caseless_green", "", 300 },
			{ "30Rnd_556x45_Stanag", "", 300 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 300 },
			{ "30Rnd_9x21_Mag", "", 300 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 }, 	
			{ "acc_flashlight", "", 2600 },
			{ "acc_pointer_IR", "", 1600 },
			{ "optic_Arco", "", 1600 },
			{ "optic_SOS", "", 1600 },
			{ "optic_Hamr_khk_F", "", 1600 },
			{ "optic_DMS_ghex_F", "", 1600 },
			{ "optic_Hamr", "", 1600 },
			{ "optic_LRPS", "", 1600 },
			{ "optic_DMS", "", 2600 },
			{ "optic_MRCO", "", 1600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
        };
    };

    class apexo {
        name = "Schwarzmarkt APEXO";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "arifle_AKM_F", "", 5500, 2500 },
			{ "arifle_AKS_F", "", 5500, 2500 },
			{ "arifle_CTAR_hex_F", "", 5500, 2500 },
			{ "hgun_Pistol_01_F", "", 5500, 2500 },
			{ "Rangefinder", "", 4000, 1500 },
            { "NVGoggles", "", 1200, 980 },
            { "FirstAidKit", "", 1200, 980 },
			{ "muzzle_snds_H", "", 4000, 1500 },
			{ "muzzle_snds_M", "", 4000, 1500 },
			{ "muzzle_snds_B", "", 4000, 1500 }
        };
        mags[] = {
			{ "30Rnd_762x39_Mag_Tracer_F", "", 300 },
			{ "30Rnd_545x39_Mag_Tracer_Green_F", "", 300 },
			{ "30Rnd_580x42_Mag_Tracer_F", "", 300 },
			{ "10Rnd_9x21_Mag", "", 300 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 }, 	
			{ "acc_flashlight", "", 2600 },
			{ "acc_pointer_IR", "", 1600 },
			{ "optic_Arco", "", 1600 },
			{ "optic_SOS", "", 1600 },
			{ "optic_Hamr_khk_F", "", 1600 },
			{ "optic_DMS_ghex_F", "", 1600 },
			{ "optic_Hamr", "", 1600 },
			{ "optic_LRPS", "", 1600 },
			{ "optic_DMS", "", 2600 },
			{ "optic_MRCO", "", 1600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
        };
    };

    class white {
        name = "Schwarzmarkt WHITE";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "srifle_DMR_07_hex_F", "", 5500, 2500 },
			{ "arifle_AKM_F", "", 5500, 2500 },
			{ "arifle_SPAR_02_khk_F", "", 5500, 2500 },
			{ "SMG_05_F", "", 5500, 2500 },
			{ "Rangefinder", "", 4000, 1500 },
            { "NVGoggles", "", 1200, 980 },
            { "FirstAidKit", "", 1200, 980 },
			{ "muzzle_snds_H", "", 4000, 1500 },
			{ "muzzle_snds_M", "", 4000, 1500 },
			{ "muzzle_snds_B", "", 4000, 1500 }
        };
        mags[] = {
			{ "20Rnd_650x39_Cased_Mag_F", "", 300 },
			{ "30Rnd_762x39_Mag_F", "", 300 },
			{ "150Rnd_556x45_Drum_Mag_Tracer_F", "", 300 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 300 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 }, 	
			{ "acc_flashlight", "", 2600 },
			{ "acc_pointer_IR", "", 1600 },
			{ "optic_Arco", "", 1600 },
			{ "optic_SOS", "", 1600 },
			{ "optic_Hamr_khk_F", "", 1600 },
			{ "optic_DMS_ghex_F", "", 1600 },
			{ "optic_Hamr", "", 1600 },
			{ "optic_LRPS", "", 1600 },
			{ "optic_DMS", "", 2600 },
			{ "optic_MRCO", "", 1600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
        };
    };

    class schwarz {
        name = "Schwarzmarkt";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "srifle_EBR_F", "", 5500, 250000000 },
			{ "LMG_Zafir_F", "", 25000000, 250000000 },
			{ "srifle_LRR_tna_F", "", 25000000, 25000000 }
        };
        mags[] = {
            { "20Rnd_762x51_Mag", "", 300 },
			{ "150Rnd_762x54_Box_Tracer", "", 300 },
			{ "7Rnd_408_Mag", "", 300 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 }, 	
			{ "acc_flashlight", "", 2600 },
			{ "acc_pointer_IR", "", 1600 },
			{ "optic_Arco", "", 1600 },
			{ "optic_SOS", "", 1600 },
			{ "optic_Hamr_khk_F", "", 1600 },
			{ "optic_DMS_ghex_F", "", 1600 },
			{ "optic_Hamr", "", 1600 },
			{ "optic_LRPS", "", 1600 },
			{ "optic_DMS", "", 2600 },
			{ "optic_MRCO", "", 1600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
			{ "arifle_Mk20_F", "", 85000, 40000 },
            { "arifle_TRG20_F", "", 55000, 25000 },
            { "arifle_Katiba_F", "", 90000, 35000 },
			{ "arifle_TRG21_F", "", 55000, 35000 },
            { "arifle_SDAR_F", "", 40000, 15000 },
            { "hgun_PDW2000_F", "", 9500, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
			{ "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
			{ "20Rnd_762x51_Mag", "", 600 },
			{ "30Rnd_545x39_Mag_F", "", 200 },
            { "20Rnd_556x45_UW_mag", "", 125 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 },
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 }, 	
			{ "acc_flashlight", "", 2600 },
			{ "acc_pointer_IR", "", 1600 },
			{ "optic_Arco", "", 1600 },
			{ "optic_DMS", "", 2600 },
			{ "optic_MRCO", "", 1600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Cop Ausrüstung";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
			{ "optic_AMS", "", 250, 35 },
			{ "ItemCompass", "", 250, 25 },
			{ "Rangefinder", "", 250, 25 },
			{ "NVGoggles", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "FirstAidKit", "", 750, 65 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 },
			{ "optic_Arco", "", 700, -1 },
			{ "optic_Holosight", "", 1200, 275 },
			{ "optic_MRCO", "", 700, -1 },
			{ "bipod_01_F_blk", "", 700, -1 },
			{ "optic_NVS", "", 700, -1 },
			{ "optic_LRPS", "", 700, -1 },
			{ "optic_DMS", "", 700, -1 },
			{ "muzzle_snds_H", "", 700, -1 },
			{ "muzzle_snds_L", "", 700, -1 },
			{ "muzzle_snds_M", "", 700, -1 },
			{ "muzzle_snds_B", "", 700, -1 },
			{ "muzzle_snds_338_black", "", 700, -1 },
			{ "optic_ERCO_blk_F", "", 700, -1 },
            { "acc_flashlight", "", 750, 100 },
			{ "acc_pointer_IR", "", 750, 100 },
            { "FirstAidKit", "", 750, 65 }
        };
        mags[] = {};
        accs[] = {};
    };

    class cop_patrol {
        name = "Anwärter";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "Du benötigst einen höheren Rang!" };
        items[] = {
            { "hgun_P07_snds_F", "Taser", 200, 150 },
            { "arifle_sdar_F", "Taser Rifle", 2000, 1500 },
            { "SMG_01_F", "", 2000, 1500 },
			{ "SMG_02_F", "", 2000, 1500 }
        };
        mags[] = {
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "30Rnd_9x21_Mag", "", 250 }
        };
        accs[] = {};
    };

    class cop_rek {
        name = "Wachtmeister";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "Du benötigst einen höheren Rang!" };
        items[] = {
            { "hgun_P07_snds_F", "Taser", 200, 150 },
            { "arifle_MXC_F", "", 200, 150 },
            { "arifle_MXC_Black_F", "", 200, 150 },
            { "arifle_MX_F", "", 200, 150 },
            { "arifle_MXM_F", "", 200, 150 },
            { "arifle_Katiba_F", "", 200, 150 },
            { "srifle_DMR_06_camo_F", "", 200, 150 },
            { "srifle_DMR_06_olive_F", "", 200, 150 },
            { "arifle_Katiba_C_F", "", 200, 150 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "30er Mags", 45 },
            { "20Rnd_762x51_Mag", "20er Mags", 45 },
			{ "30Rnd_65x39_caseless_green", "", 130 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "30Rnd_9x21_Mag", "", 250 }
        };
        accs[] = {};
    };

    class cop_an {
        name = "Oberwachtmeister";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "Du benötigst einen höheren Rang!" };
        items[] = {
            { "hgun_P07_snds_F", "Projektor", 200, 150 },
            { "arifle_MX_Black_F", "", 200, 150 },
            { "arifle_MXM_Black_F", "", 200, 150 },
            { "arifle_MX_SW_F", "", 200, 150 },
            { "arifle_MX_SW_Black_F", "", 200, 150 },
            { "arifle_MXC_F", "", 200, 150 },
            { "arifle_MXC_Black_F", "", 200, 150 },
            { "arifle_MX_F", "", 200, 150 },
            { "arifle_MXM_F", "", 200, 150 },
            { "arifle_Katiba_F", "", 200, 150 },
            { "srifle_EBR_F", "", 200, 150 },
            { "srifle_DMR_01_F", "", 200, 150 },
            { "arifle_Katiba_C_F", "", 200, 150 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "30er Mags", 45 },
            { "10Rnd_762x54_Mag", "10er Mags", 45 },
			{ "30Rnd_65x39_caseless_green", "", 130 },
            { "100Rnd_65x39_caseless_mag", "", 130 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "30Rnd_9x21_Mag", "", 250 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 }, 	
			{ "acc_flashlight", "", 2600 },
			{ "acc_pointer_IR", "", 1600 },
			{ "optic_Arco", "", 1600 },
			{ "optic_SOS", "", 1600 },
			{ "optic_Hamr_khk_F", "", 1600 },
			{ "optic_DMS_ghex_F", "", 1600 },
			{ "optic_Hamr", "", 1600 },
			{ "optic_LRPS", "", 1600 },
			{ "optic_DMS", "", 2600 },
			{ "optic_MRCO", "", 1600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
		};
    };

    class cop_kom {
        name = "Kommissar";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "Du benötigst einen höheren Rang!" };
        items[] = {
            { "hgun_P07_snds_F", "Projektor", 200, 150 },
            { "arifle_MX_Black_F", "", 200, 150 },
            { "arifle_MXM_Black_F", "", 200, 150 },
            { "arifle_MX_SW_F", "", 200, 150 },
            { "arifle_MX_SW_Black_F", "", 200, 150 },
            { "arifle_MXC_F", "", 200, 150 },
            { "arifle_MXC_Black_F", "", 200, 150 },
            { "arifle_MX_F", "", 200, 150 },
            { "arifle_MXM_F", "", 200, 150 },
            { "arifle_Katiba_F", "", 200, 150 },
            { "arifle_Katiba_C_F", "", 200, 150 },
            { "LMG_Mk200_F", "", 200, 150 },
            { "LMG_Zafir_F", "", 200, 150 },
            { "srifle_DMR_03_F", "", 200, 150 },
            { "srifle_DMR_03_khaki_F", "", 200, 150 },
            { "srifle_DMR_03_tan_F", "", 200, 150 },
            { "srifle_DMR_03_woodland_F", "", 200, 150 },
            { "srifle_DMR_03_multicam_F", "", 200, 150 },
            { "srifle_DMR_04_F", "", 200, 150 },
            { "srifle_LRR_F", "", 200, 150 }
        };
        mags[] = {
            { "7Rnd_408_Mag", "", 130 },
            { "10Rnd_127x54_Mag", "", 130 },
            { "150Rnd_762x54_Box", "", 130 },
            { "200Rnd_65x39_cased_Box", "", 130 },
            { "30Rnd_65x39_caseless_mag", "30er Mags", 45 },
			{ "30Rnd_65x39_caseless_green", "", 130 },
            { "100Rnd_65x39_caseless_mag", "", 130 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "30Rnd_9x21_Mag", "", 250 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 }, 	
			{ "acc_flashlight", "", 2600 },
			{ "acc_pointer_IR", "", 1600 },
			{ "optic_Arco", "", 1600 },
			{ "optic_SOS", "", 1600 },
			{ "optic_Hamr_khk_F", "", 1600 },
			{ "optic_DMS_ghex_F", "", 1600 },
			{ "optic_Hamr", "", 1600 },
			{ "optic_LRPS", "", 1600 },
			{ "optic_DMS", "", 2600 },
			{ "optic_MRCO", "", 1600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
		};
    };

    class cop_ober {
        name = "Oberkommissar";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "Du benötigst einen höheren Rang!" };
        items[] = {
            { "hgun_P07_snds_F", "Projektor", 200, 150 },
            { "arifle_MX_Black_F", "", 200, 150 },
            { "arifle_MXM_Black_F", "", 200, 150 },
            { "arifle_MX_SW_F", "", 200, 150 },
            { "arifle_MX_SW_Black_F", "", 200, 150 },
            { "arifle_MXC_F", "", 200, 150 },
            { "arifle_MXC_Black_F", "", 200, 150 },
            { "arifle_MX_F", "", 200, 150 },
            { "arifle_MXM_F", "", 200, 150 },
            { "arifle_Katiba_F", "", 200, 150 },
            { "arifle_Katiba_C_F", "", 200, 150 },
            { "LMG_Mk200_F", "", 200, 150 },
            { "LMG_Zafir_F", "", 200, 150 },
            { "srifle_LRR_F", "", 200, 150 },
            { "MMG_01_hex_F", "", 200, 150 },
            { "MMG_01_tan_F", "", 200, 150 }
        };
        mags[] = {
            { "150Rnd_93x64_Mag", "", 130 },
            { "7Rnd_408_Mag", "", 130 },
            { "150Rnd_762x54_Box", "", 130 },
            { "200Rnd_65x39_cased_Box", "", 130 },
            { "30Rnd_65x39_caseless_mag", "30er Mags", 45 },
			{ "30Rnd_65x39_caseless_green", "", 130 },
            { "100Rnd_65x39_caseless_mag", "", 130 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "30Rnd_9x21_Mag", "", 250 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 }, 	
			{ "acc_flashlight", "", 2600 },
			{ "acc_pointer_IR", "", 1600 },
			{ "optic_Arco", "", 1600 },
			{ "optic_SOS", "", 1600 },
			{ "optic_Hamr_khk_F", "", 1600 },
			{ "optic_DMS_ghex_F", "", 1600 },
			{ "optic_Hamr", "", 1600 },
			{ "optic_LRPS", "", 1600 },
			{ "optic_DMS", "", 2600 },
			{ "optic_MRCO", "", 1600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
		};
    };
	
    class cop_sek {
        name = "Hauptkommissar";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "Du benötigst einen höheren Rang!" };
        items[] = {
            { "hgun_P07_snds_F", "Projektor", 200, 150 },
            { "arifle_MX_Black_F", "", 200, 150 },
            { "arifle_MXM_Black_F", "", 200, 150 },
            { "arifle_MX_SW_F", "", 200, 150 },
            { "arifle_MX_SW_Black_F", "", 200, 150 },
            { "arifle_MXC_F", "", 200, 150 },
            { "arifle_MXC_Black_F", "", 200, 150 },
            { "arifle_MX_F", "", 200, 150 },
            { "arifle_MXM_F", "", 200, 150 },
            { "arifle_Katiba_F", "", 200, 150 },
            { "arifle_Katiba_C_F", "", 200, 150 },
            { "LMG_Mk200_F", "", 200, 150 },
            { "LMG_Zafir_F", "", 200, 150 },
            { "srifle_LRR_F", "", 200, 150 },
            { "MMG_01_hex_F", "", 200, 150 },
            { "MMG_01_tan_F", "", 200, 150 },
            { "srifle_LRR_camo_F", "", 200, 150 },
            { "srifle_GM6_F", "", 200, 150 },
            { "srifle_GM6_camo_F", "", 200, 150 },
            { "srifle_LRR_F", "", 200, 150 },
            { "srifle_DMR_02_F", "", 200, 150 },
            { "srifle_DMR_02_camo_F", "", 200, 150 },
			{ "HandGrenade_Stone", "Flashbang", 1700, -1 },
			{ "SmokeShellYellow", "GieftGass", 1700, -1 }
        };
        mags[] = {
            { "7Rnd_408_Mag", "", 130 },
            { "10Rnd_338_Mag", "", 130 },
            { "5Rnd_127x108_APDS_Mag", "", 130 },
            { "5Rnd_127x108_Mag", "", 130 },
            { "150Rnd_93x64_Mag", "", 130 },
            { "7Rnd_408_Mag", "", 130 },
            { "150Rnd_762x54_Box", "", 130 },
            { "200Rnd_65x39_cased_Box", "", 130 },
            { "30Rnd_65x39_caseless_mag", "30er Mags", 45 },
			{ "30Rnd_65x39_caseless_green", "", 130 },
            { "100Rnd_65x39_caseless_mag", "", 130 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "30Rnd_9x21_Mag", "", 250 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 }, 	
			{ "acc_flashlight", "", 2600 },
			{ "acc_pointer_IR", "", 1600 },
			{ "optic_Arco", "", 1600 },
			{ "optic_SOS", "", 1600 },
			{ "optic_Hamr_khk_F", "", 1600 },
			{ "optic_DMS_ghex_F", "", 1600 },
			{ "optic_Hamr", "", 1600 },
			{ "optic_LRPS", "", 1600 },
			{ "optic_DMS", "", 2600 },
			{ "optic_MRCO", "", 1600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
		};
    };
	
    class cop_direk {
        name = "POLIZEIRAT";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "Du benötigst einen höheren Rang!" };
        items[] = {
            { "hgun_P07_snds_F", "Projektor", 200, 150 },
            { "arifle_MX_Black_F", "", 200, 150 },
            { "arifle_MXM_Black_F", "", 200, 150 },
            { "arifle_MX_SW_F", "", 200, 150 },
            { "arifle_MX_SW_Black_F", "", 200, 150 },
            { "arifle_MXC_F", "", 200, 150 },
            { "arifle_MXC_Black_F", "", 200, 150 },
            { "arifle_MX_F", "", 200, 150 },
            { "arifle_MXM_F", "", 200, 150 },
            { "arifle_Katiba_F", "", 200, 150 },
            { "arifle_Katiba_C_F", "", 200, 150 },
            { "LMG_Mk200_F", "", 200, 150 },
            { "LMG_Zafir_F", "", 200, 150 },
            { "srifle_LRR_F", "", 200, 150 },
            { "MMG_01_hex_F", "", 200, 150 },
            { "MMG_01_tan_F", "", 200, 150 },
            { "srifle_LRR_camo_F", "", 200, 150 },
            { "srifle_GM6_F", "", 200, 150 },
            { "srifle_GM6_camo_F", "", 200, 150 },
            { "MMG_02_black_F", "", 200, 150 },
            { "MMG_02_camo_F", "", 200, 150 },
            { "MMG_02_sand_F", "", 200, 150 },
			{ "HandGrenade_Stone", "Flashbang", 1700, -1 },
			{ "SmokeShellYellow", "GieftGass", 1700, -1 }
        };
        mags[] = {
            { "", "", 130 },
            { "130Rnd_338_Mag", "", 130 },
            { "5Rnd_127x108_APDS_Mag", "", 130 },
            { "5Rnd_127x108_Mag", "", 130 },
            { "150Rnd_93x64_Mag", "", 130 },
            { "7Rnd_408_Mag", "", 130 },
            { "150Rnd_762x54_Box", "", 130 },
            { "200Rnd_65x39_cased_Box", "", 130 },
            { "30Rnd_65x39_caseless_mag", "30er Mags", 45 },
			{ "30Rnd_65x39_caseless_green", "", 130 },
            { "100Rnd_65x39_caseless_mag", "", 130 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "30Rnd_9x21_Mag", "", 250 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 }, 	
			{ "acc_flashlight", "", 2600 },
			{ "acc_pointer_IR", "", 1600 },
			{ "optic_Arco", "", 1600 },
			{ "optic_SOS", "", 1600 },
			{ "optic_Hamr_khk_F", "", 1600 },
			{ "optic_DMS_ghex_F", "", 1600 },
			{ "optic_Hamr", "", 1600 },
			{ "optic_LRPS", "", 1600 },
			{ "optic_DMS", "", 2600 },
			{ "optic_MRCO", "", 1600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
		};
    };
	
    class cop_sergeant {
        name = "Polizeivorstand";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 8, "Du benötigst einen höheren Rang!" };
        items[] = {
            { "hgun_P07_snds_F", "Projektor", 200, 150 },
            { "arifle_MX_Black_F", "", 200, 150 },
            { "arifle_MXM_Black_F", "", 200, 150 },
            { "arifle_MX_SW_F", "", 200, 150 },
            { "arifle_MX_SW_Black_F", "", 200, 150 },
            { "arifle_MXC_F", "", 200, 150 },
            { "arifle_MXC_Black_F", "", 200, 150 },
            { "arifle_MX_F", "", 200, 150 },
            { "arifle_MXM_F", "", 200, 150 },
            { "arifle_Katiba_F", "", 200, 150 },
            { "arifle_Katiba_C_F", "", 200, 150 },
            { "LMG_Mk200_F", "", 200, 150 },
            { "LMG_Zafir_F", "", 200, 150 },
            { "srifle_LRR_F", "", 200, 150 },
            { "MMG_01_hex_F", "", 200, 150 },
            { "MMG_01_tan_F", "", 200, 150 },
            { "srifle_LRR_camo_F", "", 200, 150 },
            { "srifle_GM6_F", "", 200, 150 },
            { "srifle_GM6_camo_F", "", 200, 150 },
            { "MMG_02_black_F", "", 200, 150 },
            { "MMG_02_camo_F", "", 200, 150 },
            { "MMG_02_sand_F", "", 200, 150 },
			{ "HandGrenade_Stone", "Flashbang", 1700, -1 },
			{ "SmokeShellYellow", "GieftGass", 1700, -1 }
        };
        mags[] = {
            { "130Rnd_338_Mag", "", 130 },
            { "5Rnd_127x108_APDS_Mag", "", 130 },
            { "5Rnd_127x108_Mag", "", 130 },
            { "150Rnd_93x64_Mag", "", 130 },
            { "7Rnd_408_Mag", "", 130 },
            { "150Rnd_762x54_Box", "", 130 },
            { "200Rnd_65x39_cased_Box", "", 130 },
            { "30Rnd_65x39_caseless_mag", "30er Mags", 45 },
			{ "30Rnd_65x39_caseless_green", "", 130 },
            { "100Rnd_65x39_caseless_mag", "", 130 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "30Rnd_9x21_Mag", "", 250 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 }, 	
			{ "acc_flashlight", "", 2600 },
			{ "acc_pointer_IR", "", 1600 },
			{ "optic_Arco", "", 1600 },
			{ "optic_SOS", "", 1600 },
			{ "optic_Hamr_khk_F", "", 1600 },
			{ "optic_DMS_ghex_F", "", 1600 },
			{ "optic_Hamr", "", 1600 },
			{ "optic_LRPS", "", 1600 },
			{ "optic_DMS", "", 2600 },
			{ "optic_MRCO", "", 1600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
		};
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 150, 65 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
};
