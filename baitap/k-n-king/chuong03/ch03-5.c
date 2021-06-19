#include <stdio.h>

int main() {
  printf("Nhập các số từ 1 tới 16 theo trật tự bất kỳ:\n");
  int a00, a01, a02, a03,
      a10, a11, a12, a13,
      a20, a21, a22, a23,
      a30, a31, a32, a33;
  //      1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8
  scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
         &a00, &a01, &a02, &a03, &a10, &a11, &a12, &a13,
         &a20, &a21, &a22, &a23, &a30, &a31, &a32, &a33);
  printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n",
         a00, a01, a02, a03, a10, a11, a12, a13,
         a20, a21, a22, a23, a30, a31, a32, a33);
  int r0 = a00 + a01 + a02 + a03,
      r1 = a10 + a11 + a12 + a13,
      r2 = a20 + a21 + a22 + a23,
      r3 = a30 + a31 + a32 + a33,
      c0 = a00 + a10 + a20 + a30,
      c1 = a01 + a11 + a21 + a31,
      c2 = a02 + a12 + a22 + a32,
      c3 = a03 + a13 + a23 + a33,
      d1 = a00 + a11 + a22 + a33,
      d2 = a03 + a12 + a21 + a30;
  printf("Tổng các dòng: %d %d %d %d\n", r0, r1, r2, r3);
  printf("Tổng các cột: %d %d %d %d\n", c0, c1, c2, c3);
  printf("Tổng các đường chéo: %d %d\n", d1, d2);
  return 0;
}