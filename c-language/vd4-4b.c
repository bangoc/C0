/* (C) Nguyen Ba Ngoc 2022 */

#include <stdio.h>

int main() {
  int i;
  long l;
  float f;
  double d;
  scanf("%d%ld%f%lf", &i, &l, &f, &d);
  printf("i = %d l = %ld ", i, l);
  printf("f = %f d = %f\n", f, d);

  // không tương thích kiểu
  scanf("%d%d%f%f", &i, &l, &f, &d);
  printf("i = %d l = %ld ", i, l);
  printf("f = %f d = %f\n", f, d);
}