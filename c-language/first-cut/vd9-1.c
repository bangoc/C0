/*
  (C) Nguyen Ba Ngoc
  Nhập dòng văn bản theo từng ký tự
*/

#include <stdio.h>

// Đọc 1 dòng nhưng không quá n - 1 ký tự, không lưu
// ký tự '\n', trả về độ dài chuỗi kết quả
int my_gets(char *s, int n) {
  int idx = 0, ch;
  while (idx < n - 1 && (ch = getchar()) != EOF) {
    if (ch == '\n') {
      break;
    }
    s[idx++] = ch;
  }
  s[idx] = 0;
  return idx;
}

int main() {
  char s[10];
  int cc = my_gets(s, 10);
  printf("Chuỗi đã nhập: %s\ncc = %d\n", s, cc);
  return 0;
}