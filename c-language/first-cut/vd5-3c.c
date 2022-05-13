/*
  (C) Nguyen Ba Ngoc 2021
  Viết lại ví dụ 5-3a.
*/

#include <stdio.h>

int main() {
  printf("Nhập 2 số nguyên a và b: ");
  int a, b;
  scanf("%d%d", &a, &b);
  if (a >= 0) {
    if (b < 0) {
      printf("Khác dấu\n");
    } else {
      printf("Cùng dấu\n");
    }
  } else if (b < 0) {
    printf("Cùng dấu\n");
  } else {
    printf("Khác dấu\n");
  }
  return 0;
}
