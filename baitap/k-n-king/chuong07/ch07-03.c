/* Tính tổng một dãy số (sử dụng biến kiểu double) */
#include <stdio.h>

int main() {
  double n, sum = 0;
  printf("Chương trình này tính tổng của một dãy số thực.\n");
  printf("Nhập các số thực (0 để dừng): ");
  scanf("%lf", &n);
  while (n != 0) {
    sum += n;
    scanf("%lf", &n);
  }
  printf("Tổng là: %lf\n", sum);
  return 0;
}