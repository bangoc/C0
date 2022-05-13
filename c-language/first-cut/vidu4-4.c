/*
  (C) Nguyen Ba Ngoc, 2021
*/

#include <stdio.h>

int main() {
  long l;
  double d;
  char c;
  scanf("%ld%lf %c", &l, &d, &c);
  printf("Bạn đã nhập: \n"
         "l = %ld\n"
         "d = %f\n"
         "c = %c\n", l, d, c);
  int dd, mm, y;
  printf("Nhập một ngày theo định dạng d/m/y: ");
  scanf("%d / %d / %d", &dd, &mm, &y);
  printf("Ngày %d Tháng %d Năm %d\n", dd, mm, y);
  return 0;
}