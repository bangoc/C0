#include <stdio.h>
#include <stdlib.h>

void kt1() {
  printf("Kết thúc ");
}

void kt2() {
  printf("chương trình!\n");
}

int main() {
  atexit(kt2);
  atexit(kt1);
  return 0;
}