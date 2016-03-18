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
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 30000, -1 },
            { "hgun_Pistol_heavy_02_F", "", 40000, -1 },
            { "hgun_ACPC2_F", "", 50000, -1 },
            { "hgun_PDW2000_F", "", 60000, -1 },
            { "SMG_01_F", "", 70000, -1 },
            { "SMG_02_F", "", 80000, -1 },
            { "arifle_Mk20_F", "", 250000, -1 },
            { "arifle_TRG21_F", "", 260000, -1 },
            { "arifle_Katiba_F", "", 340000, -1 },
            { "arifle_Katiba_C_F", "", 350000, -1 },
            { "arifle_MX_Black_F", "", 380000, -1 },
            { "arifle_MXC_F", "", 400000, -1 },
            { "arifle_MXC_Black_F", "", 400000, -1 },
            { "arifle_MXM_Black_F", "", 440000, -1 },
            { "arifle_MX_SW_F", "", 480000, -1 },
            { "srifle_DMR_01_F", "", 500000, -1 },
            { "srifle_DMR_03_F", "", 530000, -1 },
            { "srifle_DMR_03_khaki_F", "", 530000, -1 },
            { "srifle_DMR_03_tan_F", "", 530000, -1 },
            { "srifle_DMR_03_multicam_F", "", 530000, -1 },
            { "srifle_DMR_03_woodland_F", "", 530000, -1 },
            { "srifle_EBR_F", "", 520000, -1 },
            { "LMG_Mk200_F", "", 550000, -1 },
            { "LMG_Zafir_F", "", 550000, -1 },
            { "srifle_DMR_06_camo_F", "", 580000, -1 },
            { "srifle_DMR_06_olive_F", "", 580000, -1 },
            { "srifle_DMR_05_blk_F", "", 1000000, -1 },
            { "srifle_DMR_05_hex_F", "", 1000000, -1 },
            { "srifle_DMR_05_tan_f", "", 1000000, -1},
            { "srifle_DMR_02_F", "", 1000000, -1 },
            { "srifle_DMR_02_camo_F", "", 1000000, -1 },
            { "srifle_DMR_02_sniper_F", "", 1000000, -1 },
            { "srifle_DMR_04_F", "", 1500000, -1 },
            { "srifle_DMR_04_Tan_F", "", 1500000, -1 }
        };
        mags[] = {
             { "16Rnd_9x21_Mag", "", 500 },
            { "11Rnd_45ACP_Mag", "", 500 },
            { "6Rnd_45ACP_Cylinder", "", 700 },
            { "9Rnd_45ACP_Mag", "", 800 },
            { "30Rnd_9x21_Mag", "", 1000 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 1200 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 1200 },
            { "30Rnd_9x21_Mag", "", 1000 },
            { "10Rnd_762x54_Mag", "", 1000 },
            { "200Rnd_65x39_cased_Box", "", 2500 },
            { "200Rnd_65x39_cased_Box_Tracer", "", 2500 },
            { "30Rnd_65x39_caseless_green", "", 2000 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 2000 },
            { "30Rnd_556x45_Stanag", "", 2000 },
            { "30Rnd_65x39_caseless_mag", "", 2000 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 2000 },
            { "100Rnd_65x39_caseless_mag_Tracer", "", 2250 },
            { "100Rnd_65x39_caseless_mag", "", 2250 },
            { "30Rnd_65x39_caseless_mag", "", 1500 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 1500 },
            { "10Rnd_338_Mag", "", 1600 },
            { "10Rnd_127x54_Mag", "", 1800 },
            { "150Rnd_762x54_Box", "", 3500 },
            { "150Rnd_762x54_Box_Tracer", "", 3500},
            { "20Rnd_762x51_Mag", "", 3000 },
            { "10Rnd_93x64_DMR_05_Mag", "", 3000 }
        };
        accs[] = {
            { "optic_Hamr", "", 2000, -1 },
            { "optic_Holosight_smg", "", 2000, -1 },
            { "optic_Arco", "", 8000, -1 },
            { "optic_ACO_grn_smg", "", 8000, -1 },
            { "optic_MRCO", "", 8000, -1 },
            { "optic_SOS", "", 20000, -1 },
            { "optic_DMS", "", 38000, -1 },
            { "optic_AMS", "", 95000, -1 },
            { "bipod_01_F_blk", "", 5000, -1 },
            { "bipod_01_F_mtp", "", 5000, '-1 },
            { "bipod_01_F_snd", "", 5000, -1 },
            { "bipod_01_F_tan", "", 5000, -1 }
        };
    };
    
    class Doador {
        name = "Loja de Armas";
        side = "civ";
        license = "donator";
        level[] = { "", "", -1, "" };
        items[] = {
             { "hgun_Rook40_F", "", 30000, -1 },
            { "hgun_Pistol_heavy_02_F", "", 40000, -1 },
            { "hgun_ACPC2_F", "", 50000, -1 },
            { "hgun_PDW2000_F", "", 60000, -1 },
            { "SMG_01_F", "", 70000, -1 },
            { "SMG_02_F", "", 80000, -1 },
            { "arifle_Mk20_F", "", 250000, -1 },
            { "arifle_TRG21_F", "", 260000, -1 },
            { "arifle_Katiba_F", "", 340000, -1 },
            { "arifle_Katiba_C_F", "", 350000, -1 },
            { "arifle_MX_Black_F", "", 380000, -1 },
            { "arifle_MXC_F", "", 400000, -1 },
            { "arifle_MXC_Black_F", "", 400000, -1 },
            { "arifle_MXM_Black_F", "", 440000, -1 },
            { "arifle_MX_SW_F", "", 480000, -1 },
            { "srifle_DMR_01_F", "", 500000, -1 },
            { "srifle_DMR_03_F", "", 530000, -1 },
            { "srifle_DMR_03_khaki_F", "", 530000, -1 },
            { "srifle_DMR_03_tan_F", "", 530000, -1 },
            { "srifle_DMR_03_multicam_F", "", 530000, -1 },
            { "srifle_DMR_03_woodland_F", "", 530000, -1 },
            { "srifle_EBR_F", "", 520000, -1 },
            { "LMG_Mk200_F", "", 550000, -1 },
            { "LMG_Zafir_F", "", 550000, -1 },
            { "srifle_DMR_06_camo_F", "", 580000, -1 },
            { "srifle_DMR_06_olive_F", "", 580000, -1 },
            { "srifle_DMR_05_blk_F", "", 1000000, -1 },
            { "srifle_DMR_05_hex_F", "", 1000000, -1 },
            { "srifle_DMR_05_tan_f", "", 1000000, -1},
            { "srifle_DMR_02_F", "", 1000000, -1 },
            { "srifle_DMR_02_camo_F", "", 1000000, -1 },
            { "srifle_DMR_02_sniper_F", "", 1000000, -1 },
            { "srifle_DMR_04_F", "", 1500000, -1 },
            { "srifle_DMR_04_Tan_F", "", 1500000, -1 }
        };
        mags[] = {
             { "16Rnd_9x21_Mag", "", 500 },
            { "11Rnd_45ACP_Mag", "", 500 },
            { "6Rnd_45ACP_Cylinder", "", 700 },
            { "9Rnd_45ACP_Mag", "", 800 },
            { "30Rnd_9x21_Mag", "", 1000 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 1200 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 1200 },
            { "30Rnd_9x21_Mag", "", 1000 },
            { "10Rnd_762x54_Mag", "", 1000 },
            { "200Rnd_65x39_cased_Box", "", 2500 },
            { "200Rnd_65x39_cased_Box_Tracer", "", 2500 },
            { "30Rnd_65x39_caseless_green", "", 2000 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 2000 },
            { "30Rnd_556x45_Stanag", "", 2000 },
            { "30Rnd_65x39_caseless_mag", "", 2000 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 2000 },
            { "100Rnd_65x39_caseless_mag_Tracer", "", 2250 },
            { "100Rnd_65x39_caseless_mag", "", 2250 },
            { "30Rnd_65x39_caseless_mag", "", 1500 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 1500 },
            { "10Rnd_338_Mag", "", 1600 },
            { "10Rnd_127x54_Mag", "", 1800 },
            { "150Rnd_762x54_Box", "", 3500 },
            { "150Rnd_762x54_Box_Tracer", "", 3500},
            { "20Rnd_762x51_Mag", "", 3000 },
            { "10Rnd_93x64_DMR_05_Mag", "", 3000 }
        };
        accs[] = {
            { "optic_Hamr", "", 2000, -1 },
            { "optic_Holosight_smg", "", 2000, -1 },
            { "optic_Arco", "", 8000, -1 },
            { "optic_ACO_grn_smg", "", 8000, -1 },
            { "optic_MRCO", "", 8000, -1 },
            { "optic_SOS", "", 20000, -1 },
            { "optic_DMS", "", 38000, -1 },
            { "optic_AMS", "", 95000, -1 },
            { "bipod_01_F_blk", "", 5000, -1 },
            { "bipod_01_F_mtp", "", 5000, '-1 },
            { "bipod_01_F_snd", "", 5000, -1 },
            { "bipod_01_F_tan", "", 5000, -1 }
        };
    };
            

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 }
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
            { "ToolKit", "", 250, 75 },
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
            { "ToolKit", "", 1250, 75 },
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
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "hgun_P07_F", "", 7500, 1500 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650 }
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
            { "arifle_MX_F", "", 35000, 7500 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "MineDetector", "", 1000, 500 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_9x21_Mag", "", 250 }
        };
        accs[] = {
            { "acc_flashlight", "", 750 },
            { "optic_Holosight", "", 1200 },
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100, -1 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
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
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 500, 450 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
};
