#include <stdio.h>
#define M 10
float f1(float x) {
  return x + M;
}

int main() {
  scanf("%f", &x);
  float x;
  f1(x);
  f2(x);
  return 0;
}
#define N 2.0
float f2(float x) {
  return x * N;
}