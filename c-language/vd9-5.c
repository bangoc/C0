/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa tách chuỗi ký tự
*/

#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "Hello world!";
  s[5] = '\0';

  // ss là mảng con trỏ char *
  char *ss[] = {s, s + 6};
  int n = sizeof(ss)/sizeof(ss[0]);
  for (int i = 0; i < n; ++i) {
    printf("%s\n", ss[i]);
  }
  return 0;
}