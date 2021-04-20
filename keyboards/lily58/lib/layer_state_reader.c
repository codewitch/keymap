
#include QMK_KEYBOARD_H
#include <stdio.h>
#include "lily58.h"

#define L_BASE 0
#define L_ONE (1 << 1)
#define L_TWO (1 << 2)
#define L_ADJUST (1 << 3)
#define L_ADJUST_TRI (L_ADJUST | L_ONE | L_TWO)

char layer_state_str[24];

const char *read_layer_state(void) {
  switch (layer_state)
  {
  case L_BASE:
    snprintf(layer_state_str, sizeof(layer_state_str), "Base");
    break;
  case L_ONE:
    snprintf(layer_state_str, sizeof(layer_state_str), "One");
    break;
  case L_TWO:
    snprintf(layer_state_str, sizeof(layer_state_str), "Two");
    break;
  case L_ADJUST:
  case L_ADJUST_TRI:
    snprintf(layer_state_str, sizeof(layer_state_str), "Adjust");
    break;
  default:
    snprintf(layer_state_str, sizeof(layer_state_str), "Undef-%ld", layer_state);
  }

  return layer_state_str;
}
