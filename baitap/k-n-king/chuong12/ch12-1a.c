#include <stdio.h>
#define N 100
int main() {
  char msg[N];
  int len = 0;
  printf("Nhập một thông điệp: ");
  for (;;) {
    char ch = getchar();
    if (ch == '\n') {
      break;
    }
    msg[len] = ch;
    ++len;
    if (len >= N) {
      break;
    }
  }
  printf("Đảo ngược thành: ");
  for (int i = len -1; i >= 0; --i) {
    printf("%c", msg[i]);
  }
  printf("\n");
  return 0;
}