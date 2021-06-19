#include <stdio.h>

int main() {
  int d3, d2, d1;
  printf("Nhập một số 3 chữ số: ");
  scanf("%1d%1d%1d", &d1, &d2, &d3);
  printf("Số đảo ngược là: %d%d%d\n", d3, d2, d1);
  return 0;
}