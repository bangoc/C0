/*
  (C) Nguyễn Bá Ngọc 2021
  Minh họa mở rộng tính năng với con trỏ hàm
*/

#include <stdio.h>

void process(const int n, int *a, void (*op)(int*)) {
  for (int i = 0; i < n; ++i) {
    op(a + i);
  }
}
void add1(int *p) { ++(*p); }
void mul3(int *p) { (*p) *= 3; }
void print_i(int *p) { printf(" %d", *p); };
void print_a(const int n, int *a) {
  process(n, a, print_i);
  printf("\n");
}
int main() {
  int a[5] = {1, 2, 3, 4, 5};
  print_a(5, a);
  process(5, a, add1);
  print_a(5, a);
  process(5, a, mul3);
  print_a(5, a);
  int b[2][3] = {1, 2, 3, 5, 6, 7};
  process(2 * 3, b[0], mul3);
  for (int i = 0; i < 2; ++i) {
    print_a(3, b[i]);
  }
  return 0;
}