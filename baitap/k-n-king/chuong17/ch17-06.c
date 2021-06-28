#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *words[100];
int words_sz = 0;

int main() {
  char buff[100];
  for (;;) {
    printf("Nhập từ: ");
    fgets(buff, 100, stdin);
    buff[strlen(buff) - 1] = '\0';
    if (strlen(buff) == 0) {  // chuỗi rỗng
      break;
    }
    words[words_sz] = strdup(buff);
    ++words_sz;
  }

  qsort(words, words_sz, sizeof(words[0]), strcmp);

  printf("Theo thứ tự chữ cái:");
  for (int i = 0; i < words_sz; ++i) {
    printf(" %s", words[i]);
  }
  printf("\n");
  return 0;
}