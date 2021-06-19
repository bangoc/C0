#include <stdio.h>

int main() {
  int n;
  printf("Nhập một số 2 chữ số: ");
  scanf("%d", &n);
  int d2 = n % 10, d1 = n/10;
  printf("Số đảo ngược là: %d%d\n", d2, d1);
  return 0;
}