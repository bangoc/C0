#include <stdio.h>

int main() {
  int d, m, y;
  printf("Nhập một ngày (dd/mm/yyyy): ");
  scanf("%d/%d/%d", &d, &m, &y);
  printf("Bạn đã nhập ngày %d%02d%02d\n", y, m, d);
  return 0;
}