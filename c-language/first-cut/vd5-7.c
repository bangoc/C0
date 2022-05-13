/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa vòng lặp for
*/

#include <stdio.h>

int main() {
  int n;
  printf("Nhập n = ");
  scanf("%d", &n);
  for (int i = 1; i <= n; ++i) {
    printf("%5d%*c\n", i, i, '*');
  }
  return 0;
}