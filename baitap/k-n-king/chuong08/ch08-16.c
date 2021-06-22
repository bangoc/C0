#include <stdio.h>

int main() {
  int a[256] = {0};
  char ch;
  printf("Nhập từ thứ nhất: ");
  for (;;) {
    ch = getchar();
    if (ch == '\n') {
      break;
    }
    ++a[ch];
  }
  printf("Nhập từ thứ hai: ");
  for (;;) {
    ch = getchar();
    if (ch == '\n') {
      break;
    }
    --a[ch];
  }
  int is_perm = 1;
  for (int i = 0; i < 256; ++i) {
    if (a[i] != 0) {
      is_perm = 0;
      break;
    }
  }
  if (is_perm) {
    printf("Các từ là các hoán vị.\n");
  } else {
    printf("Các từ không phải là các hoán vị.\n");
  }
  return 0;
}