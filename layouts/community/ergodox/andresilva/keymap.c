#include QMK_KEYBOARD_H

#define BASE 0 // default layer
#define SYMB 1 // symbols layer
#define MDIA 2 // media layer

/*
 * André Silva's Ergodox Infinity keyboard layout.
 *
 * Based on The Ordinary Layout for the Ergodox EZ keyboard, v5
 * https://github.com/qmk/qmk_firmware/tree/7f7f763598b7be7b2081a73be2124f40349d8032/layouts/community/ergodox/ordinary
 *
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/******* Base Layer ****************************************************************************************************
 *
 * ,------------------------------------------------------.       ,---------------------------------------------------.
 * |         `~ |   1  |   2  |   3  |   4  |   5  | ESC  |       |  -   |   6  |   7  |   8  |   9  |   0  | =+      |
 * |------------+------+------+------+------+-------------|       |------+------+------+------+------+------+---------|
 * | Media  Tab |   Q  |   W  |   E  |   R  |   T  |   [  |       |  ]   |   Y  |   U  |   I  |   O  |   P  | \|      |
 * |------------+------+------+------+------+------|      |       |      |------+------+------+------+------+---------|
 * | LCtrl      |   A  |   S  |   D  |   F  |   G  |------|       |------|   H  |   J  |   K  |   L  |   ;  | '"      |
 * |------------+------+------+------+------+------|Shift |       | Tab  |------+------+------+------+------+---------|
 * | LShift     |   Z  |   X  |   C  |   V  |   B  | -Tab |       |      |   N  |   M  |   ,  |   .  |  /   | RShift  |
 * `------------+------+------+------+------+-------------'       `-------------+------+------+------+------+---------'
 *     | Symbol | Meh  | Hyper| LGui | LAlt |                                   | RAlt | RGui | Hyper|  Meh | RCtrl |
 *     `------------------------------------'                                   `-----------------------------------'
 *                                          ,-------------.       ,-------------.
 *                                          | Home | End  |       | Left | Right|
 *                                   ,------|------|------|       |------+------+------.
 *                                   |      |      | PgUp |       |  Up  |      |      |
 *                                   |Backsp| Del  |------|       |------| Enter| Space|
 *                                   |      |      | PgDn |       | Down |      |      |
 *                                   `--------------------'       `--------------------'
 */
[BASE] = LAYOUT_ergodox(
    // left hand
    KC_GRV,           KC_1,         KC_2,         KC_3,    KC_4,    KC_5,    KC_ESC,
    LT(MDIA, KC_TAB), KC_Q,         KC_W,         KC_E,    KC_R,    KC_T,    KC_LBRC,
    KC_LCTL,          KC_A,         KC_S,         KC_D,    KC_F,    KC_G,
    KC_LSFT,          KC_Z,         KC_X,         KC_C,    KC_V,    KC_B,    LSFT(KC_TAB),
    MO(SYMB),         MEH_T(KC_NO), ALL_T(KC_NO), KC_LGUI, KC_LALT,
                                                                    KC_HOME, KC_END,
                                                                             KC_PGUP,
                                                           KC_BSPC, KC_DEL,  KC_PGDN,

    // right hand
    KC_MINS,          KC_6,         KC_7,         KC_8,    KC_9,    KC_0,    KC_EQL,
    KC_RBRC,          KC_Y,         KC_U,         KC_I,    KC_O,    KC_P,    KC_BSLS,
    KC_H,             KC_J,         KC_K,         KC_L,    KC_SCLN, KC_QUOT,
    KC_TAB,           KC_N,         KC_M,         KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                    KC_RALT,      KC_RGUI, KC_HYPR, KC_MEH,  KC_RCTL,
    KC_LEFT,          KC_RGHT,
    KC_UP,
    KC_DOWN,          KC_ENT,       KC_SPC
),

