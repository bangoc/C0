#include <stdio.h>

int main() {
  int n;
  printf("Nhập một số nguyên dương: ");
  scanf("%d", &n);
  int x = 2;
  for (;;) {
    int y = x * x;
    if (y > n) {
      break;
    }
    printf("%d\n", y);
    x += 2;
  }
  return 0;
}