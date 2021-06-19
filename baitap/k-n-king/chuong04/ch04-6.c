#include <stdio.h>

int main() {
  int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;
  printf("Nhập 12 chữ số đầu tiên của mã EAN: ");

  //       1  2  3  4  5  6  1  2  3  4  5  6
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
        &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);
  int s1 = d2 + d4 + d6 + d8 + d10 + d12;
  int s2 = d1 + d3 + d5 + d7 + d9 + d11;
  int s3 = 3 * s1 + s2 - 1;
  int r = s3 % 10;
  int c = 9 - r;
  printf("Chữ số kiểm tra là: %d\n", c);
  return 0;
}