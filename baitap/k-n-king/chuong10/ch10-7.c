#include <ctype.h>
#include <stdio.h>

/*
 _       _    _           _    _   _    _   _
| |   |  _|   _|   |_|   |_   |_    |  |_| |_|
|_|   | |_    _|     |    _|  |_|   |  |_|  _|
*/

#define MAX_DIGITS 10
char segments[10][4][4] =
    { { {' ', '_', ' ', ' '},
        {'|', ' ', '|', ' '},
        {'|', '_', '|', ' '},
        {' ', ' ', ' ', ' '} },

      { {' ', ' ', ' ', ' '},
        {' ', ' ', '|', ' '},
        {' ', ' ', '|', ' '},
        {' ', ' ', ' ', ' '} },

      { {' ', '_', ' ', ' '},
        {' ', '_', '|', ' '},
        {'|', '_', ' ', ' '},
        {' ', ' ', ' ', ' '} },

      { {' ', '_', ' ', ' '},
        {' ', '_', '|', ' '},
        {' ', '_', '|', ' '},
        {' ', ' ', ' ', ' '} },

      { {' ', ' ', ' ', ' '},
        {'|', '_', '|', ' '},
        {' ', ' ', '|', ' '},
        {' ', ' ', ' ', ' '} },

      { {' ', '_', ' ', ' '},
        {'|', '_', ' ', ' '},
        {' ', '_', '|', ' '},
        {' ', ' ', ' ', ' '} },

      { {' ', '_', ' ', ' '},
        {'|', '_', ' ', ' '},
        {'|', '_', '|', ' '},
        {' ', ' ', ' ', ' '} },

      { {' ', '_', ' ', ' '},
        {' ', ' ', '|', ' '},
        {' ', ' ', '|', ' '},
        {' ', ' ', ' ', ' '} },

      { {' ', '_', ' ', ' '},
        {'|', '_', '|', ' '},
        {'|', '_', '|', ' '},
        {' ', ' ', ' ', ' '} },

      { {' ', '_', ' ', ' '},
        {'|', '_', '|', ' '},
        {' ', '_', '|', ' '},
        {' ', ' ', ' ', ' '} }
    };

char digits[4][MAX_DIGITS * 4];

void clear_digits_array() {
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < MAX_DIGITS * 4; ++j) {
      digits[i][j] = ' ';
    }
  }
}

void process_digit(int digit, int position) {
  int offset = position * 4;
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      digits[i][offset + j] = segments[digit][i][j];
    }
  }
}

void print_digits_array() {
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < MAX_DIGITS * 4; ++j) {
      printf("%c", digits[i][j]);
    }
    printf("\n");
  }
}

int main() {
  clear_digits_array();
  char ch;
  int pos = 0;
  printf("Nhập một số: ");
  for (;;) {
    ch = getchar();
    if (ch == '\n') {
      break;
    }
    if (pos >= MAX_DIGITS) {
      continue;
    }
    if (isdigit(ch)) {
      process_digit(ch - '0', pos);
      ++pos;
    }
  }
  print_digits_array();
  return 0;
}