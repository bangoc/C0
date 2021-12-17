/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa mảng chuỗi ký tự với mảng 2 chiều
*/

#include <stdio.h>
#include <string.h>

int main() {
  const char *digits[] = { "Không", "Một", "Hai", "Ba",
    "Bốn", "Năm", "Sáu", "Bẩy", "Tám", "Chín"};
  int n = sizeof(digits)/sizeof(digits[0]), x;
  printf("Nhập 1 số nguyên dương: ");
  scanf("%d", &x);
  char s[20], *p = s;
  sprintf(s, "%d", x);
  while (*p) {
    printf(" %s", digits[*p - '0']);
    ++p;
  }
  printf("\n");
  return 0;
}