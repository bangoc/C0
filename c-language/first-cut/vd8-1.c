/*
  (C) Nguyen Ba Ngoc 2021
  Thực nghiệm với kích thước của struct và union
*/
#include <stdio.h>
#include <stddef.h>

struct s1 { int x; char c; int y; };
struct s2 { float x, y, z; };
union g1 { float x; double d; };
union g2 { struct s2 p; double d; };

int main() {
  printf("sizeof:\nchar: %zu, int: %zu, float: %zu, double: %zu\n",
         sizeof(char), sizeof(int), sizeof(float), sizeof(double));
  printf("sizeof(struct s1) = %zu\n", sizeof(struct s1));
  printf("offsetof(struct s1, c) = %zu\n", offsetof(struct s1, c));
  printf("offsetof(struct s1, y) = %zu\n", offsetof(struct s1, y));
  printf("sizeof(struct s2) = %zu\n", sizeof(struct s2));
  printf("sizeof(union g1) = %zu\n", sizeof(union g1));
  printf("sizeof(union g2) = %zu\n", sizeof(union g2));
  return 0;
}