/*
  (C) Nguyen Ba Ngoc 2022
  Phân tích lỗi trong mã nguồn
*/

#include <stdio.h>

int main() {
  int n;
  printf("Nhập n = ");
  scanf("%d", &n);
  switch (n) {
    int s = 0;
    case 1: s += 100;
    case 2: s += 200;
    default: printf("s = %d\n", s);
  }
  return 0;
}