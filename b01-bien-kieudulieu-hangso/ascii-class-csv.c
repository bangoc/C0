/*
 (C) Nguyen Ba Ngoc, 2023
 Chương trình này phân lớp các ký tự bảng mã ASCII
 theo các lớp print - ký tự in, alnum - chữ cái hoặc
 chữ số, punct - dấu, space - khoảng trắng, cntrl
 - ký tự điều khiển.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *names[128] = {
  [0] = "null",
  "SOH",
  "STX",
  "ETX",
  "EOT",
  "ENQ",
  "ACK",
  "BEL",
  "BS",
  "TAB",
  "LF",
  "VT",
  "FF",
  "CR",
  "SO",
  "SI",
  "DLE",
  "DC1",
  "DC2",
  "DC3",
  "DC4",
  "NAK",
  "SYN",
  "ETB",
  "CAN",
  "EM",
  "SUB",
  "ESC",
  "FS",
  "GS",
  "RS",
  "US",
  "Space",
  ['\"'] = "\"\"\"\"",
  [127] = "DEL"
};

const char *heads[] = {"dec", "char", "cntrl", "space", "punct", "alnum", "print"};

char tf(int v) {
  if (v) {
    return 'T';
  }
  return 'F';
}

const char sep = '\t';

int main(int argc, char *argv[]) {
  int n = sizeof(heads)/sizeof(heads[0]);
  for (int i = 0; i < n; ++i) {
    printf("%s", heads[i]);
    if (i < n - 1) {
      printf("%c", sep);
    }
  }
  printf("\n");
  for (int i = 0; i < 128; ++i) {
    printf("%d%c", i, sep);
    if (names[i]) {
      printf("%s%c", names[i], sep);
    } else {
      printf("%c%c", i, sep);
    }
    printf("%c%c", tf(iscntrl(i)), sep);
    printf("%c%c", tf(isspace(i)), sep);
    printf("%c%c", tf(ispunct(i)), sep);
    printf("%c%c", tf(isalnum(i)), sep);
    printf("%c\n", tf(isprint(i)));
  }
}