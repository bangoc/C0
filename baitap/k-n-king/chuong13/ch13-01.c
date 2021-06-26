#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  char smallest_word[100] = {0}, largest_word[100] = {0}, word[100];
  bool first = true;
  for (;;) {
    printf("Nhập từ: ");
    scanf("%s", word);
    if (strlen(word) == 4) {
      break;
    }
    if (first) {
      strcpy(smallest_word, word);
      strcpy(largest_word, word);
      first = false;
    } else {
      if (strcmp(word, smallest_word) < 0) {
        strcpy(smallest_word, word);
      } else if (strcmp(word, largest_word) > 0) {
        strcpy(largest_word, word);
      }
    }
  }
  printf("Từ nhỏ nhất: %s\n", smallest_word);
  printf("Từ lớn nhất: %s\n", largest_word);
  return 0;
}