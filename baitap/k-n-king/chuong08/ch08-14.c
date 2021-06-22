#include <stdio.h>

int main() {
  char a[100];
  int len = 0;
  char end;
  printf("Nhập một câu: ");
  for (;;) {
    char ch = getchar();
    if (ch == '.' || ch == '?' || ch == '!') {
      end = ch;
      break;
    }
    a[len] = ch;
    ++len;
  }
  int j1 = len - 1;
  printf("Câu đảo ngược: ");
  for (int i = len - 1;  i >= 0; --i) {
    if (a[i] == ' ')  {
      for (int j = i + 1; j <= j1; ++j) {
        printf("%c", a[j]);
      }
      j1 = i - 1;
      printf(" ");
    }
  }
  for (int j = 0; j <= j1; ++j) {
    printf("%c", a[j]);
  }
  printf("%c\n", end);
  return 0;
}