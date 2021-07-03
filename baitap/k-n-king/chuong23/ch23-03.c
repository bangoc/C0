#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
int main() {
  int ch;
  bool first = true;
  while ((ch = getchar()) != EOF) {
    if (isspace(ch)) {
      first = true;
    } else if (isalpha(ch) && first) {
      ch = toupper(ch);
      first = false;
    }
    putchar(ch);
  }
  return 0;
}