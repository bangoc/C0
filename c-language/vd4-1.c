#include <stdio.h>

int main() {
  int a = 11, b = 3, c = -5;
  int n, d;
  n = a / b;
  d = a - n * b;

  // %d là định dạng xuất số nguyên có dấu
  printf("n = %d d = %d (%d)\n",
               n,    d, a % b);
  printf("%d/%d = %d   %d %% %d = %d\n",
           a, c,  a/c,  a,    c, a % c);

  // %u - số nguyên không dấu
  unsigned char ch = 1;
  printf("%u\n", ch << 10);

  // %f - float hoặc double
  double d1 = 11, d2 = 3;
  printf("%f / %f = %f\n", d1, d2, d1 / d2);
  return 0;
}
