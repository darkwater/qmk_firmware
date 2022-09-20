#include QMK_KEYBOARD_H
#include "version.h"

enum layer {
    BASE,
    GAME,
    SYMB,
    NUMP,
    SWAP,
};

#define _____   KC_TRNS
#define LINS    LSFT(KC_INS)  // shift+insert
#define KC_LPRN LSFT(KC_9)    // (
#define KC_RPRN LSFT(KC_0)    // )
#define KC_LCBR LSFT(KC_LBRC) // {
#define KC_RCBR LSFT(KC_RBRC) // }

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = LAYOUT_ergodox_pretty(
  KC_GRV,  KC_1, KC_2,  KC_3,    KC_4,    KC_5, KC_PSCR,         TG(1), KC_6, KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_TAB,  KC_Q, KC_W,  KC_E,    KC_R,    KC_T, MO(4),           MO(4), KC_Y, KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  KC_LCTL, KC_A, KC_S,  KC_D,    KC_F,    KC_G, /***/            /***/  KC_H, KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z, KC_X,  KC_C,    KC_V,    KC_B, MO(2),           MO(2), KC_N, KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_EQL,
  MO(3),   LINS, TG(3), KC_LEFT, KC_RGHT,                                     KC_DOWN, KC_UP,   KC_RSFT, KC_LGUI, KC_RCTL,

                                         KC_ESC, KC_LSFT,        KC_HOME, KC_END,
                                /****/  /*****/  KC_LGUI,        KC_PGUP, /***/  /****/
                                KC_SPC, KC_BSPC, KC_LALT,        KC_PGDN, MO(2), KC_ENT
),

[SYMB] = LAYOUT_ergodox_pretty(
  KC_NO, KC_F1, KC_F2, KC_F3,   KC_F4,   KC_F5, KC_NO,           KC_NO, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  KC_NO, KC_NO, KC_NO, KC_LCBR, KC_RCBR, KC_NO, KC_NO,           KC_NO, KC_MUTE, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_F12,
  KC_NO, KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_NO, /****/           /****/ KC_VOLU, KC_MRWD, KC_MPLY, KC_MFFD, KC_MSTP, KC_NO,
  KC_NO, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_NO, _____,           _____, KC_VOLD, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,                                           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,

                                         KC_NO, KC_NO,           RGB_RMOD, RGB_MOD,
                                 /***/  /****/  KC_NO,           BL_ON,  /***/  /***/
                                 KC_NO, KC_DEL, KC_NO,           BL_OFF, KC_NO, KC_NO
),

[NUMP] = LAYOUT_ergodox_pretty(
  KC_NO, KC_NO, KC_NO, KC_BSLS, KC_BSLS, KC_BSLS, KC_NLCK,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_7,  KC_8,    KC_9,    KC_PSLS, KC_PPLS,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_4,  KC_5,    KC_6,    KC_PAST, /*****/        /***/  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_1,  KC_2,    KC_3,    KC_PMNS, KC_PENT,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  _____, KC_NO, _____, KC_DOT,  KC_0,                                          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

                                           KC_NO, KC_NO,         KC_NO, KC_NO,
                                    /***/  /***/  KC_NO,         KC_NO, /***/  /***/
                                    KC_NO, KC_NO, KC_ENT,        KC_NO, KC_NO, KC_NO
),

[SWAP] = LAYOUT_ergodox_pretty(
  KC_MINS, KC_6,  KC_7,  KC_8,    KC_9,   KC_0,    KC_NO,        KC_PSCR, KC_1, KC_2,    KC_3,    KC_4,  KC_5, KC_GRV,
  KC_BSLS, KC_Y,  KC_U,  KC_I,    KC_O,   KC_P,    _____,        _____,   KC_Q, KC_W,    KC_E,    KC_R,  KC_T, KC_TAB,
  KC_QUOT, KC_H,  KC_J,  KC_K,    KC_L,   KC_SCLN, /***/         /***/    KC_A, KC_S,    KC_D,    KC_F,  KC_G, KC_LCTL,
  KC_EQL,  KC_N,  KC_M,  KC_COMM, KC_DOT, KC_SLSH, KC_NO,        KC_NO,   KC_Z, KC_X,    KC_C,    KC_V,  KC_B, KC_LSFT,
  KC_NO,   KC_NO, KC_NO, KC_UP,   KC_DOWN,                                      KC_LEFT, KC_RGHT, KC_NO, LINS, KC_NO,

                                         KC_END, KC_HOME,        KC_LSFT, KC_ESC,
                                  /****/  /***/  KC_PGUP,        KC_LGUI, /*****/  /****/
                                  KC_ENT, KC_NO, KC_PGDN,        KC_LALT, KC_BSPC, KC_SPC
),

[GAME] = LAYOUT_ergodox_pretty(
  _____, _____, _____, _____, _____, _____, _____,      _____, _____, _____, _____, _____,   _____,   _____,
  _____, _____, _____, _____, _____, _____, _____,      _____, _____, _____, _____, _____,   _____,   _____,
  _____, _____, _____, _____, _____, _____, /***/       /***/  _____, _____, _____, _____,   _____,   _____,
  _____, _____, _____, _____, _____, _____, _____,      _____, _____, _____, _____, _____,   KC_UP,   _____,
  _____, _____, _____, KC_LEFT, KC_DOWN,                           KC_UP, KC_RIGHT, KC_LEFT, KC_DOWN, KC_RGHT,

                                     _____, _____,      _____, _____,
                              /***/  /***/  _____,      _____, /***/  /***/
                              _____, _____, _____,      _____, _____, _____
),

};

void keyboard_post_init(void) {
    ergodox_board_led_off();
    rgblight_setrgb(0, 175, 255);
};

// void raw_hid_receive(uint8_t *data, uint8_t length)

layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t layer = get_highest_layer(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();

    switch (layer) {
        case 0:
            rgblight_setrgb(3, 11, 156);
            break;
        case 1:
            ergodox_right_led_1_on();
            rgblight_setrgb(255, 0, 0);
            break;
        case 2:
            ergodox_right_led_2_on();
            rgblight_setrgb(0, 255, 0);
            break;
        case 3:
            ergodox_right_led_3_on();
            rgblight_setrgb(0, 0, 255);
            break;
        case 4:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            rgblight_setrgb(200, 65, 0);
            break;
        case 5:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
            rgblight_setrgb(0, 80, 33);
            break;
        case 6:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            rgblight_setrgb(0, 10, 200);
            break;
        case 7:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            rgblight_setrgb(90, 150, 90);
            break;
        case 8:
            rgblight_setrgb(100, 0, 100);
            break;
        case 9:
            rgblight_setrgb(200, 150, 90);
            break;
            //   default:
            //     rgblight_setrgb(0, 200, 200);
            //     break;
    }
    return state;
};
