#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define N 100

bool is_palindrome(const char *message) {
  int len = strlen(message);
  for (int i = 0; i < len - 1; ++i) {
    int j = len - 1 - i;
    if (j <= i) {
      break;
    }
    if (toupper(message[i]) != toupper(message[j])) {
      return false;
      break;
    }
  }
  return true;
}

int main() {
  char msg[N];
  int len = 0;
  printf("Nhập một thông điệp: ");
  for (;;) {
    char ch = getchar();
    if (ch == '\n') {
      break;
    }
    if (isalpha(ch)) {
      msg[len] = ch;
      ++len;
      if (len >= N) {
        break;
      }
    }
  }
  msg[len] = '\0';

  if (is_palindrome(msg)) {
    printf("Palindrome\n");
  } else {
    printf("Không phải palindrome\n");
  }
  return 0;
}