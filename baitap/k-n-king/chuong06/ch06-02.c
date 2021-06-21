#include <stdio.h>

int main() {
  int m, n;
  printf("Nhập hai số nguyên: ");
  scanf("%d%d", &m, &n);
  for (;;) {
    if (n == 0) {
      break;
    }
    int rem = m % n;
    m = n; n = rem;
  }
  printf("ƯSCLN là: %d\n", m);
  return 0;
}