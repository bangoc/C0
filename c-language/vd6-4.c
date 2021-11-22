/*
  (C) Nguyễn Bá Ngọc
  Minh họa gọi hàm bằng con trỏ hàm
*/

#include <stdio.h>

double average(double a, double b) {
  return (a + b) / 2;
}
double max(double a, double b) {
  return a > b? a: b;
}

double (*op)(double, double);
double (*pf)() = max;
int main() {
  double a, b;
  printf("Nhập 2 số thực: ");
  scanf("%lf%lf", &a , &b);
  op = average;
  printf("Trung bình cộng = %lf\n", op(a, b));
  op = max;
  printf("Max = %lf\n", op(a, b));
  printf("Max = %lf\n", pf(a, b));
  return 0;
}