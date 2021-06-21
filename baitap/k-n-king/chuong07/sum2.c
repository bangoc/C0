/* Tính tổng một dãy số (sử dụng biến kiểu long) */
#include <stdio.h>

int main() {
  long n, sum = 0;
  printf("Chương trình này tính tổng của một dãy số nguyên.\n");
  printf("Nhập các số nguyên (0 để dừng): ");
  scanf("%ld", &n);
  while (n != 0) {
    sum += n;
    scanf("%ld", &n);
  }
  printf("Tổng là: %ld\n", sum);
  return 0;
}