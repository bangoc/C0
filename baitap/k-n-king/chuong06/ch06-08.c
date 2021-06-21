#include <stdio.h>

int main() {
  int n, b;
  printf("Nhập số ngày trong tháng: ");
  scanf("%d", &n);
  printf("Nhập ngày bắt đầu tháng (1 = Chủ Nhật, 7 = thứ 7): ");
  scanf("%d", &b);
  for (int i = 0; i < (b - 1) * 5; ++i) {
    printf(" ");
  }
  for (int i = 1; i <= n; ++i) {
    printf("%5d", i);
    if ((i + b - 1) % 7 == 0) {
      printf("\n");
    }
  }
  printf("\n");
  return 0;
}