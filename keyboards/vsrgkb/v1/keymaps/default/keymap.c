#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┐ ┌───┬───┬───┬───┬───┐
     * │ Q │ W │ E │ R │   │ │   │ ← │ ↓ │ ↑ │ → │
     * ├───┼───┼───┼───┤   │ │   ├───┼───┼───┼───┤
     * │ A │ S │ D │ F │   │ │   │ G │ H │ J │ K │
     * ├───┴───┴───┴───┘   │ │   └───┴───┴───┴───┤
     * │                   │ │                   │
     * │           ┌───┬───┤ ├───┬───┐           │
     * │           │ESC│ENT│ │SPC│ ~ │           │
     * └───────────┴───┴───┘ └───┴───┴───────────┘
     */
    [0] = LAYOUT(
        KC_Q, KC_W, KC_E, KC_R, KC_ENTER, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_SPACE,
        KC_A, KC_S, KC_D, KC_F, KC_ESCAPE, KC_G, KC_H, KC_J, KC_K, KC_GRAVE)
};
