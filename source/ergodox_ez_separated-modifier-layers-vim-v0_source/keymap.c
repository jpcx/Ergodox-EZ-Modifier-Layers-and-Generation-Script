#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       KC_EQUAL,       KC_BSPACE,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_QUOTE,
    KC_GRAVE,       KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_LBRACKET,    KC_RBRACKET,
    MO(3),          KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SCOLON,      MO(3),
    MO(1),          TG(19),         MO(4),          KC_LEFT,        KC_RIGHT,                                                                                                       KC_DOWN,        KC_UP,          KC_SLASH,       KC_BSLASH,      KC_DELETE,
                                                                                                    KC_TRANSPARENT, TG(17),         MO(18),         KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_SPACE,       MO(2),          MO(16),         KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER
  ),
  [1] = LAYOUT_ergodox_pretty(
    LCTL(KC_ESCAPE),LCTL(KC_1),     LCTL(KC_2),     LCTL(KC_3),     LCTL(KC_4),     LCTL(KC_5),     LCTL(KC_6),                                     LCTL(KC_7),     LCTL(KC_8),     LCTL(KC_9),     LCTL(KC_0),     LCTL(KC_MINUS), LCTL(KC_EQUAL), LCTL(KC_BSPACE),
    LCTL(KC_TAB),   LCTL(KC_Q),     LCTL(KC_W),     LCTL(KC_E),     LCTL(KC_R),     LCTL(KC_T),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(KC_Y),     LCTL(KC_U),     LCTL(KC_I),     LCTL(KC_O),     LCTL(KC_P),     LCTL(KC_QUOTE),
    LCTL(KC_GRAVE), LCTL(KC_A),     LCTL(KC_S),     LCTL(KC_D),     LCTL(KC_F),     LCTL(KC_G),                                                                     LCTL(KC_H),     LCTL(KC_J),     LCTL(KC_K),     LCTL(KC_L),     LCTL(KC_LBRACKET),LCTL(KC_RBRACKET),
    MO(6),          LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     LCTL(KC_B),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(KC_N),     LCTL(KC_M),     LCTL(KC_COMMA), LCTL(KC_DOT),   LCTL(KC_SCOLON),MO(6),
    KC_TRANSPARENT, KC_TRANSPARENT, MO(7),          LCTL(KC_LEFT),  LCTL(KC_RIGHT),                                                                                                 LCTL(KC_DOWN),  LCTL(KC_UP),    LCTL(KC_SLASH), LCTL(KC_BSLASH),LCTL(KC_DELETE),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LCTL(KC_SPACE), MO(5),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_ENTER)
  ),
  [2] = LAYOUT_ergodox_pretty(
    LALT(KC_ESCAPE),LALT(KC_1),     LALT(KC_2),     LALT(KC_3),     LALT(KC_4),     LALT(KC_5),     LALT(KC_6),                                     LALT(KC_7),     LALT(KC_8),     LALT(KC_9),     LALT(KC_0),     LALT(KC_MINUS), LALT(KC_EQUAL), LALT(KC_BSPACE),
    LALT(KC_TAB),   LALT(KC_Q),     LALT(KC_W),     LALT(KC_E),     LALT(KC_R),     LALT(KC_T),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(KC_Y),     LALT(KC_U),     LALT(KC_I),     LALT(KC_O),     LALT(KC_P),     LALT(KC_QUOTE),
    LALT(KC_GRAVE), LALT(KC_A),     LALT(KC_S),     LALT(KC_D),     LALT(KC_F),     LALT(KC_G),                                                                     LALT(KC_H),     LALT(KC_J),     LALT(KC_K),     LALT(KC_L),     LALT(KC_LBRACKET),LALT(KC_RBRACKET),
    MO(8),          LALT(KC_Z),     LALT(KC_X),     LALT(KC_C),     LALT(KC_V),     LALT(KC_B),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(KC_N),     LALT(KC_M),     LALT(KC_COMMA), LALT(KC_DOT),   LALT(KC_SCOLON),MO(8),
    MO(5),          KC_TRANSPARENT, MO(9),          LALT(KC_LEFT),  LALT(KC_RIGHT),                                                                                                 LALT(KC_DOWN),  LALT(KC_UP),    LALT(KC_SLASH), LALT(KC_BSLASH),LALT(KC_DELETE),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LALT(KC_SPACE), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_ENTER)
  ),
  [3] = LAYOUT_ergodox_pretty(
    LSFT(KC_ESCAPE),LSFT(KC_1),     LSFT(KC_2),     LSFT(KC_3),     LSFT(KC_4),     LSFT(KC_5),     LSFT(KC_6),                                     LSFT(KC_7),     LSFT(KC_8),     LSFT(KC_9),     LSFT(KC_0),     LSFT(KC_MINUS), LSFT(KC_EQUAL), LSFT(KC_BSPACE),
    LSFT(KC_TAB),   LSFT(KC_Q),     LSFT(KC_W),     LSFT(KC_E),     LSFT(KC_R),     LSFT(KC_T),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_Y),     LSFT(KC_U),     LSFT(KC_I),     LSFT(KC_O),     LSFT(KC_P),     LSFT(KC_QUOTE),
    LSFT(KC_GRAVE), LSFT(KC_A),     LSFT(KC_S),     LSFT(KC_D),     LSFT(KC_F),     LSFT(KC_G),                                                                     LSFT(KC_H),     LSFT(KC_J),     LSFT(KC_K),     LSFT(KC_L),     LSFT(KC_LBRACKET),LSFT(KC_RBRACKET),
    KC_TRANSPARENT, LSFT(KC_Z),     LSFT(KC_X),     LSFT(KC_C),     LSFT(KC_V),     LSFT(KC_B),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_N),     LSFT(KC_M),     LSFT(KC_COMMA), LSFT(KC_DOT),   LSFT(KC_SCOLON),KC_TRANSPARENT,
    MO(6),          KC_TRANSPARENT, MO(10),         LSFT(KC_LEFT),  LSFT(KC_RIGHT),                                                                                                 LSFT(KC_DOWN),  LSFT(KC_UP),    LSFT(KC_SLASH), LSFT(KC_BSLASH),LSFT(KC_DELETE),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LSFT(KC_SPACE), MO(8),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_ENTER)
  ),
  [4] = LAYOUT_ergodox_pretty(
    LGUI(KC_ESCAPE),LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     LGUI(KC_4),     LGUI(KC_5),     LGUI(KC_6),                                     LGUI(KC_7),     LGUI(KC_8),     LGUI(KC_9),     LGUI(KC_0),     LGUI(KC_MINUS), LGUI(KC_EQUAL), LGUI(KC_BSPACE),
    LGUI(KC_TAB),   LGUI(KC_Q),     LGUI(KC_W),     LGUI(KC_E),     LGUI(KC_R),     LGUI(KC_T),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_Y),     LGUI(KC_U),     LGUI(KC_I),     LGUI(KC_O),     LGUI(KC_P),     LGUI(KC_QUOTE),
    LGUI(KC_GRAVE), LGUI(KC_A),     LGUI(KC_S),     LGUI(KC_D),     LGUI(KC_F),     LGUI(KC_G),                                                                     LGUI(KC_H),     LGUI(KC_J),     LGUI(KC_K),     LGUI(KC_L),     LGUI(KC_LBRACKET),LGUI(KC_RBRACKET),
    MO(10),         LGUI(KC_Z),     LGUI(KC_X),     LGUI(KC_C),     LGUI(KC_V),     LGUI(KC_B),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_N),     LGUI(KC_M),     LGUI(KC_COMMA), LGUI(KC_DOT),   LGUI(KC_SCOLON),MO(10),
    MO(7),          KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_LEFT),  LGUI(KC_RIGHT),                                                                                                 LGUI(KC_DOWN),  LGUI(KC_UP),    LGUI(KC_SLASH), LGUI(KC_BSLASH),LGUI(KC_DELETE),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LGUI(KC_SPACE), MO(9),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_ENTER)
  ),
  [5] = LAYOUT_ergodox_pretty(
    LALT(LCTL(KC_ESCAPE)),LALT(LCTL(KC_1)),LALT(LCTL(KC_2)),LALT(LCTL(KC_3)),LALT(LCTL(KC_4)),LALT(LCTL(KC_5)),LALT(LCTL(KC_6)),                                LALT(LCTL(KC_7)),LALT(LCTL(KC_8)),LALT(LCTL(KC_9)),LALT(LCTL(KC_0)),LALT(LCTL(KC_MINUS)),LALT(LCTL(KC_EQUAL)),LALT(LCTL(KC_BSPACE)),
    LALT(LCTL(KC_TAB)),LALT(LCTL(KC_Q)),LALT(LCTL(KC_W)),LALT(LCTL(KC_E)),LALT(LCTL(KC_R)),LALT(LCTL(KC_T)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LCTL(KC_Y)),LALT(LCTL(KC_U)),LALT(LCTL(KC_I)),LALT(LCTL(KC_O)),LALT(LCTL(KC_P)),LALT(LCTL(KC_QUOTE)),
    LALT(LCTL(KC_GRAVE)),LALT(LCTL(KC_A)),LALT(LCTL(KC_S)),LALT(LCTL(KC_D)),LALT(LCTL(KC_F)),LALT(LCTL(KC_G)),                                                                LALT(LCTL(KC_H)),LALT(LCTL(KC_J)),LALT(LCTL(KC_K)),LALT(LCTL(KC_L)),LALT(LCTL(KC_LBRACKET)),LALT(LCTL(KC_RBRACKET)),
    MO(11),         LALT(LCTL(KC_Z)),LALT(LCTL(KC_X)),LALT(LCTL(KC_C)),LALT(LCTL(KC_V)),LALT(LCTL(KC_B)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LCTL(KC_N)),LALT(LCTL(KC_M)),LALT(LCTL(KC_COMMA)),LALT(LCTL(KC_DOT)),LALT(LCTL(KC_SCOLON)),MO(11),
    KC_TRANSPARENT, KC_TRANSPARENT, MO(12),         LALT(LCTL(KC_LEFT)),LALT(LCTL(KC_RIGHT)),                                                                                                LALT(LCTL(KC_DOWN)),LALT(LCTL(KC_UP)),LALT(LCTL(KC_SLASH)),LALT(LCTL(KC_BSLASH)),LALT(LCTL(KC_DELETE)),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LALT(LCTL(KC_SPACE)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_ENTER))
  ),
  [6] = LAYOUT_ergodox_pretty(
    LCTL(LSFT(KC_ESCAPE)),LCTL(LSFT(KC_1)),LCTL(LSFT(KC_2)),LCTL(LSFT(KC_3)),LCTL(LSFT(KC_4)),LCTL(LSFT(KC_5)),LCTL(LSFT(KC_6)),                                LCTL(LSFT(KC_7)),LCTL(LSFT(KC_8)),LCTL(LSFT(KC_9)),LCTL(LSFT(KC_0)),LCTL(LSFT(KC_MINUS)),LCTL(LSFT(KC_EQUAL)),LCTL(LSFT(KC_BSPACE)),
    LCTL(LSFT(KC_TAB)),LCTL(LSFT(KC_Q)),LCTL(LSFT(KC_W)),LCTL(LSFT(KC_E)),LCTL(LSFT(KC_R)),LCTL(LSFT(KC_T)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(LSFT(KC_Y)),LCTL(LSFT(KC_U)),LCTL(LSFT(KC_I)),LCTL(LSFT(KC_O)),LCTL(LSFT(KC_P)),LCTL(LSFT(KC_QUOTE)),
    LCTL(LSFT(KC_GRAVE)),LCTL(LSFT(KC_A)),LCTL(LSFT(KC_S)),LCTL(LSFT(KC_D)),LCTL(LSFT(KC_F)),LCTL(LSFT(KC_G)),                                                                LCTL(LSFT(KC_H)),LCTL(LSFT(KC_J)),LCTL(LSFT(KC_K)),LCTL(LSFT(KC_L)),LCTL(LSFT(KC_LBRACKET)),LCTL(LSFT(KC_RBRACKET)),
    KC_TRANSPARENT, LCTL(LSFT(KC_Z)),LCTL(LSFT(KC_X)),LCTL(LSFT(KC_C)),LCTL(LSFT(KC_V)),LCTL(LSFT(KC_B)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(LSFT(KC_N)),LCTL(LSFT(KC_M)),LCTL(LSFT(KC_COMMA)),LCTL(LSFT(KC_DOT)),LCTL(LSFT(KC_SCOLON)),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, MO(13),         LCTL(LSFT(KC_LEFT)),LCTL(LSFT(KC_RIGHT)),                                                                                                LCTL(LSFT(KC_DOWN)),LCTL(LSFT(KC_UP)),LCTL(LSFT(KC_SLASH)),LCTL(LSFT(KC_BSLASH)),LCTL(LSFT(KC_DELETE)),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LCTL(LSFT(KC_SPACE)),MO(11),         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_ENTER))
  ),
  [7] = LAYOUT_ergodox_pretty(
    LCTL(LGUI(KC_ESCAPE)),LCTL(LGUI(KC_1)),LCTL(LGUI(KC_2)),LCTL(LGUI(KC_3)),LCTL(LGUI(KC_4)),LCTL(LGUI(KC_5)),LCTL(LGUI(KC_6)),                                LCTL(LGUI(KC_7)),LCTL(LGUI(KC_8)),LCTL(LGUI(KC_9)),LCTL(LGUI(KC_0)),LCTL(LGUI(KC_MINUS)),LCTL(LGUI(KC_EQUAL)),LCTL(LGUI(KC_BSPACE)),
    LCTL(LGUI(KC_TAB)),LCTL(LGUI(KC_Q)),LCTL(LGUI(KC_W)),LCTL(LGUI(KC_E)),LCTL(LGUI(KC_R)),LCTL(LGUI(KC_T)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(LGUI(KC_Y)),LCTL(LGUI(KC_U)),LCTL(LGUI(KC_I)),LCTL(LGUI(KC_O)),LCTL(LGUI(KC_P)),LCTL(LGUI(KC_QUOTE)),
    LCTL(LGUI(KC_GRAVE)),LCTL(LGUI(KC_A)),LCTL(LGUI(KC_S)),LCTL(LGUI(KC_D)),LCTL(LGUI(KC_F)),LCTL(LGUI(KC_G)),                                                                LCTL(LGUI(KC_H)),LCTL(LGUI(KC_J)),LCTL(LGUI(KC_K)),LCTL(LGUI(KC_L)),LCTL(LGUI(KC_LBRACKET)),LCTL(LGUI(KC_RBRACKET)),
    MO(13),         LCTL(LGUI(KC_Z)),LCTL(LGUI(KC_X)),LCTL(LGUI(KC_C)),LCTL(LGUI(KC_V)),LCTL(LGUI(KC_B)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(LGUI(KC_N)),LCTL(LGUI(KC_M)),LCTL(LGUI(KC_COMMA)),LCTL(LGUI(KC_DOT)),LCTL(LGUI(KC_SCOLON)),MO(13),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LGUI(KC_LEFT)),LCTL(LGUI(KC_RIGHT)),                                                                                                LCTL(LGUI(KC_DOWN)),LCTL(LGUI(KC_UP)),LCTL(LGUI(KC_SLASH)),LCTL(LGUI(KC_BSLASH)),LCTL(LGUI(KC_DELETE)),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LCTL(LGUI(KC_SPACE)),MO(12),         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LGUI(KC_ENTER))
  ),
  [8] = LAYOUT_ergodox_pretty(
    LALT(LSFT(KC_ESCAPE)),LALT(LSFT(KC_1)),LALT(LSFT(KC_2)),LALT(LSFT(KC_3)),LALT(LSFT(KC_4)),LALT(LSFT(KC_5)),LALT(LSFT(KC_6)),                                LALT(LSFT(KC_7)),LALT(LSFT(KC_8)),LALT(LSFT(KC_9)),LALT(LSFT(KC_0)),LALT(LSFT(KC_MINUS)),LALT(LSFT(KC_EQUAL)),LALT(LSFT(KC_BSPACE)),
    LALT(LSFT(KC_TAB)),LALT(LSFT(KC_Q)),LALT(LSFT(KC_W)),LALT(LSFT(KC_E)),LALT(LSFT(KC_R)),LALT(LSFT(KC_T)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LSFT(KC_Y)),LALT(LSFT(KC_U)),LALT(LSFT(KC_I)),LALT(LSFT(KC_O)),LALT(LSFT(KC_P)),LALT(LSFT(KC_QUOTE)),
    LALT(LSFT(KC_GRAVE)),LALT(LSFT(KC_A)),LALT(LSFT(KC_S)),LALT(LSFT(KC_D)),LALT(LSFT(KC_F)),LALT(LSFT(KC_G)),                                                                LALT(LSFT(KC_H)),LALT(LSFT(KC_J)),LALT(LSFT(KC_K)),LALT(LSFT(KC_L)),LALT(LSFT(KC_LBRACKET)),LALT(LSFT(KC_RBRACKET)),
    KC_TRANSPARENT, LALT(LSFT(KC_Z)),LALT(LSFT(KC_X)),LALT(LSFT(KC_C)),LALT(LSFT(KC_V)),LALT(LSFT(KC_B)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LSFT(KC_N)),LALT(LSFT(KC_M)),LALT(LSFT(KC_COMMA)),LALT(LSFT(KC_DOT)),LALT(LSFT(KC_SCOLON)),KC_TRANSPARENT,
    MO(11),         KC_TRANSPARENT, MO(14),         LALT(LSFT(KC_LEFT)),LALT(LSFT(KC_RIGHT)),                                                                                                LALT(LSFT(KC_DOWN)),LALT(LSFT(KC_UP)),LALT(LSFT(KC_SLASH)),LALT(LSFT(KC_BSLASH)),LALT(LSFT(KC_DELETE)),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LALT(LSFT(KC_SPACE)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LSFT(KC_ENTER))
  ),
  [9] = LAYOUT_ergodox_pretty(
    LALT(LGUI(KC_ESCAPE)),LALT(LGUI(KC_1)),LALT(LGUI(KC_2)),LALT(LGUI(KC_3)),LALT(LGUI(KC_4)),LALT(LGUI(KC_5)),LALT(LGUI(KC_6)),                                LALT(LGUI(KC_7)),LALT(LGUI(KC_8)),LALT(LGUI(KC_9)),LALT(LGUI(KC_0)),LALT(LGUI(KC_MINUS)),LALT(LGUI(KC_EQUAL)),LALT(LGUI(KC_BSPACE)),
    LALT(LGUI(KC_TAB)),LALT(LGUI(KC_Q)),LALT(LGUI(KC_W)),LALT(LGUI(KC_E)),LALT(LGUI(KC_R)),LALT(LGUI(KC_T)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LGUI(KC_Y)),LALT(LGUI(KC_U)),LALT(LGUI(KC_I)),LALT(LGUI(KC_O)),LALT(LGUI(KC_P)),LALT(LGUI(KC_QUOTE)),
    LALT(LGUI(KC_GRAVE)),LALT(LGUI(KC_A)),LALT(LGUI(KC_S)),LALT(LGUI(KC_D)),LALT(LGUI(KC_F)),LALT(LGUI(KC_G)),                                                                LALT(LGUI(KC_H)),LALT(LGUI(KC_J)),LALT(LGUI(KC_K)),LALT(LGUI(KC_L)),LALT(LGUI(KC_LBRACKET)),LALT(LGUI(KC_RBRACKET)),
    MO(14),         LALT(LGUI(KC_Z)),LALT(LGUI(KC_X)),LALT(LGUI(KC_C)),LALT(LGUI(KC_V)),LALT(LGUI(KC_B)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LGUI(KC_N)),LALT(LGUI(KC_M)),LALT(LGUI(KC_COMMA)),LALT(LGUI(KC_DOT)),LALT(LGUI(KC_SCOLON)),MO(14),
    MO(12),         KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(KC_LEFT)),LALT(LGUI(KC_RIGHT)),                                                                                                LALT(LGUI(KC_DOWN)),LALT(LGUI(KC_UP)),LALT(LGUI(KC_SLASH)),LALT(LGUI(KC_BSLASH)),LALT(LGUI(KC_DELETE)),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LALT(LGUI(KC_SPACE)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(KC_ENTER))
  ),
  [10] = LAYOUT_ergodox_pretty(
    LGUI(LSFT(KC_ESCAPE)),LGUI(LSFT(KC_1)),LGUI(LSFT(KC_2)),LGUI(LSFT(KC_3)),LGUI(LSFT(KC_4)),LGUI(LSFT(KC_5)),LGUI(LSFT(KC_6)),                                LGUI(LSFT(KC_7)),LGUI(LSFT(KC_8)),LGUI(LSFT(KC_9)),LGUI(LSFT(KC_0)),LGUI(LSFT(KC_MINUS)),LGUI(LSFT(KC_EQUAL)),LGUI(LSFT(KC_BSPACE)),
    LGUI(LSFT(KC_TAB)),LGUI(LSFT(KC_Q)),LGUI(LSFT(KC_W)),LGUI(LSFT(KC_E)),LGUI(LSFT(KC_R)),LGUI(LSFT(KC_T)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(LSFT(KC_Y)),LGUI(LSFT(KC_U)),LGUI(LSFT(KC_I)),LGUI(LSFT(KC_O)),LGUI(LSFT(KC_P)),LGUI(LSFT(KC_QUOTE)),
    LGUI(LSFT(KC_GRAVE)),LGUI(LSFT(KC_A)),LGUI(LSFT(KC_S)),LGUI(LSFT(KC_D)),LGUI(LSFT(KC_F)),LGUI(LSFT(KC_G)),                                                                LGUI(LSFT(KC_H)),LGUI(LSFT(KC_J)),LGUI(LSFT(KC_K)),LGUI(LSFT(KC_L)),LGUI(LSFT(KC_LBRACKET)),LGUI(LSFT(KC_RBRACKET)),
    KC_TRANSPARENT, LGUI(LSFT(KC_Z)),LGUI(LSFT(KC_X)),LGUI(LSFT(KC_C)),LGUI(LSFT(KC_V)),LGUI(LSFT(KC_B)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(LSFT(KC_N)),LGUI(LSFT(KC_M)),LGUI(LSFT(KC_COMMA)),LGUI(LSFT(KC_DOT)),LGUI(LSFT(KC_SCOLON)),KC_TRANSPARENT,
    MO(13),         KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LSFT(KC_LEFT)),LGUI(LSFT(KC_RIGHT)),                                                                                                LGUI(LSFT(KC_DOWN)),LGUI(LSFT(KC_UP)),LGUI(LSFT(KC_SLASH)),LGUI(LSFT(KC_BSLASH)),LGUI(LSFT(KC_DELETE)),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LGUI(LSFT(KC_SPACE)),MO(14),         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LSFT(KC_ENTER))
  ),
  [11] = LAYOUT_ergodox_pretty(
    LALT(LCTL(LSFT(KC_ESCAPE))),LALT(LCTL(LSFT(KC_1))),LALT(LCTL(LSFT(KC_2))),LALT(LCTL(LSFT(KC_3))),LALT(LCTL(LSFT(KC_4))),LALT(LCTL(LSFT(KC_5))),LALT(LCTL(LSFT(KC_6))),                                LALT(LCTL(LSFT(KC_7))),LALT(LCTL(LSFT(KC_8))),LALT(LCTL(LSFT(KC_9))),LALT(LCTL(LSFT(KC_0))),LALT(LCTL(LSFT(KC_MINUS))),LALT(LCTL(LSFT(KC_EQUAL))),LALT(LCTL(LSFT(KC_BSPACE))),
    LALT(LCTL(LSFT(KC_TAB))),LALT(LCTL(LSFT(KC_Q))),LALT(LCTL(LSFT(KC_W))),LALT(LCTL(LSFT(KC_E))),LALT(LCTL(LSFT(KC_R))),LALT(LCTL(LSFT(KC_T))),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LCTL(LSFT(KC_Y))),LALT(LCTL(LSFT(KC_U))),LALT(LCTL(LSFT(KC_I))),LALT(LCTL(LSFT(KC_O))),LALT(LCTL(LSFT(KC_P))),LALT(LCTL(LSFT(KC_QUOTE))),
    LALT(LCTL(LSFT(KC_GRAVE))),LALT(LCTL(LSFT(KC_A))),LALT(LCTL(LSFT(KC_S))),LALT(LCTL(LSFT(KC_D))),LALT(LCTL(LSFT(KC_F))),LALT(LCTL(LSFT(KC_G))),                                                                LALT(LCTL(LSFT(KC_H))),LALT(LCTL(LSFT(KC_J))),LALT(LCTL(LSFT(KC_K))),LALT(LCTL(LSFT(KC_L))),LALT(LCTL(LSFT(KC_LBRACKET))),LALT(LCTL(LSFT(KC_RBRACKET))),
    KC_TRANSPARENT, LALT(LCTL(LSFT(KC_Z))),LALT(LCTL(LSFT(KC_X))),LALT(LCTL(LSFT(KC_C))),LALT(LCTL(LSFT(KC_V))),LALT(LCTL(LSFT(KC_B))),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LCTL(LSFT(KC_N))),LALT(LCTL(LSFT(KC_M))),LALT(LCTL(LSFT(KC_COMMA))),LALT(LCTL(LSFT(KC_DOT))),LALT(LCTL(LSFT(KC_SCOLON))),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, MO(15),         LALT(LCTL(LSFT(KC_LEFT))),LALT(LCTL(LSFT(KC_RIGHT))),                                                                                                LALT(LCTL(LSFT(KC_DOWN))),LALT(LCTL(LSFT(KC_UP))),LALT(LCTL(LSFT(KC_SLASH))),LALT(LCTL(LSFT(KC_BSLASH))),LALT(LCTL(LSFT(KC_DELETE))),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LALT(LCTL(LSFT(KC_SPACE))),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(LSFT(KC_ENTER)))
  ),
  [12] = LAYOUT_ergodox_pretty(
    LALT(LCTL(LGUI(KC_ESCAPE))),LALT(LCTL(LGUI(KC_1))),LALT(LCTL(LGUI(KC_2))),LALT(LCTL(LGUI(KC_3))),LALT(LCTL(LGUI(KC_4))),LALT(LCTL(LGUI(KC_5))),LALT(LCTL(LGUI(KC_6))),                                LALT(LCTL(LGUI(KC_7))),LALT(LCTL(LGUI(KC_8))),LALT(LCTL(LGUI(KC_9))),LALT(LCTL(LGUI(KC_0))),LALT(LCTL(LGUI(KC_MINUS))),LALT(LCTL(LGUI(KC_EQUAL))),LALT(LCTL(LGUI(KC_BSPACE))),
    LALT(LCTL(LGUI(KC_TAB))),LALT(LCTL(LGUI(KC_Q))),LALT(LCTL(LGUI(KC_W))),LALT(LCTL(LGUI(KC_E))),LALT(LCTL(LGUI(KC_R))),LALT(LCTL(LGUI(KC_T))),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LCTL(LGUI(KC_Y))),LALT(LCTL(LGUI(KC_U))),LALT(LCTL(LGUI(KC_I))),LALT(LCTL(LGUI(KC_O))),LALT(LCTL(LGUI(KC_P))),LALT(LCTL(LGUI(KC_QUOTE))),
    LALT(LCTL(LGUI(KC_GRAVE))),LALT(LCTL(LGUI(KC_A))),LALT(LCTL(LGUI(KC_S))),LALT(LCTL(LGUI(KC_D))),LALT(LCTL(LGUI(KC_F))),LALT(LCTL(LGUI(KC_G))),                                                                LALT(LCTL(LGUI(KC_H))),LALT(LCTL(LGUI(KC_J))),LALT(LCTL(LGUI(KC_K))),LALT(LCTL(LGUI(KC_L))),LALT(LCTL(LGUI(KC_LBRACKET))),LALT(LCTL(LGUI(KC_RBRACKET))),
    MO(15),         LALT(LCTL(LGUI(KC_Z))),LALT(LCTL(LGUI(KC_X))),LALT(LCTL(LGUI(KC_C))),LALT(LCTL(LGUI(KC_V))),LALT(LCTL(LGUI(KC_B))),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LCTL(LGUI(KC_N))),LALT(LCTL(LGUI(KC_M))),LALT(LCTL(LGUI(KC_COMMA))),LALT(LCTL(LGUI(KC_DOT))),LALT(LCTL(LGUI(KC_SCOLON))),MO(15),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(LGUI(KC_LEFT))),LALT(LCTL(LGUI(KC_RIGHT))),                                                                                                LALT(LCTL(LGUI(KC_DOWN))),LALT(LCTL(LGUI(KC_UP))),LALT(LCTL(LGUI(KC_SLASH))),LALT(LCTL(LGUI(KC_BSLASH))),LALT(LCTL(LGUI(KC_DELETE))),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LALT(LCTL(LGUI(KC_SPACE))),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(LGUI(KC_ENTER)))
  ),
  [13] = LAYOUT_ergodox_pretty(
    LCTL(LGUI(LSFT(KC_ESCAPE))),LCTL(LGUI(LSFT(KC_1))),LCTL(LGUI(LSFT(KC_2))),LCTL(LGUI(LSFT(KC_3))),LCTL(LGUI(LSFT(KC_4))),LCTL(LGUI(LSFT(KC_5))),LCTL(LGUI(LSFT(KC_6))),                                LCTL(LGUI(LSFT(KC_7))),LCTL(LGUI(LSFT(KC_8))),LCTL(LGUI(LSFT(KC_9))),LCTL(LGUI(LSFT(KC_0))),LCTL(LGUI(LSFT(KC_MINUS))),LCTL(LGUI(LSFT(KC_EQUAL))),LCTL(LGUI(LSFT(KC_BSPACE))),
    LCTL(LGUI(LSFT(KC_TAB))),LCTL(LGUI(LSFT(KC_Q))),LCTL(LGUI(LSFT(KC_W))),LCTL(LGUI(LSFT(KC_E))),LCTL(LGUI(LSFT(KC_R))),LCTL(LGUI(LSFT(KC_T))),KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(LGUI(LSFT(KC_Y))),LCTL(LGUI(LSFT(KC_U))),LCTL(LGUI(LSFT(KC_I))),LCTL(LGUI(LSFT(KC_O))),LCTL(LGUI(LSFT(KC_P))),LCTL(LGUI(LSFT(KC_QUOTE))),
    LCTL(LGUI(LSFT(KC_GRAVE))),LCTL(LGUI(LSFT(KC_A))),LCTL(LGUI(LSFT(KC_S))),LCTL(LGUI(LSFT(KC_D))),LCTL(LGUI(LSFT(KC_F))),LCTL(LGUI(LSFT(KC_G))),                                                                LCTL(LGUI(LSFT(KC_H))),LCTL(LGUI(LSFT(KC_J))),LCTL(LGUI(LSFT(KC_K))),LCTL(LGUI(LSFT(KC_L))),LCTL(LGUI(LSFT(KC_LBRACKET))),LCTL(LGUI(LSFT(KC_RBRACKET))),
    KC_TRANSPARENT, LCTL(LGUI(LSFT(KC_Z))),LCTL(LGUI(LSFT(KC_X))),LCTL(LGUI(LSFT(KC_C))),LCTL(LGUI(LSFT(KC_V))),LCTL(LGUI(LSFT(KC_B))),KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(LGUI(LSFT(KC_N))),LCTL(LGUI(LSFT(KC_M))),LCTL(LGUI(LSFT(KC_COMMA))),LCTL(LGUI(LSFT(KC_DOT))),LCTL(LGUI(LSFT(KC_SCOLON))),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LGUI(LSFT(KC_LEFT))),LCTL(LGUI(LSFT(KC_RIGHT))),                                                                                                LCTL(LGUI(LSFT(KC_DOWN))),LCTL(LGUI(LSFT(KC_UP))),LCTL(LGUI(LSFT(KC_SLASH))),LCTL(LGUI(LSFT(KC_BSLASH))),LCTL(LGUI(LSFT(KC_DELETE))),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LCTL(LGUI(LSFT(KC_SPACE))),MO(15),         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LGUI(LSFT(KC_ENTER)))
  ),
  [14] = LAYOUT_ergodox_pretty(
    LALT(LGUI(LSFT(KC_ESCAPE))),LALT(LGUI(LSFT(KC_1))),LALT(LGUI(LSFT(KC_2))),LALT(LGUI(LSFT(KC_3))),LALT(LGUI(LSFT(KC_4))),LALT(LGUI(LSFT(KC_5))),LALT(LGUI(LSFT(KC_6))),                                LALT(LGUI(LSFT(KC_7))),LALT(LGUI(LSFT(KC_8))),LALT(LGUI(LSFT(KC_9))),LALT(LGUI(LSFT(KC_0))),LALT(LGUI(LSFT(KC_MINUS))),LALT(LGUI(LSFT(KC_EQUAL))),LALT(LGUI(LSFT(KC_BSPACE))),
    LALT(LGUI(LSFT(KC_TAB))),LALT(LGUI(LSFT(KC_Q))),LALT(LGUI(LSFT(KC_W))),LALT(LGUI(LSFT(KC_E))),LALT(LGUI(LSFT(KC_R))),LALT(LGUI(LSFT(KC_T))),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LGUI(LSFT(KC_Y))),LALT(LGUI(LSFT(KC_U))),LALT(LGUI(LSFT(KC_I))),LALT(LGUI(LSFT(KC_O))),LALT(LGUI(LSFT(KC_P))),LALT(LGUI(LSFT(KC_QUOTE))),
    LALT(LGUI(LSFT(KC_GRAVE))),LALT(LGUI(LSFT(KC_A))),LALT(LGUI(LSFT(KC_S))),LALT(LGUI(LSFT(KC_D))),LALT(LGUI(LSFT(KC_F))),LALT(LGUI(LSFT(KC_G))),                                                                LALT(LGUI(LSFT(KC_H))),LALT(LGUI(LSFT(KC_J))),LALT(LGUI(LSFT(KC_K))),LALT(LGUI(LSFT(KC_L))),LALT(LGUI(LSFT(KC_LBRACKET))),LALT(LGUI(LSFT(KC_RBRACKET))),
    KC_TRANSPARENT, LALT(LGUI(LSFT(KC_Z))),LALT(LGUI(LSFT(KC_X))),LALT(LGUI(LSFT(KC_C))),LALT(LGUI(LSFT(KC_V))),LALT(LGUI(LSFT(KC_B))),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LGUI(LSFT(KC_N))),LALT(LGUI(LSFT(KC_M))),LALT(LGUI(LSFT(KC_COMMA))),LALT(LGUI(LSFT(KC_DOT))),LALT(LGUI(LSFT(KC_SCOLON))),KC_TRANSPARENT,
    MO(15),         KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LSFT(KC_LEFT))),LALT(LGUI(LSFT(KC_RIGHT))),                                                                                                LALT(LGUI(LSFT(KC_DOWN))),LALT(LGUI(LSFT(KC_UP))),LALT(LGUI(LSFT(KC_SLASH))),LALT(LGUI(LSFT(KC_BSLASH))),LALT(LGUI(LSFT(KC_DELETE))),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LALT(LGUI(LSFT(KC_SPACE))),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LSFT(KC_ENTER)))
  ),
  [15] = LAYOUT_ergodox_pretty(
    LALT(LCTL(LGUI(LSFT(KC_ESCAPE)))),LALT(LCTL(LGUI(LSFT(KC_1)))),LALT(LCTL(LGUI(LSFT(KC_2)))),LALT(LCTL(LGUI(LSFT(KC_3)))),LALT(LCTL(LGUI(LSFT(KC_4)))),LALT(LCTL(LGUI(LSFT(KC_5)))),LALT(LCTL(LGUI(LSFT(KC_6)))),                                LALT(LCTL(LGUI(LSFT(KC_7)))),LALT(LCTL(LGUI(LSFT(KC_8)))),LALT(LCTL(LGUI(LSFT(KC_9)))),LALT(LCTL(LGUI(LSFT(KC_0)))),LALT(LCTL(LGUI(LSFT(KC_MINUS)))),LALT(LCTL(LGUI(LSFT(KC_EQUAL)))),LALT(LCTL(LGUI(LSFT(KC_BSPACE)))),
    LALT(LCTL(LGUI(LSFT(KC_TAB)))),LALT(LCTL(LGUI(LSFT(KC_Q)))),LALT(LCTL(LGUI(LSFT(KC_W)))),LALT(LCTL(LGUI(LSFT(KC_E)))),LALT(LCTL(LGUI(LSFT(KC_R)))),LALT(LCTL(LGUI(LSFT(KC_T)))),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LCTL(LGUI(LSFT(KC_Y)))),LALT(LCTL(LGUI(LSFT(KC_U)))),LALT(LCTL(LGUI(LSFT(KC_I)))),LALT(LCTL(LGUI(LSFT(KC_O)))),LALT(LCTL(LGUI(LSFT(KC_P)))),LALT(LCTL(LGUI(LSFT(KC_QUOTE)))),
    LALT(LCTL(LGUI(LSFT(KC_GRAVE)))),LALT(LCTL(LGUI(LSFT(KC_A)))),LALT(LCTL(LGUI(LSFT(KC_S)))),LALT(LCTL(LGUI(LSFT(KC_D)))),LALT(LCTL(LGUI(LSFT(KC_F)))),LALT(LCTL(LGUI(LSFT(KC_G)))),                                                                LALT(LCTL(LGUI(LSFT(KC_H)))),LALT(LCTL(LGUI(LSFT(KC_J)))),LALT(LCTL(LGUI(LSFT(KC_K)))),LALT(LCTL(LGUI(LSFT(KC_L)))),LALT(LCTL(LGUI(LSFT(KC_LBRACKET)))),LALT(LCTL(LGUI(LSFT(KC_RBRACKET)))),
    KC_TRANSPARENT, LALT(LCTL(LGUI(LSFT(KC_Z)))),LALT(LCTL(LGUI(LSFT(KC_X)))),LALT(LCTL(LGUI(LSFT(KC_C)))),LALT(LCTL(LGUI(LSFT(KC_V)))),LALT(LCTL(LGUI(LSFT(KC_B)))),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LCTL(LGUI(LSFT(KC_N)))),LALT(LCTL(LGUI(LSFT(KC_M)))),LALT(LCTL(LGUI(LSFT(KC_COMMA)))),LALT(LCTL(LGUI(LSFT(KC_DOT)))),LALT(LCTL(LGUI(LSFT(KC_SCOLON)))),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(LGUI(LSFT(KC_LEFT)))),LALT(LCTL(LGUI(LSFT(KC_RIGHT)))),                                                                                                LALT(LCTL(LGUI(LSFT(KC_DOWN)))),LALT(LCTL(LGUI(LSFT(KC_UP)))),LALT(LCTL(LGUI(LSFT(KC_SLASH)))),LALT(LCTL(LGUI(LSFT(KC_BSLASH)))),LALT(LCTL(LGUI(LSFT(KC_DELETE)))),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LALT(LCTL(LGUI(LSFT(KC_SPACE)))),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(LGUI(LSFT(KC_ENTER))))
  ),
  [16] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PGUP,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_0,           KC_PERC,        KC_HASH,        KC_DLR,         KC_TRANSPARENT,                                                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LSHIFT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PGDOWN,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RSHIFT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [17] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       KC_EQUAL,       KC_BSPACE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_UP,          KC_7,           KC_8,           KC_9,           KC_KP_ASTERISK, KC_KP_SLASH,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_KP_MINUS,
    KC_LSHIFT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PSCREEN,                                     KC_TRANSPARENT, KC_LPRN,        KC_1,           KC_2,           KC_3,           KC_RPRN,        KC_KP_ENTER,
    KC_LCTRL,       KC_TRANSPARENT, KC_LGUI,        KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_DOT,         KC_0,           KC_EQUAL,       KC_TRANSPARENT,
                                                                                                    RGB_MOD,        KC_TRANSPARENT, KC_PGUP,        KC_UP,
                                                                                                                    RGB_HUI,        KC_LEFT,
                                                                                    RGB_VAD,        RGB_VAI,        RGB_HUD,        KC_PGDOWN,      KC_DOWN,        KC_RIGHT
  ),
  [18] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DYN_REC_STOP,
                                                                                                                    KC_TRANSPARENT, DYN_REC_START1,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DYN_REC_START2, DYN_MACRO_PLAY1,DYN_MACRO_PLAY2
  ),
  [19] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F11,         KC_F12,         KC_F13,         KC_F14,         KC_F15,         KC_F16,                                         KC_F17,         KC_F18,         KC_F19,         KC_F20,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F21,         KC_F22,         KC_F23,         KC_F24,         KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LSHIFT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PSCREEN,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RSHIFT,
    KC_LCTRL,       KC_TRANSPARENT, KC_LGUI,        KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_LALT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


