/*
@bangoc 2021
*/

#ifndef BIN_HELPER_H
#define BIN_HELPER_H

#include <stdio.h>
#include <string.h>

typedef enum {
  BIG_EDIAN,
  LITTLE_EDIAN
} edian_type;

static char *hex_binary[] = {"0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111",
                      "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"};

static char *get_byte_binary(unsigned char c) {
  static char buffer[9] = {'\0'};
  unsigned char c1 = c / 16, c2 = c% 16;
  buffer[0] = '\0';
  strcat(buffer, hex_binary[c1]);
  strcat(buffer, hex_binary[c2]);
  return buffer;
}

static char *get_object_binary(unsigned char *p, size_t sz, edian_type edian) {
  static char buffer[1024];
  buffer[0] = '\0';
  for (int i = 0; i < sz; ++i) {
    int j = i;
    if (edian == LITTLE_EDIAN) {
      j = sz - 1 - i;
    }
    unsigned char b = *(p + j);
    strcat(buffer, get_byte_binary(b));
  }
  return buffer;
}

static edian_type get_edian() {
  int v = 1;
  char *p = (char*)&v;
  return *p == 1? LITTLE_EDIAN: BIG_EDIAN;
}

#endif  // BIN_HELPER_H