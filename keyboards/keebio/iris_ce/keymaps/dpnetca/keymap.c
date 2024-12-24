#include QMK_KEYBOARD_H


#define HRM_A LGUI_T(KC_A)
#define HRM_S LALT_T(KC_S)
#define HRM_D LCTL_T(KC_D)
#define HRM_F LSFT_T(KC_F)
#define HRM_W RALT_T(KC_W)

#define HRM_SCLN RGUI_T(KC_SCLN)
#define HRM_L LALT_T(KC_L)
#define HRM_K RCTL_T(KC_K)
#define HRM_J RSFT_T(KC_J)
#define HRM_O RALT_T(KC_O)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
            KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5,                                         KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
            KC_EQL, KC_Q, HRM_W, KC_E, KC_R, KC_T,                                        KC_Y, KC_U, KC_I, HRM_O, KC_P, KC_BSLS,
            CW_TOGG, HRM_A, HRM_S,HRM_D, HRM_F, KC_G,                                     KC_H, HRM_J, HRM_K, HRM_L, HRM_SCLN, KC_QUOT,
            KC_LBRC, KC_Z, KC_X, KC_C, KC_V, KC_B,            KC_ESC,           KC_TAB,   KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RBRC,
                     LT(5,KC_INS), LT(4,KC_BSPC), LT(1,KC_DEL),                      KC_ENT, LT(3,KC_SPC), LT(2,KC_APP)
        ),
    [1] = LAYOUT(
            TG(6), KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME,                                   KC_LPRN, KC_NUM, KC_PSLS, KC_PAST, KC_PMNS, KC_PAUS,
            KC_NO, KC_NO, KC_NO, KC_UP, KC_NO, KC_END,                                    KC_RPRN, KC_7, KC_8, KC_9, KC_PPLS, KC_PSCR,
            KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGUP,                             KC_PERC, KC_4, KC_5, KC_6, KC_PEQL, KC_SCRL,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGDN,     KC_NO,             KC_NO,     KC_PCMM, KC_1, KC_2, KC_3, KC_PENT, KC_NO,
                                     KC_NO, KC_TRNS, KC_TRNS,                        KC_DOT, KC_0, KC_NO
        ),
    [2] = LAYOUT(
            KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                                     KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
            KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18,                               KC_F19, KC_F20, KC_F21, KC_F22, KC_F23, KC_F24,
            RGB_MOD, KC_MPRV, KC_MNXT, KC_VOLU, KC_NO, KC_PGUP,                           KC_HOME, KC_NO, RGB_HUI, RGB_SAI, RGB_VAI, QK_BOOT,
            RGB_TOG, KC_MSTP, KC_MPLY, KC_VOLD, KC_MUTE, KC_PGDN,     KC_NO,   KC_NO,     KC_END, KC_NO, RGB_HUD, RGB_SAD, RGB_VAD, EE_CLR,
                                                  KC_NO, KC_NO, KC_NO,                 KC_NO, KC_NO, KC_TRNS
        ),
    [3] = LAYOUT(
            KC_TILD, KC_GRV, KC_LPRN, KC_RPRN, KC_SCLN, KC_COMM,                          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_EXLM, KC_LCBR, KC_QUOT, KC_DQUO, KC_RCBR, KC_QUES,                         KC_NO, KC_LBRC, KC_NO, KC_NO, KC_RBRC, KC_NO,
            KC_HASH, KC_CIRC, KC_EQL, KC_UNDS, KC_DLR, KC_ASTR,                           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_AT, KC_LT, KC_PIPE, KC_MINS, KC_GT, KC_SLSH,     KC_PLUS,        KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                       KC_PERC, KC_COLN, KC_AMPR,                     KC_TRNS, KC_TRNS, KC_NO
        ),
    [4] = LAYOUT(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                     KC_PSCR, KC_NO, KC_NO, KC_NO, KC_NO,KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                     KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,                  KC_NO,    KC_HOME, KC_PGUP, KC_PGDN, KC_END, KC_NO, KC_NO,
                                KC_NO, KC_TRNS, KC_TRNS,                              KC_NO, KC_NO, KC_NO
        ),
    [5] = LAYOUT(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_F21, KC_F22, KC_F23, KC_F24, LCTL(KC_C),                            RCS(KC_C), KC_F9, KC_F10, KC_F11, KC_F12, KC_NO,
            KC_NO, KC_F17, KC_F18, KC_F19, KC_F20, LCTL(KC_X),                            RCS(KC_X), KC_F5, KC_F6, KC_F7, KC_F8, KC_NO,
            KC_NO, KC_F13, KC_F14, KC_F15, KC_F16, LCTL(KC_V),      KC_NO,      KC_NO,    RCS(KC_V), KC_F1, KC_F2, KC_F3, KC_F4, KC_NO,
                                              KC_TRNS, KC_NO, KC_NO,                  KC_MUTE, KC_VOLD, KC_VOLU
        ),
    [6] = LAYOUT(
            KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5,                                         KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
            KC_EQL, KC_Q, KC_W, KC_E, KC_R, KC_T,                                         KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
            CW_TOGG, KC_A, KC_S, KC_D, KC_F, KC_G,                                        KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
            KC_LBRC, KC_Z, KC_X, KC_C, KC_V, KC_B,   KC_INS,                    TG(6),    KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RBRC,
                             KC_ESC, KC_BSPC, KC_DEL,                                KC_ENT, KC_SPC, KC_TAB
        )
};

