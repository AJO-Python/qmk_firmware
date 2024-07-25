#include QMK_KEYBOARD_H


// Defines names for use in layer keycodes and the keymap
enum layer_names {
  _BRACKETS,
  _COLEMAK,
  _FUNCTION,
  _GAMING,
  _LAYERS,
  _NAVIGATION,
  _NUMBER,
  _SYMBOL,
  _TEMPLATE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_COLEMAK] = LAYOUT_split_3x5_3(
    KC_Q,         KC_W,             KC_F,                   KC_P,                KC_B,                    KC_J,                  KC_L,                     KC_U,                KC_Y,              KC_QUOT,
    LCTL_T(KC_A), LALT_T(KC_R),     LGUI_T(KC_S),           LSFT_T(KC_T),        KC_G,                    KC_M,                  RSFT_T(KC_N),             RGUI_T(KC_E),        RALT_T(KC_I),      RCTL_T(KC_O),
    KC_Z,         KC_X,             KC_C,                   KC_D,                KC_V,                    KC_K,                  KC_H,                     KC_COMM,             KC_DOT,            KC_SLSH,
                                    LT(_FUNCTION, KC_ESC),  LT(_NUMBER, KC_SPC), LT(_SYMBOL, KC_TAB),     LT(_BRACKETS, KC_ENT), LT(_NAVIGATION, KC_BSPC), LT(_LAYERS, KC_DEL)
  ),

  [_NUMBER] = LAYOUT_split_3x5_3(
    _______,      _______,          _______,                _______,             _______,                 KC_MINS,               KC_7,                      KC_8,               KC_9,              KC_SCLN,
    KC_ASTR,      KC_COLON,         KC_MINS,                KC_PLUS,             KC_EQL,                  KC_DOT,                KC_4,                      KC_5,               KC_6,              KC_KP_PLUS,
    _______,      KC_SCLN,          KC_UNDERSCORE,          _______,             _______,                 KC_0,                  KC_1,                      KC_2,               KC_3,              KC_EQL,
                                    _______,                LT(4,KC_SPC),        _______,                 _______,               _______,                   _______
  ),

  [_SYMBOL] = LAYOUT_split_3x5_3(
    _______,       _______,         _______,                _______,             _______,                 LSA(KC_3),             KC_AMPR,                   KC_ASTR,            KC_NUBS,           KC_GRV,
    KC_LCTL,      KC_LALT,          KC_LGUI,                KC_LSFT,             _______,                 _______,               KC_DLR,                    KC_PERC,            KC_CIRC,           KC_PLUS,
    _______,      _______,          _______,                _______,             _______,                 _______,               KC_EXLM,                   KC_AT,              KC_NUHS,           KC_PIPE,
                                    _______,                _______,             LT(_SYMBOL, KC_ENT),     _______,               _______,                   _______
  ),

  [_TEMPLATE] = LAYOUT_split_3x5_3(
    _______,      _______,          _______,            _______,          _______,                        _______,               _______,                  _______,             _______,           _______,
    _______,      _______,          _______,            _______,          _______,                        _______,               _______,                  _______,             _______,           _______,
    _______,      _______,          _______,            _______,          _______,                        _______,               _______,                  _______,             _______,           _______,
                                    _______,            _______,          _______,                        _______,               _______,                  _______
  ),

  [_FUNCTION] = LAYOUT_split_3x5_3(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_PSCR,     KC_F7,          KC_F8,         KC_F9,          KC_F12,
    KC_LCTL,        KC_LALT,        KC_LGUI,        KC_LSFT,        KC_NO,             KC_SCRL,     KC_F4,          KC_F5,         KC_F6,          KC_F11,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_PAUS,     KC_F1,          KC_F2,         KC_F3,          KC_F10,
                                    LT(6,KC_ESC),   KC_NO,          KC_NO,             KC_NO,       KC_NO,          TG(_GAMING)
      ),

  [_NAVIGATION] = LAYOUT_split_3x5_3(
    KC_PGUP,      KC_MPRV,          KC_MPLY,            KC_MNXT,          KC_VOLU,                        _______,               KC_PGDN,                  KC_PGUP,             _______,           _______,
    KC_LCTL,      KC_LALT,          KC_LGUI,            KC_LSFT,          KC_VOLD,                        KC_LEFT,               KC_DOWN,                  KC_UP,               KC_RIGHT,          KC_RCTL,
    _______,      _______,          KC_INS,             _______,          _______,                        _______,               KC_HOME,                  KC_END,              KC_VOLU,           _______,
                                    _______,            _______,          _______,                        _______,               LT(1,KC_BSPC),            _______
  ),

  [_LAYERS] = LAYOUT_split_3x5_3(
    _______,      _______,          _______,            _______,          _______,                        _______,               _______,                  _______,             _______,           _______,
    _______,      _______,          _______,            _______,          _______,                        _______,               _______,                  _______,             _______,           _______,
    _______,      _______,          _______,            _______,          _______,                        _______,               _______,                  _______,             _______,           _______,
                                    _______,            _______,          _______,                        _______,               _______,                  _______
  ),

  [_BRACKETS] = LAYOUT_split_3x5_3(
    _______,      _______,          _______,            _______,          _______,                        _______,               _______,                  _______,             _______,           _______,
    _______,      _______,          _______,            _______,          _______,                        _______,               _______,                  _______,             _______,           _______,
    _______,      _______,          _______,            _______,          _______,                        _______,               _______,                  _______,             _______,           _______,
                                    _______,            _______,          _______,                        _______,               _______,                  _______
  ),
  /* Gaming
  *
  * ,----------------------------------.           ,----------------------------------.
  * |   Q  |   W  |   E  |   R  |   T  |           |   Y  |   U  |   I  |   O  |   P  |
  * |------+------+------+------+------|           |------+------+------+------+------|
  * |   A  |   S  |   D  |   F  |   G  |           |   H  |   J  |   K  |   L  |   ;  |
  * |------+------+------+------+------|           |------+------+------+------+------|
  * |   Z  |   X  |   C  |   V  |   B  |           |   N  |   M  |   ,  |   .  |   /  |
  * `----------------------------------'           `----------------------------------'
  *                  ,--------------------.    ,--------------------.
  *                  | LOWER| Enter|   '  |    |BckSpc| Space| RAISE|
  *                  `--------------------'    `--------------------.
  */

  [_GAMING] = LAYOUT_split_3x5_3(
    KC_TAB,       KC_Q,         KC_W,         KC_E,         KC_R,                    KC_T,         KC_Y,    KC_U,         KC_I,         KC_O,
    KC_LSFT,      KC_A,         KC_S,         KC_D,         KC_F,                    KC_G,         KC_H,    RSFT_T(KC_J), RALT_T(KC_K), RGUI_T(KC_L),
    KC_LCTL,      KC_Z,         KC_X,         KC_C,         KC_V,                    KC_B,         KC_N,    KC_M,         KC_COMM,      KC_DOT,
                                KC_LALT,      KC_SPC,       KC_ENTER,                KC_BSPC,      KC_SPC,  KC_I
  )
};

