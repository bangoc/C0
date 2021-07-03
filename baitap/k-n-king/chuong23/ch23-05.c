#include <math.h>
#include <stdio.h>

int main() {
  double p, r, t;
  printf("Nhập khoản tiền gửi ban đầu (VNĐ): ");
  scanf("%lf", &p);
  printf("Nhập lãi suất hàng năm (%%): ");
  scanf("%lf", &r);
  printf("Nhập số năm gửi: ");
  scanf("%lf", &t);
  double a = p * pow(M_E, r / 100 * t);
  printf("Giá trị khoản tiền gửi sau %.0lf năm là %.2lf (VNĐ)\n", t, a);
  return 0;
}