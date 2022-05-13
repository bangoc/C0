/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa biến có liên kết ngoại
*/

#include <stdio.h>

int x;  // Khai báo
int z = 3;  // Định nghĩa
void inc_all();
int main() {
  extern int y;  // Khai báo
  printf("%d %d %d\n", x, y, z);
  inc_all();
  printf("%d %d %d\n", x, y, z);
  return 0;
}