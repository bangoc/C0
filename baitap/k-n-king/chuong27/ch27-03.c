#include <complex.h>
#include <math.h>
#include <stdio.h>

int main() {
  double r, theta;
  printf("Nhập r = ");
  scanf("%lf", &r);
  printf("Nhập theta = ");
  scanf("%lf", &theta);
  double complex z = r * (cos(theta) + I * sin(theta));
  double a = creal(z), b = cimag(z);
  if (b < 0) {
    printf("Dạng đại số: %lf - %lfi\n", a, -b);
  } else {
    printf("Dạng đại số: %lf + %lfi\n", a, b);
  }
  return 0;
}