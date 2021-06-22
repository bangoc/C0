#include <ctype.h>
#include <stdio.h>
int main() {
  char msg[100];
  int len = 0;
  printf("Nhập một thông điệp: ");
  for (;;) {
    char ch = getchar();
    if (ch == '\n') {
      break;
    }
    ch = toupper(ch);
    switch (ch) {
      case 'A': ch = '4';
        break;
      case 'B': ch = '8';
        break;
      case 'E': ch = '3';
        break;
      case 'I': ch = '1';
        break;
      case 'O': ch = '0';
        break;
      case 'S': ch = '5';
        break;
    }
    msg[len] = ch;
    ++len;
  }
  printf("Sau khi áp dụng bộ lọc B1FF: ");
  for (int i = 0; i < len; ++i) {
    printf("%c", msg[i]);
  }
  printf("!!!!!!!!!!!!!\n");
  return 0;
}