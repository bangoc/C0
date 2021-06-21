#include <stdio.h>
#include <ctype.h>

int main() {
  char ch;
  printf("Nhập một câu: ");
  int s = 0;
  for (;;) {
    ch = getchar();
    if (ch == '\n') {
      break;
    }
    ch = toupper(ch);
    switch (ch) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        ++s;
        break;
    }
  }
  printf("Câu của bạn chứa %d nguyên âm.\n", s);
  return 0;
}