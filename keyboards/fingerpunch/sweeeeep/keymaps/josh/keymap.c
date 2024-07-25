#include QMK_KEYBOARD_H


// Defines names for use in layer keycodes and the keymap
enum layer_names {
  _COLEMAK,
  _NUMBER,
  _SYMBOL,
  _TEMPLATE,
  _GAMING,
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
    KC_ASTR,      KC_COLON,         KC_MINS,                KC_PLUS,             KC_EQL,                  KC_DOT,                KC_4,                      KC_5,               KC_6,              KC_KP_PLUS,
    _______,      KC_SCLN,          KC_UNDERSCORE,          _______,             _______,                 KC_0,                  KC_1,                      KC_2,               KC_3,              KC_EQL,
                                    _______,                LT(_NUMBER, KC_SPC), _______,                 _______,               _______,                   _______
  ),

  [_SYMBOL] = LAYOUT_split_3x5_3(
    _______,      _______,          _______,                _______,             _______,                 LSA(KC_3),             KC_AMPR,                   KC_ASTR,            KC_NUBS,           KC_GRV,
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
    _______,      _______,          _______,            _______,          _______,                        _______,               _______,                  _______,             _______,           _______,
    _______,      _______,          _______,            _______,          _______,                        _______,               _______,                  _______,             _______,           _______,
    _______,      _______,          _______,            _______,          _______,                        _______,               _______,                  _______,             _______,           _______,
                                    _______,            _______,          _______,                        _______,               _______,                  _______
  ),


  [_NAVIGATION] = LAYOUT_split_3x5_3(
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

  [_GAMING] = LAYOUT_split_3x5_3(
    KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,         KC_Y,    KC_U,         KC_I,         KC_O,         KC_P,
    LCTL_T(KC_A), LGUI_T(KC_S), LALT_T(KC_D), LSFT_T(KC_F), KC_G,         KC_H,    RSFT_T(KC_J), RALT_T(KC_K), RGUI_T(KC_L), RCTL_T(KC_SCLN),
    KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,         KC_N,    KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,
                                KC_I,        KC_ENT,       KC_QUOT,      KC_BSPC, KC_SPC,       KC_I
  )
};
