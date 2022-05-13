/*
  (C) Nguyen Ba Ngoc
  Minh họa do while yêu cầu nhập 1 số nguyên
  cho tới khi thỏa mãn điều kiện.
*/

#include <stdio.h>
int main() {
  int n;
  do {
    printf("Nhập số nguyên n > 0: ");
    scanf("%d", &n);
  } while (n <= 0);
  printf("n = %d\n", n);
  return 0;
}