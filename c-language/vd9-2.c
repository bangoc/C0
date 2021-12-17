/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa nhập chuỗi với các hàm trong thư viện tiêu chuẩn
*/

#include <stdio.h>

int main() {
  char s1[20], s2[20], s3[20];

  // Nhập chuỗi không chứa khoảng trắng
  scanf("%s", s1);
  printf("scanf %%s:  %s\n", s1);
  scanf("%s", s1);
  printf("scanf %%s:  %s\n", s1);

  // Quan sát sát khác biệt nếu không xóa
  // bộ nhớ đệm
  while (getchar() != '\n') ;

  // Nhập chuỗi có chứa khoảng trắng
  scanf("%[^\n]%*c", s2);
  printf("scanf %%[^\\n]%%*c: %s\n", s2);
  fgets(s3, 20, stdin);
  printf("fgets: %s\n", s3);
  return 0;
}