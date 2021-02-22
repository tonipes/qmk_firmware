#include QMK_KEYBOARD_H

/*---Layers-------------------------------------------- */
// #define LAYER_BASE 0
// #define LAYER_FUNC 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Qwerty
    * ,----------------------------------------------------------------------------------------.
    * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bkspc  |
    * |----------------------------------------------------------------------------------------+
    * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \  |
    * |----------------------------------------------------------------------------------------+
    * |  Ctrl   |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter   |
    * |----------------------------------------------------------------------------------------+
    * | Shift    |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  | RSh |  U  | Ins |
    * |----------------------------------------------------------------------------------------+
    * |  Fn  |  Alt  |  Gui  |              Space                | Gui |  Fn |  L  |  D  |  R  |
    * `----------------------------------------------------------------------------------------'
    */

    LAYOUT_directional(
        KC_GESC , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_MINS , KC_EQL  , _______ , KC_BSPC ,
        KC_TAB  ,           KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    , KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , KC_LBRC , KC_RBRC , KC_BSLS ,
        KC_LCTL ,           KC_A    , KC_S    , KC_D    , KC_F    , KC_G    , KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_QUOT , KC_ENT  ,
        KC_LSFT ,           KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    , KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT , KC_UP   , KC_INS  ,
        KC_LCTL , KC_LALT ,           KC_LGUI , KC_SPC  ,           KC_SPC  ,           KC_SPC  ,           KC_RGUI , MO(1)   , KC_LEFT , KC_DOWN , KC_RIGHT
    ),

    /* Qwerty
    * ,----------------------------------------------------------------------------------------.
    * |Grave| F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |   Del    |
    * |----------------------------------------------------------------------------------------+
    * |        | M2  | M↑  | M1  | MW↑ |     |     |     |     |     |     | Vol-| Vol+|  Mute |
    * |----------------------------------------------------------------------------------------+
    * |         | M←  | M↓  | M→  | MW↓ |     |Right|Down |Up   |Left |Prev |Next | Play/Pause |
    * |----------------------------------------------------------------------------------------+
    * |          |     |     |     |     |     |     |     |     |     |     |PrtSc|PG_UP| Ins |
    * |----------------------------------------------------------------------------------------+
    * |      |       |       |                                   |     |     | Home|PG_DN| End |
    * `----------------------------------------------------------------------------------------'
    */

    LAYOUT_directional(
        KC_GRV  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12  , _______   , KC_DEL  ,
        _______ ,           KC_BTN2 , KC_MS_U , KC_BTN1 , KC_WH_U , _______ , _______ , _______ , _______ , _______ , _______ , KC_VOLD , KC_VOLU   , KC_MUTE ,
        _______ ,           KC_MS_L , KC_MS_D , KC_MS_R , KC_WH_D , _______ , KC_LEFT , KC_DOWN , KC_UP   , KC_RIGHT, KC_MPRV , KC_MNXT , KC_MPLY   ,
        _______ ,           RGB_TOG , RGB_M_T , RGB_M_G , RGB_M_X , RGB_M_K , RGB_M_SN , RGB_M_SW , RGB_M_R , KC_MPRV , KC_MNXT , KC_PSCR , KC_PGUP   , KC_INS  ,
        _______ , _______ ,           _______ , _______ ,           _______ ,           _______ ,           _______ , _______ , KC_HOME , KC_PGDOWN , KC_END
    ),

};
