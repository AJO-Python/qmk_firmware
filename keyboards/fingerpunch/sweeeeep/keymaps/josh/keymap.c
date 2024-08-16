#include QMK_KEYBOARD_H
#include "features/socd_cleaner.h"

// Prepare WASD for using SOCD
socd_cleaner_t socd_v = {{KC_W, KC_S}, SOCD_CLEANER_LAST};
socd_cleaner_t socd_h = {{KC_A, KC_D}, SOCD_CLEANER_LAST};

// Defines names for use in layer keycodes and the keymap
enum layer_names {
  _COLEMAK,
  _NUMBER,
  _SYMBOL,
  _TEMPLATE,
  _GAMING,
  _GAMING_ALT,
  _FUNCTION,
  _NAVIGATION,
  _LAYERS,
  _BRACKETS
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
    KC_ASTR,      KC_COLON,         KC_MINS,                KC_PLUS,             KC_EQL,                  KC_DOT,                KC_4,                      KC_5,               KC_6,              KC_EQL,
    _______,      KC_SCLN,          KC_UNDERSCORE,          _______,             _______,                 KC_0,                  KC_1,                      KC_2,               KC_3,              KC_KP_PLUS,
                                    _______,                LT(_NUMBER, KC_SPC), _______,                 _______,               _______,                   _______
  ),

  [_SYMBOL] = LAYOUT_split_3x5_3(
    _______,      _______,          _______,                _______,             _______,                 LSFT(KC_3),            KC_AMPR,                   KC_ASTR,            KC_NUBS,           KC_GRV,
    KC_LCTL,      KC_LALT,          KC_LGUI,                KC_LSFT,             _______,                 LSFT(KC_QUOT),         KC_DLR,                    KC_PERC,            KC_CIRC,           KC_PLUS,
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
    _______,      _______,          _______,            _______,          _______,             KC_PSCR,   KC_F7,          KC_F8,         KC_F9,          KC_F12,
    KC_LCTL,      KC_LALT,          KC_LGUI,            KC_LSFT,          _______,             KC_SCRL,   KC_F4,          KC_F5,         KC_F6,          KC_F11,
    _______,      _______,          _______,            _______,          _______,             KC_PAUS,   KC_F1,          KC_F2,         KC_F3,          KC_F10,
                                    LT(_FUNCTION, KC_ESC), _______,         _______,              _______,   _______,        TO(_GAMING)
      ),

  [_NAVIGATION] = LAYOUT_split_3x5_3(
    KC_PGUP,        KC_MPRV,        KC_MPLY,        KC_MNXT,        KC_VOLU,           _______, KC_PGDN,        KC_PGUP,        _______,          _______,
    KC_LCTL,        KC_LALT,        KC_LGUI,        KC_LSFT,        KC_VOLD,           KC_LEFT, KC_DOWN,        KC_UP,          KC_RIGHT,       KC_RCTL,
    _______,        _______,        KC_INS,         _______,        _______,           _______, KC_HOME,        KC_END,         KC_VOLU,        _______,
                                    KC_ESC,         _______,        _______,           _______, LT(_NAVIGATION, KC_BSPC), _______
      ),


  [_BRACKETS] = LAYOUT_split_3x5_3(
   _______,         _______,        KC_LBRC,        KC_RBRC,        KC_GT,                _______,         _______,         _______,          _______,          _______,
   _______,         _______,        KC_LPRN,        KC_RPRN,        KC_EQL,               _______,         KC_RSFT,         KC_RGUI,          KC_RALT,          KC_RCTL,
   _______,         _______,        KC_LCBR,        KC_RCBR,        KC_LT,                _______,         _______,         _______,          _______,          _______,
                                    KC_ESC,         KC_SPC,         KC_TAB,               LT(_BRACKETS, KC_ENT),   KC_BSPC,   KC_DEL
  ),

  [_GAMING] = LAYOUT_split_3x5_3(
    KC_TAB,       KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,         KC_Y,    KC_U,         KC_I,         TO(_COLEMAK),
    KC_LSFT,      KC_A,         KC_S,         KC_D,         KC_F,         KC_G,         KC_H,    RSFT_T(KC_J), RALT_T(KC_K), RGUI_T(KC_L),
    KC_LCTL,      KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,         KC_N,    KC_M,         KC_COMM,      KC_DOT,
                                LT(_GAMING_ALT, KC_ESC),    KC_SPC,       KC_ENT,       KC_SPC,  KC_BSPC,      KC_DEL
  ),

  [_GAMING_ALT] = LAYOUT_split_3x5_3(
    KC_1,         KC_2,         KC_3,         KC_4,         KC_5,         KC_T,         KC_Y,    KC_U,         KC_I,         TO(_COLEMAK),
    KC_F1,        KC_F2,        KC_F3,        KC_F4,        KC_F5,        KC_G,         KC_H,    RSFT_T(KC_J), RALT_T(KC_K), RGUI_T(KC_L),
    KC_LCTL,      KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,         KC_N,    KC_M,         KC_COMM,      KC_DOT,
                                LT(_GAMING_ALT, KC_ESC),    KC_SPC,       KC_ENT,       KC_SPC,  KC_BSPC,      KC_DEL
  )
};

