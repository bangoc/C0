#include <stdio.h>

int main() {
  float x, max = -1;
  for (;;) {
    printf("Nhập một số: ");
    scanf("%f", &x);
    if (x <= 0) {
      break;
    }
    if (x > max) {
      max = x;
    }
  }
  if (max > 0) {
    printf("Số dương lớn nhất đã nhập vào là: %f\n", max);
  }
  return 0;
}