#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:U_C_Commoner1_3
    Sets skins for players by their side and uniform.
*/
private["_skinName"];

switch (playerSide) do {
    case civilian: {
	        if (uniform player == "U_C_Poloshirt_stripped") then {
	        player setObjectTextureGlobal [0,"textures\civ\man\HDTeam.paa"];
	    };
	        if (uniform player == "U_C_Commoner1_3") then {
	        player setObjectTextureGlobal [0,"textures\civ\man\paws.paa"];
	    };
    };

    case west: {
        if (uniform player isEqualTo "U_B_CombatUniform_mcam_tshirt") then {
            player setObjectTextureGlobal [0, "textures\cop\human\polizei_uniform.paa"];
			(unitBackpack player) setObjectTextureGlobal [0, ""];
        };
        if (uniform player isEqualTo "U_B_CombatUniform_mcam") then {
            player setObjectTextureGlobal [0, "textures\cop\human\polizei_uniform.paa"];
			(unitBackpack player) setObjectTextureGlobal [0, ""];
        };
        if ((uniform player isEqualTo "U_B_CombatUniform_mcam_vest")) then {
        player setObjectTextureGlobal [0, "textures\cop\human\sek.paa"];
       	};
        if ((uniform player isEqualTo "U_B_CombatUniform_mcam_worn")) then {
        player setObjectTextureGlobal [0, "textures\cop\human\prasen.paa"];
       	};
        if (((call life_coplevel) == 1) && (uniform player isEqualTo "U_Rangemaster")) then {
        player setObjectTextureGlobal [0, "textures\cop\human\A1.paa"];
        };
        if (((call life_coplevel) == 2) && (uniform player isEqualTo "U_Rangemaster")) then {
        player setObjectTextureGlobal [0, "textures\cop\human\A1.paa"];
        };
        if (((call life_coplevel) == 3) && (uniform player isEqualTo "U_Rangemaster")) then {
        player setObjectTextureGlobal [0, "textures\cop\human\A1.paa"];
        };
        if (((call life_coplevel) == 4) && (uniform player isEqualTo "U_Rangemaster")) then {
        player setObjectTextureGlobal [0, "textures\cop\human\A2.paa"];
        };
        if (((call life_coplevel) == 5) && (uniform player isEqualTo "U_Rangemaster")) then {
        player setObjectTextureGlobal [0, "textures\cop\human\A2.paa"];
        };
        if (((call life_coplevel) == 6) && (uniform player isEqualTo "U_Rangemaster")) then {
        player setObjectTextureGlobal [0, "textures\cop\human\A2.paa"];
        };
        if (((call life_coplevel) == 7) && (uniform player isEqualTo "U_Rangemaster")) then {
        player setObjectTextureGlobal [0, "textures\cop\human\A3.paa"];
        };
        if (((call life_coplevel) == 8) && (uniform player isEqualTo "U_Rangemaster")) then {
        player setObjectTextureGlobal [0, "textures\cop\human\A3.paa"];
        };
        if (backpack player == "B_Carryall_cbr") then {
        (backpackContainer player) setObjectTextureGlobal[0,""];
        };
	};

    case independent: {
        if (uniform player isEqualTo "U_Rangemaster") then {
            player setObjectTextureGlobal [0, "textures\medic_uniform.jpg"];
			(unitBackpack player) setObjectTextureGlobal [0, ""];
        };
        if (uniform player isEqualTo "U_B_CombatUniform_mcam") then {
            player setObjectTextureGlobal [0, "textures\med\Medic.paa"];
			(unitBackpack player) setObjectTextureGlobal [0, ""];
        };
    };
};
