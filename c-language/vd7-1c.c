/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa xử lý mảng đa chiều như mảng 1 chiều
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
  long a[2][3] = {1, 3, 5, 8, 9};
  printf("sum = %ld\n", sum(2 * 3, a[0]));
  return 0;
}
