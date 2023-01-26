/* (C) Nguyễn Bá Ngọc 2023 */

#include <stdio.h>

void selsort(int n, int *a) {
  for (int i = 0; i < n - 1; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (a[i] > a[j]) {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
      }
    }
  }
}

int main() {
  int n, a[100];
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  selsort(n, a);
  for (int i = 0; i < n; ++i) {
    printf("%d ", a[i]);
  }
  printf("\n");
}