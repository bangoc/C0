/*
  (C) Nguyen Ba Ngoc 2022
*/

#include <stdio.h>

int main() {
  int w = 10, p = 3;
  double x = 3.1415;
  printf("%1$*2$.*3$f\n", x, w, p);
}