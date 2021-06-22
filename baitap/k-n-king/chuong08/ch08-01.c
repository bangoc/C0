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
  if (repeated) {
    printf("(Các) chữ số lặp lại: ");
    for (int i = 0; i < 10; ++i) {
      if (digit_seen[i] > 1) {
        printf(" %d", i);
      }
    }
    printf("\n");
  } else {
    printf("Không có chữ số lặp lại.\n");
  }
  return 0;
}