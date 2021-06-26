#include <ctype.h>
#include <stdio.h>

void encrypt(char *message, int shift) {
  char ch;
  for (; *message != '\0'; ++message) {
    ch = *message;
    if (islower(ch)) {
      ch = 'a' + ((ch - 'a') + shift) % ('z' - 'a' + 1);
    } else if (isupper(ch)) {
      ch = 'A' + ((ch - 'A') + shift) % ('Z' - 'A' + 1);
    }
    *message = ch;
  }
}

int main() {
  char msg[100];
  printf("Nhập thông điệp cần được mã hóa: ");
  fgets(msg, 100, stdin);
  printf("Nhập khoảng dịch chuyển (1-25): ");
  int d;
  scanf("%d", &d);
  printf("Thông điệp sau khi mã hóa: ");
  encrypt(msg, d);
  printf("%s\n", msg);
  return 0;
}