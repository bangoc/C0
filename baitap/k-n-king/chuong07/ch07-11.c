#include <stdio.h>
int main() {
  printf("Nhập tên và họ: ");
  char ch, c1 = getchar();
  int last = 0;
  for (;;) {
    ch = getchar();
    if (ch == '\n') {
      break;
    }
    if (ch == ' ') {
      last = 1;
      continue;
    }
    if (last) {
      printf("%c", ch);
    }
  }
  printf(", %c.\n", c1);
  return 0;
}