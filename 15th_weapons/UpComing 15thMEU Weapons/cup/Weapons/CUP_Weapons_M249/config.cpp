
class CfgPatches
{
	class CUP_Weapons_M249
	{
		units[] = {};
		weapons[] = {"CUP_lmg_M249_para","CUP_lmg_M249"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore"};
		magazines[] = {"MEU_200Rnd_M249_556x45_Stanag","MEU_200Rnd_M249_556x45_T_Stanag"};	
	};
};
class CfgAmmo
{
	class B_556x45_Ball;
	class B_556x45_Ball_Tracer_Red;
	class B_MEU_M855a1_SAW: B_556x45_Ball 
	{
		hit=8.4;
		typicalSpeed=960;
		caliber = 0.855;
		airFriction = -0.0011336614;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		deflecting=20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire=15;
		visibleFireTime=15;
		audibleFire=5;
		audibleFireTime=5;
	};
	class B_MEU_M8556_SAW: B_556x45_Ball_Tracer_Red 
	{
		hit=8.4;
		typicalSpeed=960;
		caliber = 0.855;
		airFriction = -0.0011336614;
		deflecting=20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire=15;
		visibleFireTime=15;
		audibleFire=5;
		audibleFireTime=5;
		tracerendtime = 1.4;
		tracerscale = 1;
		tracerstarttime = 0.06;
	};
};
class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class 30Rnd_556x45_Stanag_Tracer_Red;
	class MEU_200Rnd_M249_556x45_Stanag: 30Rnd_556x45_Stanag
	{
		scope = 2;
		mass = 56;
		ammo = "B_MEU_M855a1_SAW";
		count = 200;
        	descriptionshort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 200<br />Used in: M249";
        	displayname = "M855A1 Linked";
		picture = "\CUP\Weapons\CUP_Weapons_M249\data\ui\m_200LMG_ca.paa";
        	initspeed = 960;
        	lastroundstracer = 5;
		tracersevery = 5;
	};
	class MEU_200Rnd_M249_556x45_T_Stanag: 30Rnd_556x45_Stanag_Tracer_Red
	{
		scope = 2;
		mass = 56;
       		ammo = "B_MEU_M8556_SAW";
		count = 200;
        	descriptionshort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 200 Tracer<br />Used in: M249";
       	 	displayname = "M856 Linked";
		picture = "\CUP\Weapons\CUP_Weapons_M249\data\ui\m_200LMG_red_ca.paa";
       		 initspeed = 960;
       	 	lastroundstracer = 4;
		tracersevery = 1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class CUP_lmg_M249_para: Rifle_Long_Base_F
	{
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.5011872,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.5011872,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.5011872,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.5011872,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.39810717,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.39810717,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.39810717,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.39810717,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.25118864,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.25118864,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.25118864,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.25118864,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		scope = 2;
		selectionFireAnim = "muzzleFlash";
		model = "\CUP\Weapons\CUP_Weapons_M249\CUP_M249.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_M249\data\ui\gear_m249para_X_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		displayName = "M249 Para";
		class Library
		{
			libTextDesc = "Shooty thing";
		};
	AGM_Bipod = 1;
    AGM_Jamming_Reliability = 0.001;    // malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.013;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.009;   // How fast the weapon cools down every second.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_Overheating_allowSwapBarrel = 1;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
		descriptionShort = "M249 Para";
		cursor = "mg";
		cursorAim = "EmptyCursor";
		inertia = 0.7;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 165.8;
			class CUP_PicatinnyTopMountM249: CUP_PicatinnyTopMount{};
			class CUP_PicatinnySideMountM249: CUP_PicatinnySideMount{};
			class CowsSlot{};
			class PointerSlot{};
			class MuzzleSlot{};
		};
		modes[] = {"manual","close","short","medium","far"};
		class manual: Mode_FullAuto
		{
	    	recoil = "recoil_auto_machinegun_7outof10";
	    	recoilprone = "recoil_auto_machinegun_prone_4outof10";
			dispersion = 0.0032;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7",1.1220185,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8",1.1220185,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"CUP\Weapons\CUP_Weapons_M249\data\sfx\M249_s1",1.4,1,1200};
				begin2[] = {"CUP\Weapons\CUP_Weapons_M249\data\sfx\M249_s2",1.4,1,1200};
				begin3[] = {"CUP\Weapons\CUP_Weapons_M249\data\sfx\M249_s3",1.4,1,1200};
				begin4[] = {"CUP\Weapons\CUP_Weapons_M249\data\sfx\M249_s4",1.4,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25",0.8912509,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26",0.8912509,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			reloadTime = 0.0799999;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 12;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 16;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 900;
			maxRangeProbab = 0.01;
		};
		aiDispersionCoefY = 21;
		aiDispersionCoefX = 21;
		reloadAction = "GestureReloadM200";
		magazineReloadTime = 6;
		dexterity = 0.51;
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_M249\data\sfx\Reload",1,1,35};
		drySound[] = {"CUP\Weapons\CUP_Weapons_M249\data\sfx\Dry",1,1,35};
		magazines[] = {"MEU_30Rnd_M855A1_556x45_Stanag","MEU_30Rnd_M855A1_556x45_T_Stanag","MEU_200Rnd_M249_556x45_Stanag","MEU_200Rnd_M249_556x45_T_Stanag"};
	};
	class CUP_lmg_M249: CUP_lmg_M249_para
	{
		model = "\CUP\Weapons\CUP_Weapons_M249\CUP_M249_iron.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_M249\data\ui\gear_m249_X_ca.paa";
		displayName = "M249";
	};
};
