#include <stdio.h>

struct date {
  int d, m, y;
};

int compare_dates(struct date *d1, struct date *d2) {
  int ymd1 = d1->y * 10000 + d1->m * 100 + d1->d,
      ymd2 = d2->y * 10000 + d2->m * 100 + d2->d;
  return ymd1 - ymd2;
}

int main() {
  struct date d1, d2;
  printf("Nhập ngày thứ nhất (dd/mm/yy): ");
  scanf("%d/%d/%d", &d1.d, &d1.m, &d1.y);
  printf("Nhập ngày thứ hai (dd/mm/yy): ");
  scanf("%d/%d/%d", &d2.d, &d2.m, &d2.y);
  int tmp = compare_dates(&d1, &d2);
  if (tmp < 0) {
    printf("Ngày %02d/%02d/%02d sớm hơn %02d/%02d/%02d\n", d1.d, d1.m, d1.y, d2.d, d2.m, d2.y);
  } else if (tmp == 0) {
    printf("Ngày %02d/%02d/%02d bằng %02d/%02d/%02d\n", d1.d, d1.m, d1.y, d2.d, d2.m, d2.y);
  } else {
    printf("Ngày %02d/%02d/%02d sớm hơn %02d/%02d/%02d\n", d2.d, d2.m, d2.y, d1.d, d1.m, d1.y);
  }
  return 0;
}