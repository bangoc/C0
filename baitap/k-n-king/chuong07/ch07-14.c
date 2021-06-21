#include <stdio.h>
#include <math.h>

int main() {
  float x, y = 1;
  const float k = 0.00001;
  printf("Nhập một số dương: ");
  scanf("%f", &x);
  for (;;) {
    float xy = x/y;
    float y2 = (y + xy)/2;
    float tmp = y;
    y = y2;
    if (fabs(tmp - y2) < k * tmp) {
      break;
    }
  }
  printf("Căn bậc hai: %f\n", y);
  return 0;
}