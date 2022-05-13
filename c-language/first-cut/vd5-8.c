/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa hoạt động của câu lệnh switch
  (Hiệu chỉnh ví dụ 5.4 với câu lệnh break)
*/

#include <stdio.h>

int main() {
  int n;
  printf("Nhập 1 số nguyên trong khoảng [0,..,9]: ");
  scanf("%d", &n);
  switch (n) {
    case 0: printf("Không\n"); break;
    case 1: printf("Một\n"); break;
    case 2: printf("Hai\n"); break;
    case 3: printf("Ba\n"); break;
    case 4: printf("Bốn\n"); break;
    case 5: printf("Năm\n"); break;
    case 6: printf("Sáu\n"); break;
    case 7: printf("Bẩy\n"); break;
    case 8: printf("Tám\n"); break;
    case 9: printf("Chín\n"); break;
    default: printf("Ngoài khoảng\n");
  }
  return 0;
}