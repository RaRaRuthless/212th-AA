class CfgPatches {
	class sci_dc19x {
		author = "Dutch";
		units[] = {};
		weapons[] = {
			"SCI_dc19x"
		};
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"sci_weaponsMain"
		};
	};
};
class CfgMagazines {
	class 7Rnd_408_Mag;
	class SCI_5rnd_dc19x_mag: 7Rnd_408_Mag {
		displayName = "DC19X 5 Round Charge Cell";
		model = "\sci_ee2\ee2_mag.p3d";
    mass = 10;
    count = 5;
    tracersEvery = 1;
    lastRoundTracer = 5;
    picture = "\sci_weaponsMain\Data\Energy_Cell_Arsenal.paa";
    ammo = "SCI_DC19x_Plasma";
	};
};
class CfgAmmo
{
	class B_127x108_Ball;
	class SCI_DC19x_Plasma: B_127x108_Ball
  timeToLive=10;
  model = "sci_weaponsMain\Data\tracer_blue.p3d";
  tracerScale = 2;
  };
};
class Mode_SemiAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons {
	class srifle_LRR_LRPS_F;
	class SRifle_Base_F: srifle_LRR_LRPS_F {
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class SCI_dc19x: SRifle_Base_F {
		author = "Dutch";
		displayName = "[SCI] DC-19x Heavy Sniper";
		scope = 2;
		model = "\sci_dc19x\dc19x.p3d";
		picture = "";
		hiddenSelections[] = {"glow","glow_mag","camo1"};
		hiddenSelectionsTextures[] = {"\SCI_ee2\data\ee2_co.paa","\SCI_ee2\data\ee2_mag_co.paa","\SCI_ee2\data\ee2_co.paa"};
		hiddenSelectionsMaterials[] = {
			"a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
			"a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\LongRangeRifles\GM6\Data\Anim\GM6.rtm"};
		magazines[] = {"SCI_5rnd_dc19x_mag"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\TOP";
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=50;
		distanceZoomMax=50;
		descriptionShort="DC-19x, Be sure to aim before you fire.";
		dexterity=1.5;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		selectionFireAnim="zasleh";
		flash="gunfire";
		flashSize=0.5;
		fireLightIntensity=0.02;
		fireLightDuration=0.050000001;
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"sci_weaponsMain\Sound\Sniper2.wss",
					1,
					1,
					500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.5;
			dispersion=0.00029;
			minRange=1;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.57999998;
			maxRange=500;
			maxRangeProbab=0.039999999;
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=6;
		drySound[]=
		{
			"sci_weaponsMain\Sound\blaster_S_empty.wss",
			2,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"sci_weaponsMain\Sound\blaster_S_reload.wss",
			1,
			1,
			30
		};
		reloadSound[]=
		{
			"Blaster_S_Reload",
			1,
			1
		};
	};
	};
};
