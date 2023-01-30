/*
  (C) Nguyen Ba Ngoc 2021
  Thực nghiệm với kích thước của struct và union
*/
#include <stdio.h>
#include <stddef.h>

struct s1 { int x; char c; int y; };
struct s2 { int x, y, z; };
union g1 { char s[9]; double d; };
union g2 { float f; double d; };

int main() {
  printf("sizeof(struct s1) = %zu\n", sizeof(struct s1));
  printf("offset: %zu %zu %zu\n", offsetof(struct s1, x), 
          offsetof(struct s1, c), offsetof(struct s1, y));
  printf("sizeof(struct s2) = %zu\n", sizeof(struct s2));
  printf("sizeof(union g1) = %zu\n", sizeof(union g1));
  printf("offset: %zu %zu\n", offsetof(union g1, s),
          offsetof(union g1, d));
  printf("sizeof(union g2) = %zu\n", sizeof(union g2));
}