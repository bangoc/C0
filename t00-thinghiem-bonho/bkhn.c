/*
  @bangoc 2021
*/

#include <stdio.h>
int main() {
  {
    long x = 1313360706L;
    printf("%p x = %ld\n", &x, x);
  }
  char c;
  printf("%p %s\n", &c, &c);
}
