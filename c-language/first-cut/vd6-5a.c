/*
  (C) Nguyen Ba Ngoc
  Minh họa gọi hàm đệ quy trực tiếp
*/

#include <stdio.h>

void recursion(long n) {
  printf("n = %ld\n", n);
  recursion(n+1);
}

int main() {
  recursion(1);
  return 0;
}