/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa vòng lặp for. Viết lại vd5-7 theo các
  cách diễn đạt khác nhau nhưng tương đương.
*/

#include <stdio.h>

int main() {
  int n;
  printf("Nhập n = ");
  scanf("%d", &n);
  int i;
  for (i = 1; i <= n;) {
    printf("%5d%*c\n", i, i, '*');
    ++i;
  }
  return 0;
}