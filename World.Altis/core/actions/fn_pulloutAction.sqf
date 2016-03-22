#include "..\..\script_macros.hpp"
/*
	File: fn_pulloutAction.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Pulls civilians out of a car if it's stopped.
*/
/private["_crew"];
_crew = crew cursorTarget;
{
if(Side == west OR side _x == civilian || _x getVariable["restrained",false]) then {
	_x setVariable ["transporting",false,true];
	_x setVariable ["Escorting",false,true];
	[[_x],"life_fnc_pulloutVeh",_x,false] spawn life_fnc_MP;
	};
	} foreach _crew;
