/* Derivate of elmos's firmware for friedrich >> kb-elmo<mail@elmo.space>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

#define ____ KC_NO

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define LAYOUT( \
	k00, k10, k01, k11, k20, k30, k21, k31, k40, k50, k54,  \
	k02, k12, k03, k13, k22, k32, k23, k33, k42, k52,    \
	k04, k14, k05, k15, k24, k34, k25, k35, k44,\
	k41, k51, k43, k53, k45, k55           \
) { \
    { k00, k01, k02, k03, k04, k05 }, \
    { k10, k11, k12, k13, k14, k15 }, \
    { k20, k21, k22, k23, k24, k25 }, \
    { k30, k31, k32, k33, k34, k35 }, \
	{ k40, k41, k42, k43, k44, k45 }, \
	{ k50, k51, k52, k53, k54, k55 } \
}

/*
#define LAYOUT( \
	k001, k002, k003, k004, k005, k006, k007, k008, k009, k010, k011,  \
	k101, k102, k103, k104, k105, k106, k107, k108, k109, k110,    \
	k201, k202, k203, k204, k205, k206, k207, k208, k209,\
	k301, k302, k303, k304, k305, k306           \
) { \
    { k001, k002, k005, k006, k009, k010 }, \
    { k003, k004, k007, k008, k301, k302 }, \
    { k101, k102, k105, k106, k109, k110 }, \
    { k103, k104, k107, k108, k303, k304 }, \
	{ k201, k202, k205, k206, k209, k011 }, \
	{ k203, k204, k207, k208, k305, k306 } \
}
*/