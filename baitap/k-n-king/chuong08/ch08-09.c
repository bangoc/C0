#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  char a[10][10];
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      a[i][j] = '.';
    }
  }
  int r = 0, c = 0;
  a[r][c] = 'A';
  srand((unsigned)time(NULL));
  int d, r0, r1, c0, c1;
  for (char ch = 'B'; ch <= 'Z'; ++ch) {
    r0 = r - 1;
    if (r0 < 0) {
      r0 = 9;
    }
    r1 = (r + 1) % 10;
    c0 = c - 1;
    if (c0 < 0) {
      c0 = 9;
    }
    c1 = (c + 1) % 10;
    if (a[r0][c] != '.' && a[r1][c] != '.' && a[r][c0] != '.' && a[r][c1] != '.') {
      break;
    }
    for (;;) {
      d = rand() % 4;
      if (d == 0) {
        if (a[r0][c] == '.') {
          r = r0;
          break;
        }
      } else if (d == 1) {
        if (a[r1][c] == '.') {
          r = r1;
          break;
        }
      } else if (d == 2) {
        if (a[r][c0] == '.') {
          c = c0;
          break;
        }
      } else if (d == 3) {
        if (a[r][c1] == '.') {
          c = c1;
          break;
        }
      }
    }
    a[r][c] = ch;
  }
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      printf(" %c", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}