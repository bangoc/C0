#include <stdio.h>
#include <string.h>

int main() {
  char words[30][22], end;
  int cc = 0;
  printf("Nhập một câu: ");
  for (;;) {
    scanf("%s", words[cc]);
    ++cc;
    int len = strlen(words[cc - 1]);
    if (len > 0) {
      char ch = words[cc - 1][len - 1];
      if (ch == '.' || ch == '!' || ch == '?') {
        end = ch;
        words[cc - 1][len - 1] = '\0';
        break;
      }
    }
  }
  printf("Câu đảo ngược: ");
  for (int i = cc - 1;  i >= 0; --i) {
    printf("%s", words[i]);
    if (i > 0) {
      printf(" ");
    }
  }
  printf("%c\n", end);
  return 0;
}