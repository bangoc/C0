/* Cộng hai tỉ số */
#include <stdio.h>

int main() {
  int num1, denom1, num2, denom2, num3, denom3;
  printf("Nhập hai tỉ số được ngăn cách bằng một dấu cộng: ");
  scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);
  num3 = num1 * denom2 + num2 * denom1;
  denom3 = denom1 * denom2;
  printf("Tổng hai tỉ số là: %d/%d\n", num3, denom3);
  return 0;
}