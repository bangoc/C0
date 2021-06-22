#include <stdio.h>
int main() {
  int a[5][5];
  for (int i = 0; i < 5; ++i) {
    printf("Nhập hàng %d: ", i + 1);
    for (int j = 0; j < 5; ++j) {
      scanf("%d", &a[i][j]);
    }
  }
  printf("Các tổng theo hàng: ");
  for (int i = 0; i < 5; ++i) {
    int r = 0;
    for (int j = 0; j < 5; ++j) {
      r += a[i][j];
    }
    printf(" %d", r);
  }
  printf("\n");
  printf("Các tổng theo cột: ");
  for (int i = 0; i < 5; ++i) {
    int c = 0;
    for (int j = 0; j < 5; ++j) {
      c += a[j][i];
    }
    printf(" %d", c);
  }
  printf("\n");
  return 0;
}