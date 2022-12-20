/*
  (C) Nguyen Ba Ngoc 2021-2022
*/

#include <stdio.h>

int main() {
  printf("12345678901234567890\n");
  int i = 123;
  printf("%d| (%%d)\n", i);
  printf("%10d| (%%10d)\n", i);
  printf("%-10d| (%%-10d)\n", i);
  printf("%010d| (%%010d)\n", i);
  printf("%-10.5d| (%%-10.5d)\n", i);
  double d = 3.1415;
  printf("%f| (%%f)\n", d);
  printf("%10f| (%%10f)\n", d);
  printf("%-10f| (%%-10f)\n", d);
  printf("%010f| (%%010f)\n", d);
  printf("%10.3f| (%%10.3f)\n", d);
}