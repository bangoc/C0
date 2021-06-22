#include <stdio.h>
#include <ctype.h>

int main() {
  char ch;
  printf("Nhập một từ: ");
  int sum = 0;
  int a[256] = {0};
  for (char ch = 'A'; ch <= 'Z'; ++ch) {
    switch (ch) {
      case 'A':
      case 'E':
      case 'I':
      case 'L':
      case 'N':
      case 'O':
      case 'R':
      case 'S':
      case 'T':
      case 'U':
        a[ch] = 1;
        break;
      case 'D':
      case 'G':
        a[ch] = 2;
        break;
      case 'B':
      case 'C':
      case 'M':
      case 'P':
        a[ch] = 3;
        break;
      case 'F':
      case 'H':
      case 'V':
      case 'W':
      case 'Y':
        a[ch] = 4;
        break;
      case 'K':
        a[ch] = 5;
        break;
      case 'J':
      case 'X':
        a[ch] = 8;
        break;
      case 'Q':
      case 'Z':
        a[ch] = 10;
        break;
    }
  }
  for (;;) {
    ch = toupper(getchar());
    if (ch == '\n') {
      break;
    }
    sum += a[ch];
  }
  printf("Giá trị tính được: %d\n", sum);
  return 0;
}