#include "sx60.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7,
		KC_SPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y,
		KC_SPC, MO(1), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H,
		KC_SPC, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N,
		KC_SPC, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC),

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {

	switch (id) {

	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}
