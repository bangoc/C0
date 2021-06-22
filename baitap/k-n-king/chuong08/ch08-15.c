#include <ctype.h>
#include <stdio.h>
int main() {
  char msg[100];
  int len = 0;
  printf("Nhập thông điệp cần được mã hóa: ");
  char ch;
  for (;;) {
    ch = getchar();
    if (ch == '\n') {
      break;
    }
    msg[len] = ch;
    ++len;
  }
  printf("Nhập khoảng dịch chuyển (1-25): ");
  int d;
  scanf("%d", &d);
  printf("Thông điệp sau khi mã hóa: ");
  for (int i = 0; i < len; ++i) {
    ch = msg[i];
    if (islower(ch)) {
      ch = 'a' + ((ch - 'a') + d) % ('z' - 'a' + 1);
    } else if (isupper(ch)) {
      ch = 'A' + ((ch - 'A') + d) % ('Z' - 'A' + 1);
    }
    printf("%c", ch);
  }
  printf("\n");
  return 0;
}