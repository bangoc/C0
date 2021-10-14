#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define N 64

int main(void) {
  int a, i = 1,j = 0,t[N];
  for (srand(time(0));;) {
    a = getchar();
    if (isalpha(a) && i < N) {
      t[i++]=a;
    } else {
      j = 1;
      while (i > 1) {
        putchar(t[j]);
        t[j] = t[--i];
        j = i > 2? rand() % (i - 2) + 2 : 1;
      }
      if (a == EOF) {
        break;
      }
      putchar(a);
    }
  }
  return 0;
}