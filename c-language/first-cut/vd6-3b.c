/*
  (C) Nguyễn Bá Ngọc 2021
  Minh họa truyền tham số theo giá trị
*/

#include <stdio.h>

void inc10(int *x) {
  *x += 10;
  printf("(Trong inc10) *x = %d\n", *x);
}

int main() {
  int x = 100;
  inc10(&x);
  printf("(sau khi gọi inc10) x = %d\n", x);
  return 0;
}