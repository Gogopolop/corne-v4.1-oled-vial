#pragma once
#define RGBLIGHT_DEFAULT_ON false

// Vial
#define VIAL_KEYBOARD_UID {0x3B, 0x6B, 0xA0, 0x29, 0x80, 0x56, 0xED, 0xD1}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

// 7 layers
#undef DYNAMIC_KEYMAP_LAYER_COUNT
#define DYNAMIC_KEYMAP_LAYER_COUNT 7

// Timings
#define TAPPING_TERM 180

// Master - LEFT 
#define MASTER_LEFT

// Split
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000

// The 8x7 matrix
#define MATRIX_ROWS 8
#define MATRIX_COLS 7

// OLED
#define OLED_DISPLAY_128X32
#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
#define OLED_TIMEOUT 600000

// RGB
#ifdef RGBLIGHT_ENABLE
#undef RGBLIGHT_LED_COUNT
#define RGBLIGHT_LED_COUNT 54
#define RGBLIGHT_LIMIT_VAL 120
#endif
