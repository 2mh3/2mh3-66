#pragma once
#include "config_common.h"

/* 4x7 + 親指4 (5行7列) のピン設定 */
#define MATRIX_ROWS 10 // 5行 × 左右2
#define MATRIX_COLS 7

#define MATRIX_ROW_PINS {D4, C6, D7, E6, B4}
#define MATRIX_COL_PINS {F4, F5, F6, F7, B1, B3, B2}

/* 分割・通信設定 */
#define USE_SERIAL
#define SOFT_SERIAL_PIN D1
#define MASTER_LEFT

/* ダイオードの向き */
#define DIODE_DIRECTION COL2ROW