/*
  (C) Nguyen Ba Ngoc 2021
  Đếm số lượng ký tự viết hoa trong chuỗi và
  chuyển ký tự viết hoa thành ký tự thường
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char s[20];
  fgets(s, 20, stdin);
  int cc =0;
  for (char *p = s; *p; ++p) {
    if (isupper(*p)) {
      cc++;
      *p = tolower(*p);
    }
  }
  printf("s = %s\ncc = %d\n", s, cc);
  return 0;
}