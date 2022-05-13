/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa khai báo và định nghĩa
*/

#include <stdio.h>

double inch_to_cm(double x);

int main() {
  double x;
  printf("Nhập độ dài (inch): ");
  scanf("%lf", &x);
  printf("%.2f in = %.2f cm\n", x, inch_to_cm(x));
  return 0;
}