/*
Output binary representation of a value
@bangoc 2021
*/
#include <stdio.h>
#include <string.h>

typedef enum {
  BIG_EDIAN,
  LITTLE_EDIAN
} edian_type;

edian_type edian;

char *get_binary(void *p) {
  static char buffer[9] = {'\0'};
  unsigned char number = *((unsigned char *)p);
  for (int i = 0; i < 8; ++i) {
    buffer[7 - i] = (number % 2) + '0';
    number /= 2;
  }
  return buffer;
}

void print_byte(void *p) {
  printf("%s ", get_binary(p));
}

#define IMPL(type) \
  void print_##type(char *inp) { \
  long double tmp; \
  sscanf(inp, "%Lf", &tmp); \
  type value = (type)tmp; \
  char *p = (char*)&value; \
  if (edian == LITTLE_EDIAN) { \
    for (int i = sizeof(type) - 1; i >= 0; --i) { \
      print_byte(p + i); \
    } \
  } else if (edian == BIG_EDIAN) { \
    for (int i = 0; i < sizeof(type); ++i) { \
      print_byte(p + i); \
    } \
  } \
  printf("\n"); \
}

IMPL(char)
IMPL(short)
IMPL(int)
IMPL(float)

int main(int argc, char *argv[]) {
  if (argc < 3) {
    printf("Usage: ./binary type value\n"
           "Supported types are char, short, int, float\n");
    return 0;
  }
  int v = 1;
  char *p = (char*)&v;
  edian = *p == 1? LITTLE_EDIAN: BIG_EDIAN;
  if (strcmp(argv[1], "char") == 0) {
    print_char(argv[2]);
  } else if (strcmp(argv[1], "short") == 0) {
    print_short(argv[2]);
  } else if (strcmp(argv[1], "int") == 0) {
    print_int(argv[2]);
  } else if (strcmp(argv[1], "float") == 0) {
    print_float(argv[2]);
  } else {
    printf("Unknown argument.\n");
  }
  return 0;
}