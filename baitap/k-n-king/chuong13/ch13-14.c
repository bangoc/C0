#include <stdbool.h>  // C99
#include <stdio.h>

bool are_anagrams(const char *word1, const char *word2) {
  int a[256] = {0};
  for (;*word1 != '\0'; ++word1) {
    ++a[*word1];
  }
  for (; *word2 != '\0'; ++word2) {
    --a[*word2];
  }
  for (int i = 0; i < 256; ++i) {
    if (a[i] != 0) {
      return false;
    }
  }
  return true;
}

int main() {
  char ch;
  printf("Nhập từ thứ nhất: ");
  char word1[100], word2[100];
  fgets(word1, 100, stdin);
  printf("Nhập từ thứ hai: ");
  fgets(word2, 100, stdin);

  if (are_anagrams(word1, word2)) {
    printf("Các từ là các hoán vị.\n");
  } else {
    printf("Các từ không phải là các hoán vị.\n");
  }
  return 0;
}