#include <stdio.h>

int main() {
  char a[100], *curr;
  char end;
  printf("Nhập một câu: ");
  curr = a;
  for (;;) {
    char ch = getchar();
    if (ch == '.' || ch == '?' || ch == '!') {
      end = ch;
      break;
    }
    *curr = ch;
    ++curr;
  }
  char *j1 = curr - 1;
  printf("Câu đảo ngược: ");
  for (char *i = j1;  i >= a; --i) {
    if (*i == ' ')  {
      for (char *j = i + 1; j <= j1; ++j) {
        printf("%c", *j);
      }
      j1 = i - 1;
      printf(" ");
    }
  }
  for (char *j = a; j <= j1; ++j) {
    printf("%c", *j);
  }
  printf("%c\n", end);
  return 0;
}