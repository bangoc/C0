#include <stdio.h>
#include <stdlib.h>

#define N 10000

int int_compare(const void *v1, const void *v2) {
  return *((const int*)v1) - *((const int*)v2);
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Sử dụng: ./number integers.txt\n");
    return 0;
  }
  int a[N];
  int len = 0, v;
  FILE *f = fopen(argv[1], "r");
  if (!f) {
    printf("Không thể mở %s để đọc.\n", argv[1]);
    return 0;
  }
  while (fscanf(f, "%d", &v) == 1) {
    a[len++] = v;
  }
  fclose(f);
  qsort(a, len, sizeof(a[0]), int_compare);
  printf("Số nhỏ nhất là: %d\n", a[0]);
  printf("Số lớn nhất là: %d\n", a[len - 1]);
  int median;
  if (len % 2 == 0) {
    int i = len / 2;
    median = (a[i] + a[i - 1] / 2);
  } else {
    median = a[len / 2];
  }
  printf("Số giữa là: %d\n", median);
  return 0;
}