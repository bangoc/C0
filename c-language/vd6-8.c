/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa biến nội
*/

#include <stdio.h>

int x;
static int y;
void f1() {
  static int z = 10;
  printf("z (f1) = %d\n", z++);
}
void f2() {
  int z = 10;
  printf("z (f2) = %d\n", z++);
}
int main() {
  for (int i = 0; i < 3; ++i) {
    f1();
    f2();
  }
  return 0;
}