/******* Symbols Layer *************************************************************************************************
 *
 * ,-----------------------------------------------------.       ,-----------------------------------------------------.
 * |           |  F1  |  F2  |  F3  |  F4  |  F5  | Esc  |       |  -   |  F6  |  F7  |  F8  |  F9  |  F10 |           |
 * |-----------+------+------+------+------+-------------|       |------+------+------+------+------+------+-----------|
 * |           |   !  |   @  |   {  |   }  |   &  |  <   |       |  >   |   |  |   7  |   8  |   9  |   /  |           |
 * |-----------+------+------+------+------+------|      |       |      |------+------+------+------+------+-----------|
 * |           |   #  |   $  |   (  |   )  |   `  |------|       |------|   /  |   4  |   5  |   6  |   *  |           |
 * |-----------+------+------+------+------+------|  '   |       |  "   |------+------+------+------+------+-----------|
 * |       ;   |   %  |   ^  |   [  |   ]  |   ~  |      |       |      |   \  |   1  |   2  |   3  |   -  |           |
 * `-----------+------+------+------+------+-------------'       `-------------+------+------+------+------+-----------'
 *     |       |   &  |   *  |   <  |   >  |                                   |   0  |   .  |   =  |   +  | Enter |
 *     `-----------------------------------'                                   `-----------------------------------'
 *                                         ,-------------.       ,-------------.
 *                                         | |||| | |||| |       | |||| | |||| |
 *                                  ,------|------|------|       |------+------+------.
 *                                  | Plus | Equal| |||| |       | |||| | Under| Dash |
 *                                  |      |      |------|       |------| Score|      |
 *                                  |  +   |   =  | |||| |       | |||| |  _   |  -   |
 *                                  `--------------------'       `--------------------'
 */
[SYMB] = LAYOUT_ergodox(
    // left hand
    KC_TRNS,       KC_F1,         KC_F2,   KC_F3,         KC_F4,        KC_F5,   KC_ESC,
    KC_TRNS,       KC_EXLM,       KC_AT,   KC_LCBR,       KC_RCBR,      KC_AMPR, LSFT(KC_COMM),
    KC_TRNS,       KC_HASH,       KC_DLR,  KC_LPRN,       KC_RPRN,      KC_GRV,
    KC_SCLN,       KC_PERC,       KC_CIRC, KC_LBRC,       KC_RBRC,      KC_TILD, KC_QUOT,
    KC_TRNS,       KC_AMPR,       KC_ASTR, LSFT(KC_COMM), LSFT(KC_DOT),
                                                                        KC_NO,   KC_NO,
                                                                                 KC_NO,
                                                          KC_PLUS,      KC_EQL,  KC_NO,

    // right hand
    KC_MINS,       KC_F6,         KC_F7,   KC_F8,         KC_F9,        KC_F10,  KC_TRNS,
    LSFT(KC_DOT),  KC_PIPE,       KC_7,    KC_8,          KC_9,         KC_SLSH, KC_TRNS,
    KC_SLSH,       KC_4,          KC_5,    KC_6,          KC_ASTR,      KC_TRNS,
    LSFT(KC_QUOT), KC_BSLS,       KC_1,    KC_2,          KC_3,         KC_MINS, KC_TRNS,
                                  KC_0,    KC_DOT,        KC_EQL,       KC_PLUS, KC_ENT,
    KC_NO,         KC_NO,
    KC_NO,
    KC_NO,         LSFT(KC_MINS), KC_MINS
),

