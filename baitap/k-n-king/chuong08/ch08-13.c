#include <stdio.h>
int main() {
  printf("Nhập tên và họ: ");
  char ch, c1 = getchar();
  int last = 0;
  char a[30];
  int len = 0;
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
      a[len] = ch;
      ++len;
    }
  }
  printf("Bạn đã nhập tên: ");
  for (int i = 0; i < len; ++i) {
    printf("%c", a[i]);
  }
  printf(", %c.\n", c1);
  return 0;
}