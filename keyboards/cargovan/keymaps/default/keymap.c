// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
        |---------------------------------------------------------------------------|
        | ----  ----  ----  ----       ----  ----  ----      ----  ----  ----  ---- |
        ||  9 ||  8 ||  7 || TG4|     | INS||HOME||PGUP|    | F9 || F10|| F11|| F12||
        | ----  ----  ----  ----       ----  ----  ----      ----  ----  ----  ---- |
        ||  6 ||  5 ||  4 ||  . |     | DEL|| END||PGDN|    | F5 || F6 || F7 || F8 ||
        |----  ----  ----  ----        ----  ----  ----      ----  ----  ----  ---- |
        ||  3 ||  2 ||  1 ||  0 |                           | F1 || F2 || F3 || F4 ||
        | ----  ----  ----  ----                             ----  ----  ----  ---- |
        |                                                                           |
        | ----  ----  ----  ----  ----  ----  ----  ----  ----  ----  ----  ------- |
        || ESC||  Q ||  W ||  E ||  R ||  T ||  Y ||  U ||  I ||  O ||  P ||   \   ||
        | ----  ----  ----  ----  ----  ----  ----  ----  ----  ----  ----  ------- |
        || TAB ||  A ||  S ||  D ||  F ||  G ||  H ||  J ||  K ||  L ||  ; ||RETURN||
        | -----  ----  ----  ----  ----  ----  ----  ----  ----  ----  ----  ------ |
        || LSFT  ||  Z ||  X ||  C ||  V ||  B ||  N ||  M ||  , ||  . ||  / ||  ~ ||
        | -------  ----  ----  ----  ----  ----  ----  ----  ----  ----  ----  ---- |
        || LCTL|| LGUI || LALT||    SPACE    ||  BACKSPACE || RALT|| RGUI ||  RCTL ||
        |---------------------------------------------------------------------------|
    */

    [_BASE] = LAYOUT(
        KC_9,   KC_8,   KC_7,   KC_NUM,    KC_INS,   KC_HOME,   KC_PGUP,   KC_F9,  KC_F10, KC_F11, KC_F12,
        KC_6,   KC_5,   KC_4,   KC_PDOT,   KC_DEL,   KC_END,    KC_PGDN,   KC_F5,  KC_F6,  KC_F7,  KC_F8,
        KC_3,   KC_2,   KC_1,   KC_0,                                      KC_F1,  KC_F2,  KC_F3,  KC_F4,

        KC_ESC, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSLS,
        KC_TAB,  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_ENT,
        KC_LSFT,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_GRV,
        KC_LCTL, KC_LGUI,  KC_LALT,       KC_SPC,          KC_BSPC,      KC_RALT, KC_RGUI,  KC_RCTL
    )
};
