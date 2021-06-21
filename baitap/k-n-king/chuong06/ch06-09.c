#include <stdio.h>

int main() {
  float amount;
  printf("Nhập khoản vay (x 1000 VNĐ): ");
  scanf("%f", &amount);
  float rate;
  printf("Nhập lãi suất theo năm (%%): ");
  scanf("%f", &rate);
  float monthly;
  printf("Khoản góp hàng tháng (x 1000 VNĐ): ");
  scanf("%f", &monthly);
  float x = amount * 1000,
        p = rate / 100 / 12,
        y = monthly * 1000;
  int n;
  printf("Nhập số lần thanh toán: ");
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    x = x * (1 + p) - y;
    printf("Dư nợ còn lại sau trả góp tháng thứ %d: %.2f\n", i + 1, x);
  }
  return 0;
}