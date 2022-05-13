/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa đặt tên cho hằng
*/

#include <stdio.h>

#define PI 3.14159265358979323846
const char *colors[] = {"red", "black"};
int main() {
  double r = 1.0;
  printf("S = %f\n", PI * r * r);
  int c = 0;
  printf("Color = %s\n", colors[c]);
  return 0;
}