enum combos {
  DC_DASH,
  XC_UND,
  ER_GUI,
  FP_SCLN,
  COMDOT_CLN,
  DF_ALTTAB,
  QB_GAMING_T,
  TABR_COLEMAK_T,
};

const uint16_t PROGMEM combo_dc[] = {KC_D, KC_C, COMBO_END};
const uint16_t PROGMEM combo_er[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo_df[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM combo_xc[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo_fp[] = {KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM combo_comdot[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_qb[] = {KC_Q, KC_B, COMBO_END};
const uint16_t PROGMEM combo_tabr[] = {KC_TAB, KC_R, COMBO_END};

combo_t key_combos[] = {
  [DC_DASH] = COMBO(combo_dc, KC_MINS),
  [XC_UND] = COMBO(combo_xc, KC_UNDS),
  [ER_GUI] = COMBO(combo_er, KC_LGUI),
  [DF_ALTTAB] = COMBO(combo_df, LALT(KC_TAB)),
  [FP_SCLN] = COMBO(combo_fp, KC_SCLN),
  [COMDOT_CLN] = COMBO(combo_comdot, KC_COLON),
  [QB_GAMING_T] = COMBO(combo_qb, TO(_GAMING)),
  [TABR_COLEMAK_T] = COMBO(combo_tabr, TO(_COLEMAK)),
};

bool get_combo_must_hold(uint16_t combo_index, combo_t *combo) {
    // Force hold on combos that involve modifier keys or momentary layers
    if (KEYCODE_IS_MOD(combo->keycode) ||
        (combo->keycode >= QK_MOMENTARY && combo->keycode <= QK_MOMENTARY_MAX) // MO(kc) keycodes
        ) {
        return true;
    }
    switch (combo_index) {
        case DC_DASH:
            return true;
    }
    return false;
}


bool get_combo_must_press_in_order(uint16_t combo_index, combo_t *combo) {
    switch (combo_index) {
        /* List combos here that you want to only activate if their keys
         * are pressed in the same order as they are defined in the combo's key
         * array. */
        case FP_SCLN:
            return true;
        default:
            return false;
    }
}

bool should_process_keypress(void) {
  return true;
}

// Only enable SOCD on gaming layer
layer_state_t layer_state_set_user(layer_state_t state) {
  socd_cleaner_enabled = IS_LAYER_ON_STATE(state, _GAMING);
  return state;
}


//static bool shift_held = false;
uint8_t mod_state;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  static uint16_t my_comma_timer;
  static uint16_t my_dot_timer;
  static uint16_t my_slash_timer;

  uint8_t mod_state = get_mods();

  // For gaming key registering
  if (!process_socd_cleaner(keycode, record, &socd_v)) { return false; }
  if (!process_socd_cleaner(keycode, record, &socd_h)) { return false; }
  switch (keycode) {
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

    // end switch case
    return true;
  };
  return true;
}