/******* Media Layer *******************************************************************************************************
 *
 * ,---------------------------------------------------------------.    ,---------------------------------------------------------------.
 * |      |   F11   |   F12   |   F13   |   F14   |   F15   | Esc  |    | |||| |   F16   |   F17   |   F18   |   F19   |   F20   |      |
 * |------+---------+---------+---------+---------+----------------|    |------+---------+---------+---------+---------+---------+------|
 * |      |Shut Down| ||||||| |Mouse Up | ||||||| |Volume Up|Scroll|    |Scroll|PrintScrn|   Home  |    Up   |   PgUp  |   Mail  |      |
 * |------+---------+---------+---------+---------+---------|  Up  |    |  Up  |---------+---------+---------+---------+---------+------|
 * |      |  Sleep  |MouseLeft|MouseDown|MouseRght|Volume Dn|------|    |------| Num Lock|   Left  |   Down  |   Right | MyComp  |      |
 * |------+---------+---------+---------+---------+---------|Scroll|    |Scroll|---------+---------+---------+---------+---------+------|
 * |      |  ||||   | ||||||| |MouseDown| ||||||| |  Mute   | Down |    | Down |  ||||   |   End   |   Down  |   PgDn  |  ||||   |      |
 * `------+---------+---------+---------+---------+----------------'    `----------------+---------+---------+---------+---------+------'
 *  | ||| |  ||||   |  MClick | LClick  |  R Click|                                      |  Insert |   Del   |   ||||  |  ||||   | ||| |
 *  `---------------------------------------------'                                      `---------------------------------------------'
 *                                                   ,-------------.    ,-------------.
 *                                                   | Stop |Refrsh|    | Prev | Next |
 *                                            ,------|------|------|    |------+------+------.
 *                                            |Brwser|Brwser|Search|    |VolUp |      |      |
 *                                            |Back  | Fwd  |------|    |------| Stop | Play-|
 *                                            |      |      | Home |    |VolDn |      | Pause|
 *                                            `--------------------'    `--------------------'
 */
[MDIA] = LAYOUT_ergodox(
    // left hand
    KC_TRNS, KC_F11,   KC_F12,  KC_F13,   KC_F14,  KC_F15,  KC_ESC,
    KC_TRNS, KC_POWER, KC_NO,   KC_MS_U,  KC_NO,   KC_VOLU, KC_WH_U,
    KC_TRNS, KC_SLEP,  KC_MS_L, KC_MS_D,  KC_MS_R, KC_VOLD,
    KC_TRNS, KC_NO,    KC_NO,   KC_MS_D,  KC_NO,   KC_MUTE, KC_WH_D,
    KC_NO,   KC_NO,    KC_BTN3, KC_BTN1,  KC_BTN2,
                                                   KC_WSTP, KC_WREF,
                                                            KC_WSCH,
                                          KC_WBAK, KC_NO,   KC_WHOM,

    // right hand
    KC_NO,   KC_F16,   KC_F17,  KC_F18,   KC_F19,  KC_F20,  KC_TRNS,
    KC_WH_U, KC_PSCR,  KC_HOME, KC_UP,    KC_PGUP, KC_MAIL, KC_TRNS,
    KC_NLCK, KC_LEFT,  KC_DOWN, KC_RIGHT, KC_MYCM, KC_TRNS,
    KC_WH_D, KC_NO,    KC_END,  KC_DOWN,  KC_PGDN, KC_NO,   KC_TRNS,
                       KC_INS,  KC_DEL,   KC_NO,   KC_NO,   KC_NO,
    KC_MPRV, KC_MNXT,
    KC_VOLU,
    KC_VOLD, KC_MSTP,  KC_MPLY
)
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
    // shift or caps lock turns on red light
    if((keyboard_report->mods & MOD_BIT(KC_LSFT))
    || (keyboard_report->mods & MOD_BIT(KC_RSFT))
    || (host_keyboard_leds() & (1<<USB_LED_CAPS_LOCK))) {
        ergodox_right_led_1_on();
    } else {
        ergodox_right_led_1_off();
    }

    // Symbol layer turns on green light
    if(layer_state & (1UL<<SYMB)) {
        ergodox_right_led_2_on();
    } else {
        ergodox_right_led_2_off();
    }

    // Media layer turns on blue light
    if(layer_state & (1UL<<MDIA)) {
        ergodox_right_led_3_on();
    } else {
        ergodox_right_led_3_off();
    }
};
