/*
  (C) Nguyen Ba Ngoc 2021
  Chương trình minh họa nhập chuỗi ký tự với scanf
*/

#include <stdio.h>

#define N 60

int main() {
  char s[N];
  int i;
  printf("Nhập 1 số nguyên: ");
  scanf("%d", &i);

  // Luồng dữ liệu nhập: 123\n
  // => i = 123, và còn lại \n
  // Xóa \n trong bộ nhớ đệm trước khi nhập chuỗi
  while (getchar() != '\n') ;

  printf("Nhập 1 chuỗi: ");
  scanf("%[^\n]%*c", s);

  // Luồng dữ liệu nhập: Hello world\n
  // => s == "Hello world", \n khớp với %*c
  printf("Bạn đã nhập: %s\n", s);

  /* Tiếp theo chúng ta sẽ phân tích ảnh hưởng
     của ký tự \n */

  printf("Nhập 1 số nguyên (nữa): ");
  scanf("%d", &i);
  while (getchar() != '\n') ;
  printf("Nhập 1 chuỗi: ");
  int cc = (int)scanf("%[^\n]", s);
  printf("Số lượng đã nhập = %d\n", cc);

  // Luồng dữ liệu nhập: Hello world\n
  // => s == "Hello world", còn lại \n trong bộ nhớ đệm
  printf("Bạn đã nhập: %s\n", s);

  // => s không thay đổi, do vẫn còn \n trong bộ nhớ đệm
  printf("Nhập 1 chuỗi: ");
  cc = (int)scanf("%[^\n]", s);
  printf("Số lượng đã nhập = %d\n", cc);
  printf("Bạn đã nhập: %s\n", s);
  return 0;
}