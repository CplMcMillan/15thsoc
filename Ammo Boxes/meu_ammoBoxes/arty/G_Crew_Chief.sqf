// REVISION 27OCT14

//Delta Company, Commander Loadout

 _unit = _this select 1;
 
 if (!local _unit) exitWith {};

 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;
 _unit addvest "V_mas_mar_PlateCarrier1_rgr_d";
 _unit addheadgear "H_HelmetCrew_I";

 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";

 _unit additem "NVGoggles_OPFOR";
 _unit assignItem "NVGoggles_OPFOR";

 _unit additem "itemGPS";
 _unit assignitem "itemGPS";

 _unit additem "itemMap";
 _unit assignitem "itemMap";
 
 _unit additem "itemCompass";
 _unit assignitem "itemCompass";
 
 _unit additem "itemRadio";
 _unit additem "itemRadio";
 _unit assignitem "itemRadio";

 _unit addbackpack "tf_rt1523g";

 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 
 _unit addweapon "M4Car";
 _unit addPrimaryWeaponItem "FHQ_optic_AIM";
 _unit addPrimaryWeaponItem "acc_pointer_IR";

 _unit addmagazine "M882_9mm";
 _unit addmagazine "M882_9mm";

 _unit addweapon "hgun_mas_m9_F";

 _unit addweapon "Rangefinder";
 _unit assignitem "Rangefinder";

 _unit addmagazine "SmokeShell"; 
 _unit addmagazine "SmokeShell"; 
 _unit addmagazine "SmokeShell"; 
 _unit addmagazine "SmokeShell"; 
 _unit addmagazine "SmokeShell"; 
 _unit addmagazine "SmokeShell";  
 _unit addmagazine "SmokeShellBlue";
 _unit addmagazine "SmokeShellRed";
 _unit addmagazine "SmokeShellRed";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "SmokeShellGreen";
 _unit additem "AGM_EarBuds";

 _unit adduniform "U_mas_mar_B_CombatUniform_veg";