bool should_process_keypress(void) {
  return true;
}

uint8_t mod_state;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  static uint16_t my_comma_timer;
  static uint16_t my_dot_timer;
  static uint16_t my_slash_timer;

  mod_state = get_mods();
  switch (keycode) {

    // - on tap -> _ on hold
    // case KC_MINS: {
    //   if (record->event.pressed) {
    //     my_slash_timer = timer_read();
    //   } else {
    //     if (timer_elapsed(my_slash_timer) < TAPPING_TERM) {
    //       SEND_STRING("-");
    //     } else {
    //       SEND_STRING("_");
    //       }
    //     return true;
    //   }
    //   return false;
    // }

    // / on tap -> \ on hold
    case KC_SLSH: {
      if (record->event.pressed) {
        my_slash_timer = timer_read();
      } else {
        if (timer_elapsed(my_slash_timer) < TAPPING_TERM) {
          SEND_STRING("/");
        } else {
          if (mod_state & MOD_MASK_SHIFT) {
            SEND_STRING("!");
          } else {
            register_code(KC_NUBS);
            unregister_code(KC_NUBS);
          }
        }
        return true;
      }
      return false;
    }

    // , on tap -> ; on hold
    case KC_COMM: {
      if (record->event.pressed) {
        my_comma_timer = timer_read();
      } else {
        if (timer_elapsed(my_comma_timer) < TAPPING_TERM) {
          SEND_STRING(",");
        } else {
          SEND_STRING(";");
        }
        return true;
      }
      return false;
    }

    // . on tap -> : on hold
    case KC_DOT: {
      if (record->event.pressed) {
        my_dot_timer = timer_read();
      } else {
        if (timer_elapsed(my_dot_timer) < TAPPING_TERM) {
          SEND_STRING(".");
        } else {
          SEND_STRING(":");
        }
        return true;
      }
      return false;
    }

    // shift ' == "
    case KC_QUOT: {
      if (record->event.pressed) {
        if (mod_state & MOD_MASK_SHIFT) {
          register_code(KC_2);
        } else {
          register_code(KC_QUOT);
        }
      } else {
          unregister_code(KC_2);
          unregister_code(KC_QUOT);
      }
      return false;
    }

    // shift backtick == ```
    case KC_GRV: {
      if (record->event.pressed) {
        if (mod_state & MOD_MASK_SHIFT) {
          del_mods(MOD_MASK_SHIFT);
          SEND_STRING("```");
          set_mods(mod_state);
        } else {
          register_code(KC_GRV);
        }
      } else {
          unregister_code(KC_GRV);
      }
      return false;
    }

    // PWD_0
    // case PWD_0: {
    //   if (record->event.pressed) {
    //     if (mod_state & MOD_MASK_CTRL) {
    //       del_mods(MOD_MASK_CTRL);
    //       SEND_STRING("{{PWD_0}}");
    //       set_mods(mod_state);
    //       register_code(KC_ENTER);
    //       unregister_code(KC_ENTER);
    //     } else {
    //       register_code(KC_PSCR);
    //       unregister_code(KC_PSCR);
    //     }
    //   }
    //   return false;
    // }

    // // PWD_1
    // case PWD_1: {
    //   if (record->event.pressed) {
    //     if (mod_state & MOD_MASK_CTRL) {
    //       del_mods(MOD_MASK_CTRL);
    //       SEND_STRING("{{PWD_1}}");
    //       set_mods(mod_state);
    //       register_code(KC_ENTER);
    //       unregister_code(KC_ENTER);
    //     } else {
    //       add_mods(MOD_MASK_SHIFT);
    //       register_code(KC_QUOT);
    //       unregister_code(KC_QUOT);
    //       set_mods(mod_state);
    //     }
    //   }
    //   return false;
    // }

    // // end switch case
    // return true;
  };
  return true;
}
