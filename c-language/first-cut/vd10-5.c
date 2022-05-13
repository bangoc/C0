/*
  (C) Nguyen Ba Ngoc 2022
  Chương trình sao chép tệp, tên tệp được truyền qua
  các tham số dòng lệnh.
*/

#include <stdio.h>

#define MAXSIZE 1024

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Usage: ./prog source dest\n");
    return 1;
  }
  char *iname = argv[1], *oname = argv[2];
  FILE *inp = fopen(iname, "rb"),
       *out = fopen(oname, "wb");
  if (!inp || !out) {
    printf("Lỗi mở tệp\n");
    return 1;
  }
  unsigned char buff[MAXSIZE];
  while (!feof(inp)) {
    int n = fread(buff, 1, MAXSIZE, inp);
    fwrite(buff, 1, n, out);
  }
  fclose(inp);
  fclose(out);
  return 0;
}