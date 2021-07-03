#include <ctype.h>
#include <stdio.h>

int main() {
  char ch;
  while ((ch = getchar()) != EOF) {
    if (ch != '\n' && iscntrl(ch)) {
      ch = '?';
    }
    putchar(ch);
  }
  return 0;
}