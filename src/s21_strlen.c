#include <stddef.h>

#include "s21_string.h"

size_t s21_strlen(const char *str) {
  size_t i = 0;
  while (str[i] != '\0') {
    i += 1;
  }
  return i;
}