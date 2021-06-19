#include <stdio.h>

int main() {
  int n;
  printf("Nhập một số 3 chữ số: ");
  scanf("%d", &n);
  int d3, d2, d1;
  d3 = n % 10;
  n /= 10;
  d2 = n % 10;
  n /= 10;
  d1 = n % 10;
  printf("Số đảo ngược là: %d%d%d\n", d3, d2, d1);
  return 0;
}