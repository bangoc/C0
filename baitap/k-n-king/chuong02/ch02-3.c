#include <stdio.h>

int main() {
  float r;
  printf("Nhập bán kính hình cầu r = ");
  scanf("%f", &r);
  const float pi = 3.1416;
  float v = 4.0f/3.0f * pi * r * r * r;
  printf("Thể tích hình cầu v = %f\n", v);
  return 0;
}