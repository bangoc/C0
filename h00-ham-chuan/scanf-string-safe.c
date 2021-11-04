/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa đọc chuỗi với giới hạn độ dài
*/

#include <stdio.h>

#define N 10

int main() {
  char s1[N];

  char *s2;

  // Câu lệnh này không an toàn, dù bạn có
  // khai báo N lớn tới đâu thì dữ liệu đầu vào
  // vẫn có thể lớn hơn.
  scanf("%[^\n]%*c", s1);
  printf("s1 = %s\n", s1);

  // An toàn hơn, đọc tối đa 9 ký tự
  scanf("%9[^\n]%*c", s1);
  printf("s1 = %s\n", s1);

  return 0;
}