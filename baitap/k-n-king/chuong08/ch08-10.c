#include <stdio.h>

int main() {
  int h, m;
  printf("Nhập thời gian 24-giờ: ");
  scanf("%d:%d", &h, &m);
  int t = h * 60 + m;
  int d[] = {8 * 60, 9 * 60 + 43, 11 * 60 + 17, 12 * 60 + 47,
             14 * 60, 15 * 60 + 45, 19 * 60, 21 * 60 + 45},
      a[] = {10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60,
             16 * 60 + 8, 17 * 60 + 55, 21 * 60 + 20, 23 * 60 + 58};

  int d_min, a_min, min = 25 * 60;
  int n = sizeof(d)/sizeof(d[0]);
  for (int i = 0; i < n; ++i) {
    int x = t < d[i]? d[i] - t: t - d[i];
    if (x > 12 * 60) {
      x = 24 * 60 - x;
    }
    if (x < min) {
      d_min = d[i];
      a_min = a[i];
      min = x;
    }
  }

  int x = d_min / 60;
  int y = d_min % 60;
  if (x >= 12) {
    printf("Thời gian đi gần nhất là: %02d:%02d p.m., ", x == 12? x: x - 12, y);
  } else {
    printf("Thời gian đi gần nhất là: %02d:%02d a.m., ", x, y);
  }
  x = a_min / 60;
  y = a_min % 60;
  if (x >= 12) {
    printf("đến lúc: %02d:%02d p.m.\n", x == 12? x: x - 12, y);
  } else {
    printf("đến lúc: %02d:%02d a.m.\n", x, y);
  }
  return 0;
}