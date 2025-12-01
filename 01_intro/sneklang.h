#pragma once

typedef struct {
  char *name; // 8 bytes
  int value; // 4 bytes
  int scope_level; // 4 bytes 
  char type; // 1 byte
  char is_constant; // 1 byte
} sneklang_t; // 8 + 4 + 4 + 1 + 1 = 18 bytes but actual size = 24 bytes

