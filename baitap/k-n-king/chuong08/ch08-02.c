/* Kiểm tra số xem có chữ số lặp lại hay không */
#include <stdbool.h>
#include <stdio.h>

int main() {
  int digit_seen[10] = {0};
  int digit;
  long n;
  printf("Nhập một số: ");
  scanf("%ld", &n);
  bool repeated = false;
  while (n > 0) {
    digit = n % 10;
    ++digit_seen[digit];
    if (digit_seen[digit] > 1) {
      repeated = true;
    }
    n /= 10;
  }
  printf("Chữ số          : ");
  for (int i = 0; i < 10; ++i) {
    printf("%5d", i);
  }
  printf("\n");
  printf("Số lần xuất hiện: ");
  for (int i = 0; i < 10; ++i) {
    printf("%5d", digit_seen[i]);
  }
  printf("\n");
  return 0;
}