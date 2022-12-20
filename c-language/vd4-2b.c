/*
  (C) Nguyen Ba Ngoc 2022
*/

#include <stdio.h>

int main() {
  printf("%d\n", 123);
  printf("%ld\n", 123l);
  printf("%f\n", 3.1415f);
  printf("%Lf\n", 3.1415L);

  // Lỗi không tương thích
  printf("%d\n", 123l);
  printf("%f\n", 3.1415L);
}