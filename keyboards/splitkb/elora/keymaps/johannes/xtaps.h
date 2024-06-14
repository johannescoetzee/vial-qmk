#pragma once
#include QMK_KEYBOARD_H
#include "layernames.h"

// HOME ROW MODS
#define MT_LG_A LGUI_T(KC_A)
#define MT_LA_O LALT_T(KC_O)
#define MT_LC_E LCTL_T(KC_E)
#define MT_LS_U LSFT_T(KC_U)

#define MT_RG_S RGUI_T(KC_S)
#define MT_RA_N RALT_T(KC_N)
#define MT_RC_T RCTL_T(KC_T)
#define MT_RS_H RSFT_T(KC_H)

// LAYER TAPS
#define LT_NV_SP LT(NAV, KC_SPC)
#define LT_RS_TB LT(RSM, KC_TAB)

#define LT_LS_BS LT(LSM, KC_BSPC)
#define LT_NM_EN LT(NUM, KC_ENT)
#define LT_FN_DL LT(FUN, KC_DEL)

#define C_GDN LM(GDN, MOD_LCTL)
#define S_GDN LM(GDN, MOD_LSFT)
#define A_GDN LM(GDN, MOD_LALT)
#define CS_GDN LM(GDN, MOD_LCTL | MOD_LSFT)
