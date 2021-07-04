#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct tm *my_mkdate(int d, int m, int y) {
  struct tm *t = malloc(sizeof(struct tm));
  t->tm_mday = d;
  t->tm_mon = m - 1;
  t->tm_year = y - 1900;
  t->tm_sec = 0;
  t->tm_min = 0;
  t->tm_hour = 0;
  t->tm_isdst = -1;
  return t;
}

int main() {
  int d1, d2, m1, m2, y1, y2;
  printf("Nhập ngày thứ nhất (d/m/y): ");
  scanf("%d/%d/%d", &d1, &m1, &y1);
  printf("Nhập ngày thứ hai (d/m/y): ");
  scanf("%d/%d/%d", &d2, &m2, &y2);
  struct tm *t1 = my_mkdate(d1, m1, y1),
            *t2 = my_mkdate(d2, m2, y2);
  double dist = difftime(mktime(t2), mktime(t1));
  printf("Khoảng cách tính bằng ngày là: %ld\n", (long)dist/60/60/24);
  return 0;
}