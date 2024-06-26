/* Copyright 2024 Juarendra Ramadhani <jrjuarendra@gmail.com>
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
//#define NO_ACTION_ONESHOT

#ifdef OLED_ENABLE

static void render_logo_numpad(void) {
    static const char PROGMEM numpad[] = {
	0x00, 0x00, 0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfc, 0x3e, 0x3e, 0x3e, 0x3f, 0xff, 0x3f, 0x3f, 
	0x3f, 0x3f, 0xff, 0x3f, 0x3e, 0x3e, 0x3e, 0xfc, 0xfc, 0xf8, 0xf0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 
	0xf0, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x84, 0xa5, 0x84, 0x84, 0xff, 0x84, 0xa5, 
	0xa5, 0x84, 0xff, 0x8c, 0x84, 0xa5, 0x84, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf0, 
	0x0f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xe5, 0xe1, 0xe1, 0xff, 0x21, 0xa5, 
	0xa5, 0x21, 0xff, 0xe1, 0xe1, 0xe5, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x0f, 
	0x00, 0x00, 0x01, 0x03, 0x07, 0x0f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xfc, 0xfc, 
	0xfc, 0xfc, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x0f, 0x07, 0x03, 0x01, 0x00, 0x00
};

    oled_write_raw_P(numpad, sizeof(numpad));
}

static void render_logo_ps(void) {
    static const char PROGMEM ps[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 
	0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x07, 0xf7, 0xf7, 0x67, 0x07, 
	0x0f, 0xff, 0x3f, 0x1f, 0x9f, 0x9f, 0x9f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xe0, 0xfe, 0xfe, 0xfe, 0xfe, 
	0xff, 0xff, 0xf6, 0xe6, 0xe4, 0xe0, 0xf1, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00
};

    oled_write_raw_P(ps, sizeof(ps));
}

static void render_logo_ai(void) {
    static const char PROGMEM ai[] = {
	0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
	0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x0f, 0x87, 0xe7, 0x07, 
	0x3f, 0xff, 0xff, 0xff, 0x37, 0x27, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xe0, 0xfc, 0xfd, 0xfd, 0xfd, 
	0xf0, 0xe1, 0xef, 0xff, 0xe0, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00
};

    oled_write_raw_P(ai, sizeof(ai));
}

static void render_logo_lr(void) {
    static const char PROGMEM lr[] = {
	0x00, 0xe0, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0x7e, 0x7e, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
	0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xe0, 0x00, 
	0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x07, 0x07, 0xe7, 0xe7, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
	0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xc0, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 
	0xef, 0xff, 0xff, 0xc0, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
	0x00, 0x03, 0x0f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 
	0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1f, 0x0f, 0x03, 0x00
};
    oled_write_raw_P(lr, sizeof(lr));
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_set_cursor(0,1);
        oled_write("LIA", false);
        oled_set_cursor(0,2);
        oled_write("NUM-", false);
        oled_set_cursor(0,3);
        oled_write("PAD", false);
        oled_set_cursor(0,5);
        oled_write("Layer", false);
        oled_set_cursor(0,7);
        
        switch (get_highest_layer(layer_state)) {
            case 0: 
                oled_write("  0", false);
                oled_set_cursor(0,9);
                render_logo_numpad();
                break;
            case 1: 
                oled_write("  1", false);
                oled_set_cursor(0,9);
                render_logo_ps();
                break;
            case 2:
                oled_write("  2", false);
                oled_set_cursor(0,9);
                render_logo_ai();
                break;
            case 3:
                oled_write("  3", false);
                oled_set_cursor(0,9);
                render_logo_lr();
                break;
            default:
                oled_write("  0", false);
                oled_set_cursor(0,9);
                render_logo_numpad();
        }
    }
    return false;
}

#endif
