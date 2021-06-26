#include <stdio.h>
#include <string.h>

#define N 100

void reverse(char *message) {
  char *p1 = message,
       *p2 = message + strlen(message) - 1;
  while (p1 < p2) {
    char tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
    ++p1;
    --p2;
  }
}

int main() {
  char msg[N];
  int len = 0;
  printf("Nhập một thông điệp: ");
  fgets(msg, N, stdin);
  msg[strlen(msg) - 1] = '\0';
  printf("Đảo ngược thành: ");
  reverse(msg);
  printf("%s\n", msg);
  return 0;
}