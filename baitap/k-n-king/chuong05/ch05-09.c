#include <stdio.h>

int main() {
  int d1, m1, y1,
      d2, m2, y2;
  printf("Nhập ngày thứ nhất (dd/mm/yy): ");
  scanf("%d/%d/%d", &d1, &m1, &y1);
  printf("Nhập ngày thứ hai (dd/mm/yy): ");
  scanf("%d/%d/%d", &d2, &m2, &y2);
  int ymd1 = y1 * 10000 + m1 * 100 + d1,
      ymd2 = y2 * 10000 + m2 * 100 + d2;
  if (ymd1 < ymd2) {
    printf("Ngày %02d/%02d/%02d sớm hơn %02d/%02d/%02d\n", d1, m1, y1, d2, m2, y2);
  } else {
    printf("Ngày %02d/%02d/%02d sớm hơn %02d/%02d/%02d\n", d2, m2, y2, d1, m1, y1);
  }
  return 0;
}