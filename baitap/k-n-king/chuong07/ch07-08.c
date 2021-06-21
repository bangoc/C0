#include <stdio.h>
#include <ctype.h>

int main() {
  int h, m;
  char sig;
  printf("Nhập thời gian 12-giờ: ");
  scanf("%d:%d %c", &h, &m, &sig);
  sig = toupper(sig);
  if (h == 12) {
    h = sig == 'P'? 12: 0;
  } else if (sig == 'P') {
    h += 12;
  }
  // Phần còn lại không thay đổi so với bài 8 - chương 5
  int t = h * 60 + m;
  int d1 = 8 * 60, a1 = 10 * 60 + 16,
      d2 = 9 * 60 + 43, a2 = 11 * 60 + 52,
      d3 = 11 * 60 + 17, a3 = 13 * 60 + 31,
      d4 = 12 * 60 + 47, a4 = 15 * 60,
      d5 = 14 * 60, a5 = 16 * 60 + 8,
      d6 = 15 * 60 + 45, a6 = 17 * 60 + 55,
      d7 = 19 * 60, a7 = 21 * 60 + 20,
      d8 = 21 * 60 + 45, a8 = 23 * 60 + 58;
  int x = t < d1? d1 - t: t - d1;
  if (x > 12 * 60) {
    x = 24 * 60 - x;
  }
  int d = d1, a = a1, min = x;

  x = t < d2? d2 - t: t - d2;
  if (x < min) {
    d = d2;
    a = a2;
    min = x;
  }

  x = t < d3? d3 - t: t - d3;
  if (x < min) {
    d = d3;
    a = a3;
    min = x;
  }

  x = t < d4? d4 - t: t - d4;
  if (x < min) {
    d = d4;
    a = a4;
    min = x;
  }

  x = t < d5? d5 - t: t - d5;
  if (x < min) {
    d = d5;
    a = a5;
    min = x;
  }

  x = t < d6? d6 - t: t - d6;
  if (x < min) {
    d = d6;
    a = a6;
    min = x;
  }

  x = t < d7? d7 - t: t - d7;
  if (x < min) {
    d = d7;
    a = a7;
    min = x;
  }

  x = t < d8? d8 - t: t - d8;
  if (x > 12 * 60) {
    x = 24 * 60 - x;
  }
  if (x < min) {
    d = d8;
    a = a8;
    min = x;
  }

  x = d / 60;
  int y = d % 60;
  if (x >= 12) {
    printf("Thời gian đi gần nhất là: %02d:%02d p.m., ", x == 12? x: x - 12, y);
  } else {
    printf("Thời gian đi gần nhất là: %02d:%02d a.m., ", x, y);
  }
  x = a / 60;
  y = a % 60;
  if (x >= 12) {
    printf("đến lúc: %02d:%02d p.m.\n", x == 12? x: x - 12, y);
  } else {
    printf("đến lúc: %02d:%02d a.m.\n", x, y);
  }
  return 0;
}