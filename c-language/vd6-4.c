/*
  (C) Nguyễn Bá Ngọc
  Minh họa gọi hàm thông qua con trỏ hàm
*/

#include <stdio.h>

double average(double a, double b) {
  return (a + b) / 2;
}

int main() {
  double a, b;
  printf("Nhập 2 số thực: ");
  scanf("%lf%lf", &a , &b);
  double (*f) (double, double) = average;
  printf("Trung bình cộng = %lf\n", f(a, b));
  return 0;
}