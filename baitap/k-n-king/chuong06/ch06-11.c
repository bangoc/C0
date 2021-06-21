#include <stdio.h>

int main() {
  int n;
  float e = 2, gt = 1;
  printf("Nhập số nguyên n: ");
  scanf("%d", &n);
  for (int i = 2; i <= n; ++i) {
    gt *= i;
    e += 1/gt;
  }
  printf("e = %f\n", e);
  return 0;
}