#include <ctype.h>
#include <stdio.h>

int main() {
  int prev = 0, ch;
  int sentence = 0;
  while ((ch = getchar()) != EOF) {
    if (isspace(ch) &&
        (prev == '.' || prev == '?' || prev == '!')) {
      ++sentence;
    }
    prev = ch;
  }
  printf("Số lượng câu là %d\n", sentence);
  return 0;
}