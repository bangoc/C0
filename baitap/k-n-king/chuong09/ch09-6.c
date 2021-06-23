#include <stdio.h>

float fx(float x) {
  return (((((3 * x + 2) * x) - 5) * x - 1) * x + 7) * x - 6;
}
int main() {
  float x;
  printf("Nhập giá trị x: ");
  scanf("%f", &x);
  printf("Giá trị đa thức: %f\n", fx(x));
  return 0;
}