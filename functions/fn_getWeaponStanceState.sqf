/* ----------------------------------------------------------------------------
Function: JSO_DRONE_PACKING_fnc_getWeaponStanceState

Description:
	
  
Parameters:
	_dronetype - 
	_dronekit - 
	_player - 
	
Returns:
	Nothing

Example:
	call JSO_DRONE_PACKING_fnc_getWeaponStanceState
---------------------------------------------------------------------------- */

if (currentWeapon player isKindOf ["rifle", configFile >> "CfgWeapons"]) then {
		switch (stance _player) do {
		case ("STAND"): {"AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"};
		case ("CROUCH"): {"AinvPknlMstpSrasWrflDnon_Putdown_AmovPknlMstpSrasWrflDnon"};
		case ("PRONE"): {"AinvPpneMstpSrasWrflDnon_Putdown_AmovPpneMstpSrasWrflDnon"};
		default {};
		};
	}
	
else {
	
	if (currentWeapon player isKindOf ["pistol", configFile >> "CfgWeapons"]) then {
		switch (stance _player) do {
		case ("STAND"): {"AinvPercMstpSrasWpstDnon_Putdown_AmovPercMstpSrasWpstDnon"};
		case ("CROUCH"): {"AinvPknlMstpSrasWpstDnon_Putdown_AmovPknlMstpSrasWpstDnon"};
		case ("PRONE"): {"AinvPpneMstpSrasWpstDnon_Putdown_AmovPpneMstpSrasWpstDnon"};
		default {};
		};
	}
	
	else {
			
		if (currentWeapon player isKindOf ["launcher", configFile >> "CfgWeapons"]) then {
			switch (stance _player) do {
			case ("STAND"): {"AinvPercMstpSrasWlnrDnon_Putdown_AmovPercMstpSrasWlnrDnon"};
			case ("CROUCH"): {"AinvPknlMstpSrasWlnrDnon_Putdown_AmovPknlMstpSrasWlnrDnon"};
			case ("PRONE"): {"AinvPpneMstpSnonWnonDnon_Putdown_AmovPpneMstpSnonWnonDnon"};
			default {};
			}
		}
	
		else {
			switch (stance _player) do {
			case ("STAND"): {"AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"};
			case ("CROUCH"): {"AinvPknlMstpSnonWnonDnon_Putdown_AmovPknlMstpSnonWnonDnon"};
			case ("PRONE"): {"AinvPpneMstpSnonWnonDnon_Putdown_AmovPpneMstpSnonWnonDnon"};
			default {};
			}
		}
	}
};