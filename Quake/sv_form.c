/*

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/
// sv_form.c

#include "quakedef.h"

/*
creates offset destinations based on tactical formations.
*/

/*
================
SV_Form_Index - Redundant idea
================

void SV_Form_Index(team, squad, squadnumber)
{
	int formation, teamindex, squadindex; 
	//store teams, squads in a struct
	//assign a teamindex, squadindex to the team or squad if new
	formation = teamindex * 10000 + squadindex * 100 + squadnumber; //populate variable field for each entity aabbcc aa team bb squad cc squadnumber

}
*/

/*
================
SV_Form
================
*/

void SV_Form(edict_t *actor, edict_t *next, float form)
{
	vec3_t offset;
	
	//form 0 straight, 1 left, 2 right
	//positions 0,1,2,3...
	if (form == 0)
	{
		//follow like string, offset 96 * squadnumber
		//who is previous in line? - pass in
		
		//find vector between current entity and previous in line

		//direct v.ideal_yaw towards previous in line

		//offset in ideal and transverse directions

		//transform offset into grid coordinates

		//apply offset to actor->v.dest coordinates actor->v.dest[0] = 0;
		
	}
	else if (form == 1)
	{
		//same as form 0, but even numbers offset 48 left
	}
	else
	{
		//same as form 0, but even numbers offset 48 right
	}
}