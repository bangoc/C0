/*
  (C) Nguyen Ba Ngoc 2021
  Thuộc tính const/Biến chỉ đọc
*/

#include <stdio.h>

const int x = 100;
int main() {
  // x = 200;  // Lỗi biên dịch
  const int y = 200;
  int *py = (int*)&y;
  *py = 202;  // (Có thể) y == 202
  printf("y = %d\n", y);
  int *px = (int*)&x;
  *px = 101;  // Có thể lỗi
  return 0;
}