/*

Copyright (C) 2015-2018 Night Dive Studios, LLC.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/
#ifndef __HKEYFUNC_H
#define __HKEYFUNC_H

/*
 * $Source: n:/project/cit/src/inc/RCS/hkeyfunc.h $
 * $Revision: 1.24 $
 * $Author: dc $
 * $Date: 1994/01/16 05:22:46 $
 *
 * $Log: hkeyfunc.h $
 * Revision 1.24  1994/01/16  05:22:46  dc
 * inp6d
 *
 * Revision 1.23  1994/01/12  11:43:37  xemu
 * cutpaste mode
 *
 * Revision 1.22  1993/09/09  03:22:31  dc
 * bkpt_me
 *
 * Revision 1.21  1993/09/02  23:07:44  xemu
 * angle me baby
 *
 * Revision 1.20  1993/08/24  12:21:10  xemu
 * sfx toggle
 *
 * Revision 1.19  1993/07/13  00:45:52  spaz
 * killed newmfd.h dependency
 *
 * Revision 1.18  1993/07/12  01:59:27  spaz
 * #ifdef's to distinguish between old and new mfd systems,
 * which are still coexisting. (ugh)
 *
 * Revision 1.17  1993/07/08  14:49:27  xemu
 * physics_toggle
 *
 * Revision 1.16  1993/06/24  20:25:28  mahk
 * Added bitsmode
 *
 * Revision 1.15  1993/06/16  18:25:48  xemu
 * really_quit and edit_flag
 *
 * Revision 1.14  1993/06/16  16:21:05  mahk
 * Added new level data
 *
 * Revision 1.13  1993/06/16  15:52:39  xemu
 * mono functions
 *
 * Revision 1.12  1993/06/14  15:36:51  xemu
 * music_stop
 *
 * Revision 1.11  1993/06/04  17:16:53  xemu
 * music hotkey
 *
 * Revision 1.10  1993/06/01  19:48:26  xemu
 * esc hotkey func added
 *
 * Revision 1.9  1993/05/25  00:00:37  xemu
 * slewing and view zoom
 *
 * Revision 1.8  1993/05/24  15:19:56  xemu
 * combined loop switchers
 *
 * Revision 1.7  1993/05/23  16:35:22  xemu
 * find_func, pallete_mode
 *
 * Revision 1.6  1993/05/21  17:45:34  xemu
 * eyeball_mode
 *
 * Revision 1.5  1993/05/20  20:58:43  xemu
 * control_panel_func
 *
 * Revision 1.4  1993/05/20  09:01:17  mahk
 * Added tilemap resize & move.  Implemented a currently somewhat broken version of
 * the 3d toggle button.  Added tilemap cursor.
 *
 * Revision 1.3  1993/05/19  17:12:57  xemu
 * added a bazillion stubs
 *
 * Revision 1.2  1993/05/18  14:58:02  mahk
 * Added zooming and debuggin functions.
 *
 * Revision 1.1  1993/05/14  15:46:27  xemu
 * Initial revision
 *
 *
 */

// Includes

// C Library Includes

// System Library Includes

// Master Game Includes

// Game Library Includes

// Game Object Includes

// Defines

#define ZOOM_IN  0
#define ZOOM_OUT 1

#define TERRAIN_MODE   0
#define TEXTURING_MODE 1
#define OBJECT_MODE    2
#define EYEBALL_MODE   3
#define MUSIC_MODE     4
#define BITS_MODE      5
#define CUTPASTE_MODE  6

#define POKE_MODE       0
#define PAINT_MODE      1
#define RUBBERBAND_MODE 2

// Prototypes
uchar quit_key_func(ushort keycode, uint32_t context, intptr_t data);
uchar really_quit_key_func(ushort keycode, uint32_t context, intptr_t data);
uchar change_mode_func(ushort keycode, uint32_t context, intptr_t data);
uchar toggle_time_func(ushort keycode, uint32_t context, intptr_t data);
uchar do_popup_textmenu(ushort keycode, uint32_t context, intptr_t g);
uchar mono_config_func(ushort keycode, uint32_t context, intptr_t data);
uchar zoom_func(ushort keycode, uint32_t context, intptr_t data);
uchar load_level_func(ushort keycode, uint32_t context, intptr_t data);
uchar save_level_func(ushort keycode, uint32_t context, intptr_t data);
uchar run_intro_func(ushort keycode, uint32_t context, intptr_t data);
uchar toggle_3d_func(ushort keycode, uint32_t context, intptr_t data);
uchar texture_selection_func(ushort keycode, uint32_t context, intptr_t data);
uchar tilemap_mode_func(ushort keycode, uint32_t context, intptr_t data);
uchar draw_mode_func(ushort keycode, uint32_t context, intptr_t data);
uchar clear_highlight_func(ushort keycode, uint32_t context, intptr_t data);
uchar lighting_func(ushort keycode, uint32_t context, intptr_t data);
uchar inp6d_panel_func(ushort keycode, uint32_t context, intptr_t data);
uchar render_panel_func(ushort keycode, uint32_t context, intptr_t data);
uchar bkpt_me(ushort keycode, uint32_t context, intptr_t data);
uchar popup_tilemap_func(ushort keycode, uint32_t context, intptr_t data);
uchar editor_options_func(ushort keycode, uint32_t context, intptr_t data);
uchar editor_modes_func(ushort keycode, uint32_t context, intptr_t data);
uchar misc_menu_func(ushort keycode, uint32_t context, intptr_t data);
uchar control_panel_func(ushort keycode, uint32_t context, intptr_t data);
uchar do_find_func(ushort keycode, uint32_t context, intptr_t data);
uchar stupid_slew_func(ushort keycode, uint32_t context, intptr_t data);
uchar zoom_3d_func(ushort keycode, uint32_t context, intptr_t data);
uchar menu_close_func(ushort keycode, uint32_t context, intptr_t data);
void start_music(void);
void stop_music(void);
uchar toggle_music_func(ushort, uint32_t, intptr_t);
uchar mono_clear_func(ushort keycode, uint32_t context, intptr_t data);
uchar edit_flags_func(ushort keycode, uint32_t context, intptr_t data);
uchar mono_toggle_func(ushort keycode, uint32_t context, intptr_t data);
uchar new_level_func(ushort keycode, uint32_t context, intptr_t data);
uchar toggle_physics_func(ushort keycode, uint32_t context, intptr_t data);
uchar toggle_giveall_func(ushort keycode, uint32_t context, intptr_t data);
uchar toggle_up_level_func(ushort keycode, uint32_t context, intptr_t data);
uchar toggle_down_level_func(ushort keycode, uint32_t context, intptr_t data);
uchar toggle_sfx_func(ushort keycode, uint32_t context, intptr_t data);

uchar save_hotkey_func(ushort, uint32_t, intptr_t);
uchar pause_game_func(ushort, uint32_t, intptr_t);
uchar clear_fullscreen_func(ushort keycode, uint32_t context, intptr_t data);
uchar arm_grenade_hotkey(ushort keycode, uint32_t context, intptr_t data);
uchar select_grenade_hotkey(ushort keycode, uint32_t context, intptr_t data);
uchar select_drug_hotkey(ushort keycode, uint32_t context, intptr_t data);
uchar use_drug_hotkey(ushort keycode, uint32_t context, intptr_t data);

uchar toggle_mouse_look(ushort keycode, uint32_t context, intptr_t data);

uchar quick_use(ushort keycode, uint32_t context, intptr_t data);

// uchar (ushort keycode, uint32_t context, intptr_t data);

// Globals

// Unused?
extern int current_palette_mode;

#endif // __HKEYFUNC_H
