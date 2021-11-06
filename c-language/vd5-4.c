/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa hoạt động của câu lệnh switch
*/

#include <stdio.h>

int main() {
  int n;
  printf("Nhập 1 số nguyên trong khoảng [0,..,9]: ");
  scanf("%d", &n);
  switch (n) {
    case 0: printf("Không\n");
    case 1: printf("Một\n");
    case 2: printf("Hai\n");
    case 3: printf("Ba\n");
    case 4: printf("Bốn\n");
    case 5: printf("Năm\n");
    case 6: printf("Sáu\n");
    case 7: printf("Bẩy\n");
    case 8: printf("Tám\n");
    case 9: printf("Chín\n");
    default: printf("Ngoài khoảng\n");
  }
  return 0;
}