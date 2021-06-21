#include <stdio.h>

int main() {
  printf("Nhập một tỉ số: ");
  int x, y, m, n;
  scanf("%d/%d", &x, &y);
  m = x;
  n = y;
  for (;;) {
    if (n == 0) {
      break;
    }
    int r = m % n;
    m = n;
    n = r;
  }
  x /= m;
  y /= m;
  printf("Kết quả giản lược: %d/%d\n", x, y);
  return 0;
}