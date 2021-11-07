/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa câu lệnh do while
*/

#include <stdio.h>

int main() {
  int n;
  do {
    printf("Nhập n = ");
    scanf("%d", &n);
    printf("%*c|\n", n, '*');
  } while (n > 0);
  return 0;
}