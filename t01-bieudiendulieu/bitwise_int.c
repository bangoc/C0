/*
@bangoc 2021
*/

#include "bin_helper.h"

#define MAX_BUFF 100

int main(int argc, char *argv[]) {
  if (argc < 3) {
    printf("Usage: ./bitwise value1 value2\n");
    return 1;
  }
  int v1, v2;
  sscanf(argv[1], "%d", &v1);
  sscanf(argv[2], "%d", &v2);
  int r = v1 & v2;
#define get_bin(x) get_object_binary(&x, sizeof(int), get_edian())

#define output(op) \
  printf("  %s(%d)\n", get_bin(v1), v1); \
  printf(op "%s(%d)\n", get_bin(v2), v2); \
  printf("-------------------------------------------------\n"); \
  printf("  %s(%d)\n\n", get_bin(r), r);

  output("& ");

  r = v1 | v2;
  output("| ");

  r = v1 ^ v2;
  output("^ ");

  r = v1 << v2;
  char b1[MAX_BUFF], b2[MAX_BUFF];
  strcpy(b1, get_bin(v1));
  strcpy(b2, get_bin(r));
  printf("%s(%d) << %d == \n%s(%d)\n\n", b1, v1, v2, b2, r);

  r = v1 >> v2;
  strcpy(b1, get_bin(v1));
  strcpy(b2, get_bin(r));
  printf("%s(%d) >> %d == \n%s(%d)\n\n", b1, v1, v2, b2, r);

  r = ~v1;
  strcpy(b1, get_bin(v1));
  strcpy(b2, get_bin(r));
  printf("~%s(%d) == \n %s(%d)\n\n", b1, v1, b2, r);

  r = ~v2;
  strcpy(b1, get_bin(v2));
  strcpy(b2, get_bin(r));
  printf("~%s(%d) == \n %s(%d)\n\n", b1, v2, b2, r);

  return 0;
}