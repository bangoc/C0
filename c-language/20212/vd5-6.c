/*
  (C) Nguyen Ba Ngoc 2022
  Tính cạnh huyền tam giác khi biết 2 cạnh góc vuông.
*/
#include <math.h>
#include <stdio.h>
int main() {
  double a, b;
  printf("Nhập 2 cạnh góc vuông a b: ");
  scanf("%lf%lf", &a, &b);
  printf("Độ dài cạnh huyền = %g\n",
          sqrt(a * a + b * b));
  return 0;
}