rgblight_config_t rgblight_config;
bool disable_layer_color = 0;

bool suspended = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case TOGGLE_LAYER_COLOR:
      if (record->event.pressed) {
        disable_layer_color ^= 1;
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 1:
        ergodox_right_led_1_on();
        break;
      case 2:
        ergodox_right_led_2_on();
        break;
      case 3:
        ergodox_right_led_3_on();
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      default:
        break;
    }
    switch (layer) {
      case 1:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(104,255,255);
        }
        break;
      case 2:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(183,255,255);
        }
        break;
      case 3:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(141,255,255);
        }
        break;
      case 4:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(231,255,255);
        }
        break;
      case 5:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(136,255,255);
        }
        break;
      case 6:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(166,154,255);
        }
        break;
      case 7:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(0,203,255);
        }
        break;
      case 8:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(202,238,255);
        }
        break;
      case 9:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(18,247,255);
        }
        break;
      case 10:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(190,159,255);
        }
        break;
      case 11:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(228,246,255);
        }
        break;
      case 12:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(93,177,178);
        }
        break;
      case 13:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(160,213,191);
        }
        break;
      case 14:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(207,183,160);
        }
        break;
      case 15:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(114,204,232);
        }
        break;
      case 16:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(198,255,255);
        }
        break;
      case 17:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(70,255,206);
        }
        break;
      case 18:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(115,152,152);
        }
        break;
      case 19:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(255,255,255);
        }
        break;
      default:
        if(!disable_layer_color) {
          rgblight_config.raw = eeconfig_read_rgblight();
          if(rgblight_config.enable == true) {
            rgblight_enable();
            rgblight_mode(rgblight_config.mode);
            rgblight_sethsv(rgblight_config.hue, rgblight_config.sat, rgblight_config.val);
          }
          else {
            rgblight_disable();
          }
        }
        break;
    }
    return state;

};

void keyboard_post_init_user(void) {
  layer_state_set_user(layer_state);
}
