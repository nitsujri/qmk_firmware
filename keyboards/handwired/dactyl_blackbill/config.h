
/* Copyright 2019
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

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_COL_PINS { A5, A4 ,A3, A2, A1, A0 }
#define MATRIX_ROW_PINS { B10, B2, B1, B0, A7, A6 }
#define DIODE_DIRECTION COL2ROW

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define DYNAMIC_KEYMAP_LAYER_COUNT 7

#define HAL_USE_SERIAL TRUE
// #define SPLIT_HAND_PIN B9
#define SOFT_SERIAL_PIN A9
#define SERIAL_USART_DRIVER SD1
#define SERIAL_USART_TX_PAL_MODE 7

// #define SPLIT_USB_DETECT
#define MASTER_LEFT
// #define MASTER_RIGHT

#define RGB_DISABLE_WHEN_USB_SUSPENDED

// WS2812 RGB LED strip input and number of LEDs
#define WS2812_DI_PIN B9
#ifdef RGBLIGHT_ENABLE

    #define RGBLED_NUM 28
    #define RGBLED_SPLIT {14,14}
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
    #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
    #define RGBLIGHT_SLEEP 1 /* If defined, the RGB lighting will be switched off when the host goes to sleep */
    #define RGBLIGHT_DEFAULT_HUE 180
    #define RGBLIGHT_DEFAULT_SAT 255
    #define RGBLIGHT_DEFAULT_VAL 40

    /*== or choose animations ==*/
    #    define RGBLIGHT_EFFECT_BREATHING
    #    define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #    define RGBLIGHT_EFFECT_SNAKE
    #    define RGBLIGHT_EFFECT_KNIGHT
    #    define RGBLIGHT_EFFECT_CHRISTMAS
    #    define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #    define RGBLIGHT_EFFECT_RGB_TEST
    #    define RGBLIGHT_EFFECT_ALTERNATING
    #    define RGBLIGHT_EFFECT_TWINKLE
    /*== customize breathing effect ==
    */
    /*==== (DEFAULT) use fixed table instead of exp() and sin() ====*/
    //#    define RGBLIGHT_BREATHE_TABLE_SIZE 256      // 256(default) or 128 or 64
    /*==== use exp() and sin() ====*/
    //#    define RGBLIGHT_EFFECT_BREATHE_CENTER 1.85  // 1 to 2.7
    //#    define RGBLIGHT_EFFECT_BREATHE_MAX    255   // 0 to 255
    # define RGBLIGHT_RAINBOW_SWIRL_RANGE 20

    #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL + 5
#endif
