#include <stdio.h>

#include "float32.h"

union float_bits_big {
  float f;
  struct float32_big parts;
};

union float_bits_little {
  float f;
  struct float32_little parts;
};

enum edian_type {
  BIG_EDIAN,
  LITTLE_EDIAN
};

static enum edian_type get_edian() {
  int v = 1;
  char *p = (char*)&v;
  return *p == 1? LITTLE_EDIAN: BIG_EDIAN;
}

int main() {
  enum edian_type e = get_edian();
  if (e == LITTLE_EDIAN) {
    printf("Byte phải nhất là byte đầu tiên, được lưu ở địa chỉ nhỏ nhất (địa chỉ của biến).\n");
    union float_bits_little value;
    value.parts.sign = 1;
    value.parts.exponent = 128;
    value.parts.fraction = 0;
    printf("%f\n", value.f);
  } else {
    union float_bits_big value;
    value.parts.sign = 1;
    value.parts.exponent = 128;
    value.parts.fraction = 0;
    printf("%f\n", value.f);
    printf("Byte trái nhất là byte đầu tiên, được lưu ở địa chỉ nhỏ nhất (địa chỉ của biến).\n");
  }
  return 0;
}