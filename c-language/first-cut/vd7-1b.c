/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa truyền tham số mảng cho hàm
*/

#include <stdio.h>

long sum(long *beg, long *end) {
  long sum = 0;
  for (long *p = beg; p < end; ++p) {
    sum += *p;
  }
  return sum;
}
int main() {
  long a[] = {1, 3, 5, 8, 9};
  long n = sizeof(a) / sizeof(a[0]);
  printf("sum = %ld\n", sum(a, a + n));
  return 0;
}
