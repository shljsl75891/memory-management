#include <stdbool.h>
#include <stdio.h>
#include "sneklang.h"

int main() {
  // Use %zu is for printing `sizeof` result
  printf("sizeof(char)   = %zu\n", sizeof(char));
  printf("sizeof(bool)   = %zu\n", sizeof(bool));
  printf("sizeof(int)   = %zu\n", sizeof(int));
  printf("sizeof(float)   = %zu\n", sizeof(float));
  printf("sizeof(double)   = %zu\n", sizeof(double));
  printf("sizeof(size_t)   = %zu\n", sizeof(size_t));
  printf("sizeof(sneklang_t)   = %zu\n", sizeof(sneklang_t));
  // size_t is special type for variables to store sizeof results
}

