#pragma once

//#include "config_common.h"
#define MATRIX_ROWS  5
#define MATRIX_COLS  4

#define WEAR_LEVELING_LOGICAL_SIZE 4096
#define WEAR_LEVELING_BACKING_SIZE 8192
#define DYNAMIC_KEYMAP_MACRO_COUNT 32

#define MIDI_ADVANCED

// wiring of each half
#define MATRIX_ROW_PINS       { A15, B3, B4, B5, A7 }
#define MATRIX_COL_PINS       { B12, B13, B14, B15 } // A virtual pin is needed for the encoder key matrix in via.

#define DIODE_DIRECTION COL2ROW

#define TAP_CODE_DELAY  10
/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
#define ENCODERS_PAD_A { A4 , A2}
#define ENCODERS_PAD_B { A5 , A3}
#define ENCODER_RESOLUTIONS       { 4 , 4}
/* disable these deprecated features by default */

/* ws2812 RGB LED */
#define WS2812_DI_PIN A6 //D3 - underglow C7 - backlight
#define RGBLED_NUM 15    // Number of L

// OLED settings
#define OLED_TIMEOUT    80000
#define OLED_BRIGHTNESS 90