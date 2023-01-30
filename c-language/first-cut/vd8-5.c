/*
  (C) Nguyen Ba Ngoc 2022
  Minh họa hàm khái quát với cấu trúc và nhóm
*/

#include <stdio.h>
typedef union generic_type {
  long l; 
  double d;
} gtype;
typedef struct tagged_gtype {
  char tag; 
  gtype val;
} tgt;
void print_tgt(tgt x) {
  if (x.tag == 'l') {
    printf("%ld: long\n", x.val.l);
  } else if (x.tag == 'd') {
    printf("%g: double\n", x.val.d);
  }
}
int main() {
  tgt v1 = {'l', {.l = 10}},
      v2 = {'d', {.d = 3.5}};
  print_tgt(v1);
  print_tgt(v2);
}
