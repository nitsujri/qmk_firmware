/* A standard layout for the Dactyl Manuform 5x6 Keyboard */

#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_EQUAL,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLS,
        KC_ESC, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOTE,
        MO(3), KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_MINUS,
                         MO(2),KC_TAB,                                                       KC_ENT, MO(2),
                                         KC_LSFT,KC_SPC,                        KC_BSPC, MO(1),
                                         LM(2, MOD_LGUI),KC_LGUI,                         KC_ENT,  KC_RSFT,
                                         KC_LCTL, KC_LALT,                        KC_LCTL, KC_LALT
    ),

    [_LOWER] = LAYOUT_5x6(
        KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,_______,
        _______,_______,_______,_______,_______,_______,                        KC_LBRC, KC_RBRC , LSFT(KC_LBRC) , LSFT(KC_RBRC) ,_______,_______,
        _______,KC_LSFT,KC_LCTL,KC_LALT,KC_LGUI ,_______,                        KC_LEFT, KC_DOWN , KC_UP , KC_RIGHT ,KC_MINS,_______,
        _______,_______,_______,_______,_______,_______,                        KC_C, _______ , _______ , _______ ,_______ ,_______,
                                                _______,_______,            _______, _______,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______

    ),

    [_RAISE] = LAYOUT_5x6(
          KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
          _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
          _______,KC_GRV,KC_TILD,LSFT(KC_TAB),KC_TAB,_______,                        KC_END,KC_PGDN,KC_PGUP,KC_HOME,_______,_______,
          _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
                                                  _______,_______,            _______ ,_______,
                                                  _______,_______,            KC_MPLY,_______,
                                                  _______,_______,            KC_VOLU,_______,
                                                  _______,_______,            KC_VOLD,_______
    ),
 [3] = LAYOUT_5x6(
    QK_BOOT,_______,_______,_______,_______,_______,                            _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                            KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,_______,
    _______,AP_FN,_______,_______,_______,_______,                              KC_F9,KC_F5,KC_F10,KC_F11,KC_F12,_______,
    _______,_______,_______,_______,_______,_______,                            LGUI(LCTL(KC_BSLS)),LALT(LSFT(KC_E)),LGUI(LSFT(KC_Y)),_______,_______,_______,
                                                    _______,_______,        _______,_______,
                                                    _______,_______,        _______,_______,
                                                    _______,_______,        _______,_______,
                                                    _______,_______,        _______,_______
),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
    #ifdef CONSOLE_ENABLE
        for (uint8_t c = 0; c < MATRIX_COLS; c++)
            for (uint8_t r = 0; r < MATRIX_ROWS; r++)
                if (matrix_is_on(r, c)) uprintf("r:%d c:%d \n", r, c);
    #endif
    }
    return true;
};
