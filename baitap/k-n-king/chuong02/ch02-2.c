#include <stdio.h>

int main() {
  float r = 10;
  const float pi = 3.1416;
  float v1 = 4/3 * pi * r * r * r; // Chia số nguyên
  float v2 = 4.0f/3.0f * pi * r * r * r;  // Chia số thực
  printf("v1 = %f\nv2 = %f\n", v1, v2);
  return 0;
}