#include <ctype.h>
#include <stdbool.h>
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
    if (isalpha(ch)) {
      msg[len] = ch;
      ++len;
      if (len >= N) {
        break;
      }
    }
  }
  bool palindrome = true;
  for (int i = 0; i < len - 1; ++i) {
    int j = len - 1 - i;
    if (j <= i) {
      break;
    }
    if (toupper(msg[i]) != toupper(msg[j])) {
      palindrome = false;
      break;
    }
  }
  if (palindrome) {
    printf("Palindrome\n");
  } else {
    printf("Không phải palindrome\n");
  }
  return 0;
}