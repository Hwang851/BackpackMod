// Matthew Longtime
class CfgPatches
{
	class TGGc_Billboard_New
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Structures_Signs"
		};
	};
};
// Change these below if you change the p3d name or folder name
class CfgVehicles
{
	class HouseNoDestruct;
	class TGGc_Billboard_1: HouseNoDestruct
	{
		scope=2;
		model="\TGGc_Billboards2\TGGc_Billboard_1.p3d";
	};
};
