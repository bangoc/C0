/*
  (C) Nguyễn Bá Ngọc (2022)
  Định dạng hướng dòng của mảng nhiều chiều trong C:
  - Mảng 3 chiều được coi như mảng 1 chiều của các mảng
  2 chiều. Biến mảng 3 chiều về bản chất là con trỏ
  tới mảng 2 chiều.
    int a[d1][d2][d3];
  a có kiểu int(*)[d2][d3] - Con trỏ tới các mảng 2 chiều.
  - Tiếp tục, biến mảng 2 chiều là con trỏ tới mảng 1 chiều.
  - Biến mảng 1 chiều là con trỏ tới phần tử đầu tiên
  trong mảng.
*/
#include <stdio.h>
int main() {
  int a[2][2][2] = {1, 2, 3, 4, 5, 6, 7, 8};
  printf("%d\n", a[1][1][1]);  // 8
  int (*p2)[2][2];  // {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}}
  p2 = a + 1;       // {{5, 6}, {7, 8}}
  printf("%d\n", (*p2)[1][1]);  // 8
  int (*p1)[2] = (*p2) + 1;  // {7, 8}
  printf("%d\n", (*p1)[1]);  // 8
  int *p = (*p1) + 1;
  printf("%d\n", *p);  // 8
  return 0;
}