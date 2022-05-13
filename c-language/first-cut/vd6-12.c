/*
  (C) Nguyễn Bá Ngọc 2021
  Minh họa khai báo biến.
*/

#include <stdio.h>

int x;  // Được khởi tạo = 0
int main() {
  int y;  // Không được khởi tạo
  do {
    static int z;  // = 0
    printf("Trước: x = %d, "
           "y = %d z = %d\n",
           x, y, z);
    scanf("%d%d%d", &x, &y, &z);
    int sum = 0;
    sum = x + y + z;
    printf("Sum = %d\n", sum);
  } while (0);
  return 0;
}