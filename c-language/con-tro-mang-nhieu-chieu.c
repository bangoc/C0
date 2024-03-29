/*
  (C) Nguyễn Bá Ngọc (2022)
  Định dạng hướng dòng của mảng nhiều chiều và con trỏ
  tới mảng trong C:
  Mảng n chiều được coi như mảng 1 chiều (kích thước đầu tiên
  theo chiều từ trái sang phải), của mảng n-1 chiều (các chiều
  còn lại).
  - Biến mảng 3 chiều có thể được sử dụng như con trỏ tới mảng
    2 chiều.
      int a[d1][d2][d3];
    a có thể được sử dụng như con trỏ tới các mảng d2 x d3, có
    kiểu int(*)[d2][d3].
  - Tiếp tục, biến mảng 2 chiều có thể được sử dụng như con trỏ
    tới mảng 1 chiều.
  - Biến mảng 1 chiều có thể được sử dụng như  con trỏ tới phần tử
    (đầu tiên) của mảng.
*/
#include <stdio.h>
int main() {
  // {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}}
  int a[2][2][2] = {1, 2, 3, 4, 5, 6, 7, 8};
  printf("%d\n", a[1][1][1]);  // 8

  int (*p2)[2][2]; // Con trỏ tới mảng 2 x 2
  p2 = a + 1; // -> {{5, 6}, {7, 8}}
  printf("%d ", *p2 == a[1]);
  printf("%d ", (*p2)[1][1]);  // 8
  printf("%d\n", p2[-1][0][1]);  // 2

  int (*p1)[2];  // Con trỏ tới mảng 2
  p1 = (*p2) + 1; // -> {7, 8}
  printf("%d ", *p1 == a[1][1]);
  printf("%d ", *p1 == (*p2)[1]);
  printf("%d ", (*p1)[1]);  // 8
  printf("%d\n", p1[-1][1]);  // 6

  int *p = (*p1) + 1;  // *p là biến int
  printf("%d ", *p);  // 8
  printf("%d ", (*p1)[1]);
  printf("%d ", (*p2)[1][1]);
  printf("%d\n", a[1][1][1]);
  return 0;
}