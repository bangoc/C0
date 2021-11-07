/*
  (C) Nguyễn Bá Ngọc
  Minh họa vòng lặp while.
*/

#include <stdio.h>

int main() {
  int n;
  printf("Nhập số n: ");
  scanf("%d", &n);
  while (n > 0) {
    printf("%5d%*c\n", n, n, '*');
    --n;
  }
  return 0;
}
