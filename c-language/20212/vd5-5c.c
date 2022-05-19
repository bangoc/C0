/*
  (C) Nguyễn Bá Ngọc
  Thử nghiệm tương tác với hàm
*/
#include <stdio.h>
int x;
void inc10() {
  x += 10;
}
int main() {
  x = 100;
  inc10();
  printf("(sau inc10()) x = %d\n", x);
  return 0;
}