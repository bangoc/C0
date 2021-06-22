/* Đảo ngược một dãy số */

#include <stdio.h>

#define N 10

int main() {
  int a[N], i;
  int n = (int)sizeof(a)/sizeof(a[0]);
  printf("Nhập %d số: ", n);
  for (i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  printf("Theo thứ tự đảo ngược: ");
  for (i = n - 1; i >= 0; --i) {
    printf(" %d", a[i]);
  }
  printf("\n");
  return 0;
}