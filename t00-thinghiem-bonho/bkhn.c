/*
  @bangoc 2021
*/

#include <stdio.h>
int main() {
  {
    long x = 2337408889848875842L;
    printf("%p x = %ld\n", &x, x);
  }
  char c;
  printf("%p %s\n", &c, &c);
}
