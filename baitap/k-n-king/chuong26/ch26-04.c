#include <stdio.h>
#include <time.h>

int main() {
  int d, m, y;
  printf("Nhập một ngày (d/m/y): ");
  scanf("%d/%d/%d", &d, &m, &y);
  printf("Đã nhập: %d/%d/%d\n", d, m, y);
  struct tm t;
  t.tm_mday = d;
  t.tm_mon = m - 1;
  t.tm_year = y - 1900;
  t.tm_sec = 0;
  t.tm_min = 0;
  t.tm_hour = 0;
  t.tm_isdst = -1;
  printf("Nhập số ngày sau đó (n): ");
  int n;
  scanf("%d", &n);
  t.tm_mday += n;
  time_t tmp = mktime(&t);
  printf("Sau %d ngày là: %02d/%02d/%d\n", n,
      t.tm_mday, t.tm_mon + 1, t.tm_year + 1900);
  return 0;
}