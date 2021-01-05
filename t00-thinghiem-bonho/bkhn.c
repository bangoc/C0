/*
  @bangoc 2021
*/

#include <stdio.h>
int main() {
  {
    long x = 22034536255230148L;
    printf("%p x = %ld\n", &x, x);
  }
  char c;
  printf("%p %s\n", &c, &c);
}
