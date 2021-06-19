/* Tính chữ số kiểm tra cho mã UPC */
#include <stdio.h>

int main() {
  int d, i1, i2, i3, i4, i5, i6, j1, j2, j3, j4, j5,
      first_sum, second_sum, total;
  printf("Nhập 11 chữ số đầu tiên của mã UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
         &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;
  total = 3 * first_sum + second_sum;

  printf("Chữ số kiểm tra: %d\n", 9 - ((total - 1) % 10));
  return 0;
}