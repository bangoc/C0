#include <stdio.h>

int main() {
  int n;
  printf("Nhập một số nguyên dương: ");
  scanf("%d", &n);
  printf("Số đảo ngược là: ");
  for (;;) {
    printf("%d", n % 10);
    n /= 10;
    if (n == 0) {
      break;
    }
  }
  printf("\n");
  return 0;
}