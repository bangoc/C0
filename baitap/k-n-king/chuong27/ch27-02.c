#include <complex.h>
#include <stdio.h>
#include <math.h>
int main() {
  double a, b;
  printf("Nhập phần thực: ");
  scanf("%lf", &a);
  printf("Nhập phần ảo: ");
  scanf("%lf", &b);
  double complex z = a + b * I;
  double r = cabs(z),
         theta = carg(z);
  printf("Dạng lượng giác tương ứng: z = %lf * (cos %lf + i * sin %lf)\n",
          r, theta, theta);
  return 0;
}