#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINS,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_LEFT_BRACKET,
        KC_ESC , KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  , KC_SCLN,KC_RIGHT_BRACKET,
        KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT , KC_SLSH,KC_BSLASH,
        KC_LCTL, KC_LGUI, KC_HOME, KC_LALT,                                                     KC_EQUAL,KC_END, KC_PSCR,KC_INS,
                                         LOWER, KC_SPC,                           KC_ENT, RAISE,
                                         KC_BSPC, KC_LCTL,                        KC_ALGR, KC_DEL,
                                         KC_TAB,KC_LSFT,                          KC_RSFT, KC_LALT
				),

    [_LOWER] = LAYOUT_5x6(
				//               ^          @           $                   `               %                 \         |          /
        XXXXXXX,XXXXXXX,ALGR(KC_6),ALGR(KC_V),ALGR(KC_SEMICOLON),ALGR(KC_H),       LSFT(KC_MINUS),ALGR(KC_Q),ALGR(KC_W),LSFT(KC_LBRC),XXXXXXX,KC_DEL,
				//~         #        -        +         _          !                       '              :             ;         *               &
				ALGR(KC_A),ALGR(KC_X),KC_SLASH,KC_1,LSFT(KC_SLASH),LSFT(KC_QUOT),          ALGR(KC_QUOTE),LSFT(KC_DOT),KC_GRAVE,ALGR(KC_SLASH),ALGR(KC_C),KC_MUTE,
				//               <               [           (            {                 }          )              ]         >              \          volup
				XXXXXXX,KC_MS_U,ALGR(KC_COMMA),ALGR(KC_F),LSFT(KC_RBRC),ALGR(KC_B),        ALGR(KC_N),LSFT(KC_BSLS),ALGR(KC_G),ALGR(KC_DOT),ALGR(KC_Q),KC_VOLU,
				KC_MS_L,KC_MS_D,KC_MS_R,XXXXXXX,XXXXXXX,XXXXXXX,                         XXXXXXX,KC_BTN1,KC_BTN2,XXXXXXX,XXXXXXX,KC_VOLD,
				XXXXXXX,_______,XXXXXXX,XXXXXXX,                                         XXXXXXX,KC_MPLY,KC_MPRV,KC_MNXT,
																							_______,_______,               _______,_______,
																							_______,_______,               _______,_______,
																							_______,_______,               _______,_______

    ),

    [_RAISE] = LAYOUT_5x6(
				KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
				XXXXXXX,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,XXXXXXX,                        XXXXXXX, LSFT(KC_7), LSFT(KC_8), LSFT(KC_9),XXXXXXX,XXXXXXX,
				//                                                                                                         -
				XXXXXXX,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,XXXXXXX,                        XXXXXXX, LSFT(KC_4), LSFT(KC_5), LSFT(KC_6),KC_SLASH,XXXXXXX,
				//                                                                                                         +
				XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                        XXXXXXX, LSFT(KC_1), LSFT(KC_2), LSFT(KC_3),KC_1,XXXXXXX,
				XXXXXXX,_______,XXXXXXX,KC_PSCR,                                                        XXXXXXX,LSFT(KC_0) ,XXXXXXX,XXXXXXX,
																							_______,_______,            _______,_______,
																							_______,_______,            _______,_______,
																							_______,_______,            _______,_______
    )
};

    // [_LOWER] = LAYOUT_5x6(
				// //               -            +        $                                                       \         |           /
    //     XXXXXXX,XXXXXXX,UC(0x002D),UC(0x002B),UC(0x0024),XXXXXXX,                     XXXXXXX,UC(0x005C),UC(0x007C),UC(0x002F),XXXXXXX,KC_DEL,
				// //~          ^         @           #         _          !                %          :           ;         *           &
				// UC(0x007E),UC(0x005E),UC(0x0040),UC(0x0023),UC(0x005F),UC(0x0021),      UC(0x0025),UC(0x003A),UC(0x003B),UC(0x002A),UC(0x0026),KC_MUTE,
				// //               <         [           (        {                       }          )           ]         >
				// XXXXXXX,KC_MS_U,UC(0x003C),UC(0x005B),UC(0x0028),UC(0x007B),            UC(0x007D),UC(0x0029),UC(0x005D),UC(0x003E),XXXXXXX,KC_VOLU,
				// KC_MS_L,KC_MS_D,KC_MS_R,XXXXXXX,XXXXXXX,XXXXXXX,                        XXXXXXX,KC_BTN1,KC_BTN2,XXXXXXX,XXXXXXX,KC_VOLD,
				// UNICODE_MODE_FORWARD,UNICODE_MODE_REVERSE,XXXXXXX,XXXXXXX,              XXXXXXX,KC_MPLY,KC_MPRV,KC_MNXT,
				// 																			_______,_______,            _______,_______,
				// 																			_______,_______,            _______,_______,
				// 																			_______,_______,            _______,_______
    //
    // ),
