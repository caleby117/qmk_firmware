// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤   ├───┐   ┌───┤   ├───┘
      *                   └───┤Bsp│   │Ent├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_LALT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        SC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SC_RSPC,
                                            KC_ESC,  LCTL_T(KC_SPC), KC_BSPC,  KC_ENT, KC_SPC, OSL(1)
    ),

    [1] = LAYOUT_split_3x6_3(
        KC_GRV,  KC_1,    KC_2,    KC_3,   KC_4,      KC_5,                              KC_6,    KC_7,       KC_8,    KC_9,    KC_0,    KC_BSLS,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,  S(KC_LBRC),KC_LBRC,                           KC_RBRC, S(KC_RBRC), KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC,
        KC_LSFT, KC_NO,   KC_NO,   KC_NO,  KC_NO,     KC_NO,                             KC_NO,   S(KC_MINS), KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            TO(0),   LCTL_T(KC_SPC), KC_BSPC,  KC_ENT, KC_SPC, TO(2)
    ),


    [2] = LAYOUT_split_3x6_3(
        KC_GRV,  KC_1,    KC_2,    KC_3,   KC_4,      KC_5,                              KC_6,    KC_7,       KC_8,    KC_9,    KC_0,    KC_BSLS,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,  S(KC_LBRC),KC_LBRC,                           KC_RBRC, S(KC_RBRC), KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC,
        KC_LSFT, KC_NO,   KC_NO,   KC_NO,  KC_NO,     KC_NO,                             KC_NO,   S(KC_MINS), KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            TO(0),   LCTL_T(KC_SPC), KC_BSPC,  KC_ENT, KC_SPC, TO(3)
    ),

    [3] = LAYOUT_split_3x6_3(
        KC_NO,  KC_NO,    KC_NO,    KC_MS_U,   KC_NO,      KC_NO,                              KC_NO,    KC_WH_D,       KC_WH_U,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,   KC_NO,   KC_MS_L,   KC_MS_D,   KC_MS_R,KC_NO,                           KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,  KC_NO, KC_NO,
        KC_LSFT, KC_NO,   KC_NO,   KC_NO,  KC_NO,     KC_NO,                             KC_NO,   S(KC_MINS), KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            TO(0),   LCTL_T(KC_SPC), KC_MS_BTN1,  KC_MS_BTN2, KC_SPC, TO(2)
    ),


};

