#include <stdio.h>
#include <ctype.h>

int count_vowel(const char *sentence) {
  int s = 0;
  for (;*sentence != '\0'; ++sentence) {
    switch (toupper(*sentence)) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        ++s;
        break;
    }
  }
  return s;
}

int main() {
  char ch;
  printf("Nhập một câu: ");
  int s = 0;
  char sentence[100];
  fgets(sentence, 100, stdin);
  printf("Câu của bạn chứa %d nguyên âm.\n", count_vowel(sentence));
  return 0;
}