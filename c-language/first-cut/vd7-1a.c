/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa truyền tham số mảng cho hàm
*/

#include <stdio.h>

long sum(const long n, long *a) {
  long sum = 0;
  for (long i = 0; i < n; ++i) {
    sum += a[i];
  }
  return sum;
}
int main() {
  long a[] = {1, 3, 5, 8, 9};
  long n = sizeof(a) / sizeof(a[0]);
  printf("sum = %ld\n", sum(n, a));
  return 0;
}
