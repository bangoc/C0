/* Tìm số lớn nhất và số nhỏ nhất trong một mảng */
#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void) {
  int b[N], i, big, small;
  printf("Nhập %d số nguyên: ", N);
  for (int i = 0; i < N; ++i) {
    scanf("%d", &b[i]);
  }

  max_min(b, N, &big, &small);
  printf("Số lớn nhất: %d\n", big);
  printf("Số nhỏ nhất: %d\n", small);

  return 0;
}

void max_min(int a[], int n, int *max, int *min) {
  int *p = a + 1;
  *max = *min = a[0];
  for (; p < a + n; ++p) {
    if (*p > *max) {
      *max = *p;
    } else if (*p < *min) {
      *min = *p;
    }
  }
}
