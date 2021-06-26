#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(const char *word) {
  int sum = 0;
  for (;*word != '\0'; ++word) {
    switch (toupper(*word)) {
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
        sum += 1;
        break;
      case 'D':
      case 'G':
        sum += 2;
        break;
      case 'B':
      case 'C':
      case 'M':
      case 'P':
        sum += 3;
        break;
      case 'F':
      case 'H':
      case 'V':
      case 'W':
      case 'Y':
        sum += 4;
        break;
      case 'K':
        sum += 5;
        break;
      case 'J':
      case 'X':
        sum += 8;
        break;
      case 'Q':
      case 'Z':
        sum += 10;
        break;
      // Bỏ qua các ký tự khác
    }
  }
  return sum;
}

int main() {
  char ch;
  printf("Nhập một từ: ");
  char word[100];
  fgets(word, 100, stdin);
  printf("Giá trị tính được: %d\n", compute_scrabble_value(word));
  return 0;
}