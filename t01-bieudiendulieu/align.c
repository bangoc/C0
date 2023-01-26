/*
 * (C) Nguyen Ba Ngoc 2023
 * Chương trình này xuất thông tin căn chỉnh của
 * các kiểu dữ liệu bằng từ khóa _Alignof (từ C11)
*/

#include <stdio.h>

#define PRINT_ALIGN(name) \
  printf("_Alignof(%s) = %zu\n", #name, _Alignof(name))

struct point {
  double x, y;
};
struct student {
  char id[21];
  char name[100];
};
union gtype {
  long l;
  double d;
};

int main() {
  PRINT_ALIGN(char);
  PRINT_ALIGN(int);
  PRINT_ALIGN(long);
  PRINT_ALIGN(float);
  PRINT_ALIGN(double);
  PRINT_ALIGN(void *);
  PRINT_ALIGN(int *);
  PRINT_ALIGN(long *);
  PRINT_ALIGN(double *);
  PRINT_ALIGN(struct point);
  PRINT_ALIGN(struct student);
  PRINT_ALIGN(union gtype);
}