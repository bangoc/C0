#include <stdio.h>
int main() {
  int n;
  printf("Nhập một số trong khoảng giữa 0 và 32768: ");
  scanf("%d", &n);
  int o = n;
  int d1, d2, d3, d4, d5;
  d5 = n % 8;
  n /= 8;
  d4 = n % 8;
  n /= 8;
  d3 = n % 8;
  n /= 8;
  d2 = n % 8;
  n /= 8;
  d1 = n % 8;
  printf("Trong hệ cơ số 8, số bạn đã nhập là: %d%d%d%d%d\n", d1, d2, d3, d4, d5);

  // Hoặc đơn giản là yêu cầu printf in giá trị trong hệ cơ số 8
  printf("Trong hệ cơ số 8, số bạn đã nhập là: %05o\n", o);
  return 0;
}