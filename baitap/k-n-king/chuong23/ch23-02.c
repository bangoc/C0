#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
int main() {
  int ch;
  bool skip = true;
  while ((ch = getchar()) != EOF) {
    if (isspace(ch)) {
      if (skip) {
        continue;
      } else {
        putchar(ch);
        if (ch == '\n') {
          skip = true;
        }
      }
    } else {
      skip = false;
      putchar(ch);
    }
  }
  return 0;
}