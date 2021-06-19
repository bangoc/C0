#include <stdio.h>

int main() {
  float x;
  printf("x = ");
  scanf("%f", &x);
  float f =   3 * x * x * x * x * x
            + 2 * x * x * x * x
            - 5 * x * x * x
            -     x * x
            + 7 * x
            - 6;
  printf("Giá trị biểu thức f = %f\n", f);
  return 0;
}