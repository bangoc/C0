/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa đệ quy trong chuỗi gọi hàm
*/

#include <stdio.h>

void a(long a);
void b(long b);

void a(long v) {
  printf("v (a) = %ld\n", v);
  b(v + 1);
}

void b(long v) {
  printf("v (b) = %ld\n", v);
  a(v + 1);
}

int main() {
  a(1);
  return 0;
}