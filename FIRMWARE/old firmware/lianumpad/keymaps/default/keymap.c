#include QMK_KEYBOARD_H

#include "encoder.c"
#include "oled.c"
enum layer_names {
    _BASE,
    _FN1,
    _FN2,
    _FN3
};

#define LAYOUT_via( \
    k00, k01, k02, k03, k04, \
    k10, k11, k12, k13, k14,\
    k20, k21, k22, k23, k24,\
    k30, k31, k32, k33, k34,\
    k40, k41, k42, k43, k44\
) \
{ \
    { k00, k01, k02, k03 , k04}, \
    { k10, k11, k12, k13 , k14}, \
    { k20, k21, k22, k23 , k24}, \
    { k30, k31, k32, k33 , k34}, \
    { k40, k41, k42, k43 , k44} \
}



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base
 * ┌───┬───┬───┬───┐
 * │ 7 │ 8 │ 9 │ BS│
 * ├───┼───┬───┼───┤
 * │ 4 │ 5 │ 6 │ESC│
 * ├───┼───┬───┼───┤
 * │ 1 │ 2 │ 3 │TAB│
 * ├───┼───┬───┼───┤
 * │FN │ 0 │ . │RET│
 * └───┴───┴───┴───┘
 */
[_BASE] = LAYOUT_via(
    TG(1),    LCTL(LSFT(KC_E)),             KC_ENTER,                KC_BSPC,        KC_VOLU,
    KC_P4,    LCTL(KC_C),                   LCTL(KC_V),              KC_ESC,         KC_VOLD,
    KC_P1,    LCTL(KC_A),                   KC_Z,                    KC_TAB,         KC_VOLU,
    KC_P1,    LCTL(KC_Z),                   LCTL(LSFT(KC_Z)),        KC_ENTER,       KC_VOLD,
    KC_A,     KC_B,                         KC_C,                    KC_D,           KC_E
),

/* FN
 * ┌───┬───┬───┬───┐
 * │   │   │   │   │
 * ├───┼───┬───┼───┤
 * │   │   │   │   │
 * ├───┼───┬───┼───┤
 * │   │   │   │   │
 * ├───┼───┬───┼───┤
 * │   │   │   │   │
 * └───┴───┴───┴───┘
 */
[_FN1] = LAYOUT_via(
    TG(2),   KC_TRNS,   KC_TRNS,    KC_TRNS, KC_VOLU,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS, KC_VOLD,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS, KC_VOLU,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS, KC_VOLD,
    KC_A,      KC_B,      KC_C,       KC_D,    KC_E
),

/* FN
 * ┌───┬───┬───┬───┐
 * │   │   │   │   │
 * ├───┼───┬───┼───┤
 * │   │   │   │   │
 * ├───┼───┬───┼───┤
 * │   │   │   │   │
 * ├───┼───┬───┼───┤
 * │   │   │   │   │
 * └───┴───┴───┴───┘
 */
[_FN2] = LAYOUT_via(
    TG(3),   KC_TRNS,   KC_TRNS,    KC_TRNS, KC_VOLU,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS, KC_VOLD,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS, KC_VOLU,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS, KC_VOLD,
    KC_A,      KC_B,      KC_C,       KC_D,    KC_E
),

/* FN
 * ┌───┬───┬───┬───┐
 * │   │   │   │   │
 * ├───┼───┬───┼───┤
 * │   │   │   │   │
 * ├───┼───┬───┼───┤
 * │   │   │   │   │
 * ├───┼───┬───┼───┤
 * │   │   │   │   │
 * └───┴───┴───┴───┘
 */
[_FN3] = LAYOUT_via(
    TO(0),   KC_TRNS,   KC_TRNS,    KC_TRNS, KC_VOLU,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS, KC_VOLD,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS, KC_VOLU,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS, KC_VOLD,
    KC_A,      KC_B,      KC_C,       KC_D,    KC_E
),
};
