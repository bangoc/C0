#include <stdio.h>

int main() {
  int d1, m1, y1,
      d2, m2, y2,
      ymd1,
      ymd2 = 0;
  for (;;) {
    printf("Nhập một ngày (dd/mm/yy): ");
    scanf("%d/%d/%d", &d1, &m1, &y1);
    ymd1 = y1 * 10000 + m1 * 100 + d1;
    if (ymd1 == 0) {
      break;
    }
    if (ymd2 == 0 || ymd1 < ymd2) {
      d2 = d1;
      m2 = m1;
      y2 = y1;
      ymd2 = ymd1;
    }
  }
  if (ymd2 > 0) {
    printf("Ngày %02d/%02d/%02d là ngày sớm nhất.\n", d2, m2, y2);
  } else {
    printf("Chưa nhập ngày nào.\n");
  }
  return 0;
}