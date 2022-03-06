/* ----------------------------------------------------------------------------
Function: JSO_DRONE_PACKING_fnc_unpackDrone

Description:
	
  
Parameters:
	_dronetype - 
	_dronekit - 
	_player - 
	
Returns:
	Nothing

Example:
	call JSO_DRONE_PACKING_fnc_unpackDrone
---------------------------------------------------------------------------- */

params ["_dronetype", "_dronekit", "_player"];

private _animation = [] call JSO_DRONE_PACKING_fnc_getWeaponStanceState;

_player playMove _animation;
private _vehicle = createVehicle [_dronetype, player modelToWorld [0,2,0] , [], 0, "CAN_COLLIDE"]; 
createVehicleCrew _vehicle;
clearItemCargo _vehicle;
clearWeaponCargo _vehicle;
clearMagazineCargo _vehicle;
clearBackpackCargo _vehicle;
_player removeItem _dronekit;