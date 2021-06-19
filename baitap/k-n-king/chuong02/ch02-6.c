#include <stdio.h>

int main() {
  float x;
  printf("x = ");
  scanf("%f", &x);

  // Phương pháp Horner
  float f = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("Giá trị biểu thức f = %f\n", f);
  return 0;
}