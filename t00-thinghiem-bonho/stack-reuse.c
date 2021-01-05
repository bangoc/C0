/*
  @bangoc 2021
*/

#include <stdio.h>
int main() {
  {
    long x = 478560413000L;
    printf("%p x = %ld\n", &x, x);
  }
  char c;
  printf("%p %s\n", &c, &c);
}
