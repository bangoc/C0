/*
  (C) Nguyen Ba Ngoc 2021
  Không nên viết các câu lệnh if lồng nhau
  theo cấu trúc phức tạp như trong ví dụ này.
*/

#include <stdio.h>

int main() {
  printf("Nhập 2 số nguyên a và b: ");
  int a, b;
  scanf("%d%d", &a, &b);
  if (a >= 0)
    if (b < 0) printf("Khác dấu\n");
    else printf("Cùng dấu\n");
  else if (b <0) printf("Cùng dấu\n");
       else printf("Khác dấu\n");
  return 0;
}
