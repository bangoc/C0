#include <ctype.h>
#include <stdbool.h>
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
    if (isalpha(ch)) {
      *curr = ch;
      ++curr;
      if (curr >= &msg[N]) {
        break;
      }
    }
  }
  bool palindrome = true;
  char *p1 = &msg[0], *p2 = curr - 1;
  for (;;) {
    if (p2 <= p1) {
      break;
    }
    if (toupper(*p1) != toupper(*p2)) {
      palindrome = false;
      break;
    }
    ++p1;
    --p2;
  }
  if (palindrome) {
    printf("Palindrome\n");
  } else {
    printf("Không phải palindrome\n");
  }
  return 0;
}