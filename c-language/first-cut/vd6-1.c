/*
  (C) Nguyen Ba Ngoc 2021
  Quy đổi từ inch sang cm
*/

#include <stdio.h>

#define INCH1 2.54

double inch_to_cm(double x) {
  return x * INCH1;
}

int main() {
  double x;
  printf("Nhập độ dài (inch): ");
  scanf("%lf", &x);
  printf("%.2f in = %.2f cm\n", x, inch_to_cm(x));
  return 0;
}