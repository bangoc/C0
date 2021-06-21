/*
  In bảng các giá trị bình phương sử dụng phương pháp phi chuẩn.
 */

#include <stdio.h>

int main() {
  int i, n, odd, square;
  printf("Chương trình này in một bảng các giá trị bình phương.\n");
  printf("Nhập số lượng giá trị trong bảng: ");
  scanf("%d", &n);

  i = 1;
  odd = 3;
  for (square = 1; i <= n; odd += 2) {
    printf("%10d%10d\n", i, square);
    ++i;
    square += odd;
  }
  return 0;
}