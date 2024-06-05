#include "kb.h"

enum combos {
  JK_TAB,
  HJ_BSPC,
  NM_ALT,
};

const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM hj_combo[] = {KC_H, KC_J, COMBO_END};
const uint16_t PROGMEM nm_combo[] = {KC_N, KC_M, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [JK_TAB] = COMBO(jk_combo, KC_TAB),
  [HJ_BSPC] = COMBO(hj_combo, KC_BSPC),
  [NM_ALT] = COMBO(nm_combo, KC_LALT),
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = KEYMAP(
		KC_TRNS, KC_W, KC_E,                                                                                       KC_I, KC_O, 
		KC_CAPS, KC_Q,LT(4,KC_S), LT(1,KC_D), KC_R, KC_T                   , KC_VOLU,                              KC_Y, KC_U, KC_K, KC_L, KC_P, KC_QUOT, 
		KC_A, KC_X, KC_C, LT(3,KC_F), KC_G,                                                                        KC_H, KC_J, KC_COMM, KC_DOT, KC_SCLN, 
		LSFT_T(KC_Z), KC_V, KC_B,                                                                                  KC_N, KC_M,  RSFT_T(KC_SLSH), 
                LALT_T(KC_TAB), GUI_T(KC_ESC), LT(2, KC_SPC),                                                              LT(2, KC_ENT), CTL_T(KC_BSPC), KC_TAB 
    ),
    [1] = KEYMAP(
                 _______, _______, _______,                                                                             KC_8, KC_9,
                 _______, _______, _______, _______, _______, _______,             _______,                              _______, KC_7, KC_5, KC_6, _______, _______,
                 _______, _______, _______, _______, _______,                                                           _______, KC_4, KC_2 , KC_3, _______,
                 _______, _______, _______,                                                                             _______, KC_1, _______,
                 _______, _______, _______,                                                                             _______, KC_0, KC_0

    ),
    [2] = KEYMAP(

                 _______, KC_AT, KC_HASH,                                                                               KC_ASTR, KC_PIPE,
                 _______,KC_EXLM, KC_GRV, _______, KC_DLR, KC_PERC,             _______,                                KC_CIRC, KC_AMPR, KC_LCBR, KC_QUOTE, KC_BSLS, _______,
                 KC_TILD, KC_PPLS, _______, _______, _______,                                                           KC_LPRN, KC_LBRC, KC_RCBR , KC_UNDS, KC_DOUBLE_QUOTE,
                 KC_PEQL, _______, _______,                                                                             KC_RPRN, KC_RBRC, KC_KP_MINUS,
                 _______, _______, _______,                                                                             _______, _______, _______

    ),
    [3] = KEYMAP(
                 _______, _______, _______,                                                                             _______, _______,
                 _______, _______, _______, _______, _______, _______,             _______,                              _______, _______, KC_DOWN, KC_UP, _______, _______,
                 _______, _______, _______, _______, _______,                                                           _______, KC_LEFT, _______, _______, KC_RIGHT,
                 _______, _______, _______,                                                                             _______, _______, _______,
                 _______, _______, _______,                                                                             _______, _______, _______
    ),
    [4] = KEYMAP(
                 _______, _______, _______,                                                                             LALT(KC_I), _______,
                 _______, _______, _______, _______, _______, _______,             _______,                              _______, _______,  LCTL(KC_J),LCTL(KC_K), _______, _______,
                 _______, _______, _______, _______, _______,                                                           _______, LCTL(KC_H), LALT(KC_COMM), _______, LCTL(KC_L),
                 _______, _______, _______,                                                                             _______, _______, _______,
                 _______, _______, _______,                                                                             _______, _______, _______
    ),
    [5] = KEYMAP(
                 _______, _______, _______,                                                                             _______, _______,
                 _______, _______, _______, _______, _______, _______,             _______,                              _______, _______, _______, _______, _______, _______,
                 _______, _______, _______, _______, _______,                                                           _______, _______, _______, _______, _______,
                 _______, _______, _______,                                                                             _______, _______, _______,
                 _______, _______, _______,                                                                             _______, _______, _______
    )
};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}
