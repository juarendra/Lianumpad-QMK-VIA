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

#pragma once

//#include "config_common.h"
#define MATRIX_ROWS  5
#define MATRIX_COLS  5

// wiring of each half
#define MATRIX_ROW_PINS       { A15, B3, B4, B5, A7 }
#define MATRIX_COL_PINS       { B12, B13, B14, B15, NO_PIN } // A virtual pin is needed for the encoder key matrix in via.

#define DIODE_DIRECTION COL2ROW

#define TAP_CODE_DELAY  10
/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
#define ENCODERS_PAD_A { A4 , A2}
#define ENCODERS_PAD_B { A5 , A3}
#define ENCODER_RESOLUTIONS       { 4 , 4}
/* disable these deprecated features by default */

/* ws2812 RGB LED */
#define RGB_DI_PIN A6 //D3 - underglow C7 - backlight
#define RGBLED_NUM 15    // Number of L

// OLED settings
#define OLED_TIMEOUT    80000
#define OLED_BRIGHTNESS 90