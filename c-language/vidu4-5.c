/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa nhập với chiều rộng và cờ
*/

#include <stdio.h>
int main() {
  int i;
  double d;
  unsigned int n;
  scanf("%3d%*3d%5lf%n", &i, &d, &n);
  printf("Bạn đã nhập: \n"
         "i = %d\n"
         "d = %f\n"
         "Đã đọc %u ký tự.\n", i, d, n);
  return 0;
}