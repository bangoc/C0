/* Đảo ngược một dãy số */

#include <stdio.h>

#define N 10

int main() {
  int a[N], i;
  printf("Nhập %d số: ", N);
  for (i = 0; i < N; ++i) {
    scanf("%d", &a[i]);
  }
  printf("Theo thứ tự đảo ngược: ");
  for (i = N - 1; i >= 0; --i) {
    printf(" %d", a[i]);
  }
  printf("\n");
  return 0;
}