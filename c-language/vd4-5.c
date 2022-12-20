/* (C) Nguyen Ba Ngoc 2022 */

#include <stdio.h>
int main() {
  int a, b, cc;
  float x;
  int n = scanf("%2d%3d%*d%f%n", &a, &b, &x, &cc);
  printf("n = %d cc = %d\n", n, cc);
  printf("a = %d b = %d x = %f\n", a, b, x);
}