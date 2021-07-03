/* Tìm các nghiệm của phương trình bậc 2 */

#include <math.h>
#include <stdio.h>
int main() {
  double a, b, c;
  printf("Nhập các hệ số của phương trình bậc 2:\n");
  printf("a = ");
  scanf("%lf", &a);
  printf("b = ");
  scanf("%lf", &b);
  printf("c = ");
  scanf("%lf", &c);
  double d = b * b - 4 * a * c;
  if (d < 0) {
    printf("Các nghiệm của phương trình là số phức.\n");
  } else if (d > 0) {
    printf("x1 = %lf\nx2 = %lf\n", (-b + sqrt(d))/(2 * a),
                                   (-b - sqrt(d))/(2 * a));
  } else {
    printf("x1 = x2 = %lf\n", -b/(2 * a));
  }
  return 0;
}