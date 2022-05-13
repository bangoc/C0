#include "vd1-3.h"

#define N 100

int a[N];

#ifdef PRINT
for (int i = 0; i < N; ++i) {
  printf("a[%d] = %d\n", i, a[i]);
}
#endif