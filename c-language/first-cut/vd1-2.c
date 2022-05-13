#include <stdio.h>

double f(double x);

int main() {
  double x, y;
  printf("Nhập x và y: ");
  scanf("%lf%lf", &x, &y);
  printf("%g + %g = %g\n", x, y, x + y);
  printf("f(%g) = %g\n", x, f(x));
  return 0;
}