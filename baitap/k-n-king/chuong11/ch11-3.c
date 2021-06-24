#include <stdio.h>

void reduce(int numerator, int denominator,
            int *reduced_numerator, int *reduced_denominator) {
  int x, y, m, n;
  x = numerator;
  y = denominator;
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
  *reduced_numerator = x/m;
  *reduced_denominator = y/m;
}

int main() {
  printf("Nhập một tỉ số: ");
  int x, y;
  scanf("%d/%d", &x, &y);
  reduce(x, y, &x, &y);
  printf("Kết quả giản lược: %d/%d\n", x, y);
  return 0;
}