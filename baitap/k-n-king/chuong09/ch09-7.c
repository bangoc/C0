#include <stdio.h>

float power(float x, int n) {
  if (n == 0) {
    return 1;
  }
  if (n % 2 == 0) {
    float y = power(x, n / 2);
    return y * y;
  }
  return x * power(x, n - 1);
}

int main() {
  float x;
  int n;
  printf("Nhập cơ số x = ");
  scanf("%f", &x);
  printf("Nhập số mũ n = ");
  scanf("%d", &n);
  printf("%f^%d = %f\n", x, n, power(x, n));
  return 0;
}