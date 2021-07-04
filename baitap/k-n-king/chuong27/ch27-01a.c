/* Tìm nghiệm của phương trình 5x**2 + 2x + 1 = 0 */

#include <complex.h>
#include <stdio.h>

int main(void)
{
  double a = 5, b = 2, c = 1;
  printf("Nhập các hệ số: ");
  scanf("%lf%lf%lf", &a, &b, &c);
  double complex discriminant_sqrt = csqrt(b * b - 4 * a * c);
  double complex root1 = (-b + discriminant_sqrt) / (2 * a);
  double complex root2 = (-b - discriminant_sqrt) / (2 * a);

  printf("Nghiệm 1 = %g + %gi\n", creal(root1), cimag(root1));
  printf("Nghiệm 2 = %g + %gi\n", creal(root2), cimag(root2));

  return 0;
}
