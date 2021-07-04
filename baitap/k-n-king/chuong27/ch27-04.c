#include <complex.h>
#include <math.h>
#include <stdio.h>
int main() {
  int n;
  printf("Nhập số nguyên dương n: ");
  scanf("%d", &n);
  for (int k = 0; k < n; ++k) {
    double complex z = cexp(2 * M_PI * I * k / n);
    printf("Căn đơn vị (k = %d) bậc %d = %lf", k, n, creal(z));
    double img = cimag(z);
    if (img < 0) {
      printf(" - %lfi\n", -img);
    } else {
      printf(" + %lfi\n", img);
    }
  }
  return 0;
}