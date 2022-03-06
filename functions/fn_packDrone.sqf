/* ----------------------------------------------------------------------------
Function: JSO_DRONE_PACKING_fnc_packDrone

Description:
	
  
Parameters:
	_dronekit - 
	_player - 
	_target -
	
Returns:
	Nothing

Example:
	call JSO_DRONE_PACKING_fnc_packDrone
---------------------------------------------------------------------------- */

params ["_dronekit", "_player", "_target"];

if (count ((getItemCargo _target) select 0) > 0 || count ((getBackpackCargo _target) select 0) > 0 || count ((getWeaponCargo _target) select 0) > 0 || count ((getMagazineCargo _target) select 0) > 0) exitWith {  
 hint "Cannot pack: Drone cargo must be empty";     
};

private _animation = [] call JSO_DRONE_PACKING_fnc_getWeaponStanceState;

_player playMove _animation;
createVehicle [_dronekit, position _target, [], 0, 'CAN_COLLIDE']; 
deleteVehicle _target;