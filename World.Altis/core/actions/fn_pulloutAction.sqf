/*	
File: fn_pulloutAction.sqf
Author: Bryan "Tonic"
Boardwine	Description:	Pulls civilians out of a car if it's stopped.
*/
private["_crew"];
_crew = crew cursorTarget;
{
if(side _x == west OR side _x == civilian ) then {
	_x setVariable ["transporting",false,true];
	_x SVAR ["Escorting",false,true];
	[_x] remoteExecCall ["life_fnc_pulloutVeh",_x];
};
}forEach _crew;
