#include <stdio.h>

int main() {
  int a = 11, b = -3;
  int n, d;
  n = a / b;
  d = a - n * b;

  // %d là đặc tả xuất số nguyên có dấu
  int cc = printf("n = %d d = %d (%d)\n",
                       n,     d, a % b);
  printf("cc = %d\n", cc);
}
