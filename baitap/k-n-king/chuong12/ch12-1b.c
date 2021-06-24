#include <stdio.h>
#define N 100
int main() {
  char msg[N], *curr;
  printf("Nhập một thông điệp: ");
  curr = &msg[0];
  for (;;) {
    char ch = getchar();
    if (ch == '\n') {
      break;
    }
    *curr = ch;
    ++curr;
    if (curr >= &msg[N]) {
      break;
    }
  }
  printf("Đảo ngược thành: ");
  for (--curr; curr >= &msg[0]; --curr) {
    printf("%c", *curr);
  }
  printf("\n");
  return 0;
}