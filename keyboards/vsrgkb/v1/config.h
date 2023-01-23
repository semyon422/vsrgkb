#pragma once

#define DIODE_DIRECTION COL2ROW

#define MATRIX_ROWS 4
#define MATRIX_COLS 5

#define SPLIT_HAND_PIN B6
#define SOFT_SERIAL_PIN D1

#define MATRIX_ROW_PINS {D0, B5}
#define MATRIX_COL_PINS {E6, D7, C6, D4, B4}

#define MATRIX_ROW_PINS_RIGHT {F5, B6}
#define MATRIX_COL_PINS_RIGHT {F6, F7, B1, B3, B2}

// #define BOOTMAGIC_LITE_ROW 0 // default, top left key
// #define BOOTMAGIC_LITE_COLUMN 0

#define BOOTMAGIC_LITE_ROW_RIGHT 2 // top right key
#define BOOTMAGIC_LITE_COLUMN_RIGHT 3

#define USB_POLLING_INTERVAL_MS 1
#define FORCE_NKRO
