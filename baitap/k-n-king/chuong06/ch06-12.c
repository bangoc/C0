#include <stdio.h>

int main() {
  float e = 2, eps;
  printf("Nhập một số thực rất nhỏ: ");
  scanf("%f", &eps);
  float gt = 2, i = 2;
  for (;;) {
    float a = 1/gt;
    if (a <= eps) {
      break;
    }
    e += a;
    ++i;
    gt *= i;
  }
  printf("e = %f\n", e);
  return 0;
}