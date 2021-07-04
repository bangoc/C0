#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int int_cmp(const void *v1, const void *v2) {
  return *((const int*)v1) - *((const int*)v2);
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Sử dụng: ./ch26-03 1000\n");
    return 1;
  }
  int n;
  sscanf(argv[1], "%d", &n);
  printf("n = %d\n", n);
  int *a = malloc(n * sizeof(int));
  for (int i = 0; i < n; ++i) {
    a[i] = n - i;
  }
  clock_t t1 = clock();
  qsort(a, n, sizeof(a[0]), int_cmp);
  clock_t t2 = clock();
  printf("Thời gian thực hiện qsort là: %lf (s)\n", (double)(t2 - t1)/CLOCKS_PER_SEC);
  free(a);
  return 0;
}