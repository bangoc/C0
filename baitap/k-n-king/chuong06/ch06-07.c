/*
  In bảng các giá trị bình phương sử dụng phương pháp phi chuẩn.
 */

#include <stdio.h>

int main() {
  int i, n, odd, square;
  printf("Chương trình này in một bảng các giá trị bình phương.\n");
  printf("Nhập số lượng giá trị trong bảng: ");
  scanf("%d", &n);

  odd = 3;
  for (i = 1, square = 1; i <= n; odd += 2, ++i) {
    printf("%10d%10d\n", i, square);
    square += odd;
  }
  return 0;
}