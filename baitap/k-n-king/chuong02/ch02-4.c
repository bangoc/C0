#include <stdio.h>

int main() {
  int amount;
  printf("Nhập số tiền (x 1000 VNĐ): ");
  scanf("%d", &amount);
  amount *= 1000;
  amount += amount / 100 * 5;
  printf("Đã tính thuế: %d\n", amount);
  return 0;
}