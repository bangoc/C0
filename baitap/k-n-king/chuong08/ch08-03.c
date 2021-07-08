/*
  Kiểm tra số xem có chữ số lặp lại hay không
  + thực hiện kiểm tra nhiều lần cho tới khi
    người dùng một số <= 0
*/
#include <stdbool.h>  // C99
#include <stdio.h>

int main() {
  for (;;) {
    bool digit_seen[10] = {0};
    int digit;
    long n;
    printf("Nhập một số: ");
    scanf("%ld", &n);
    if (n <= 0) {
      break;
    }
    bool repeated = false;
    while (n > 0) {
      digit = n % 10;
      if (digit_seen[digit]) {
        repeated = true;
        break;
      }
      digit_seen[digit] = true;
      n /= 10;
    }
    if (repeated) {
      printf("Có chữ số lặp lại.\n");
    } else {
      printf("Không có chữ số lặp lại.\n");
    }
  }
  return 0;
}