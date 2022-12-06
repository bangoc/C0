/*
  (C) Nguyen Ba Ngoc 2022
  Chương trình sao chép tệp, tên tệp được truyền qua
  các tham số dòng lệnh.
*/

#include <stdio.h>

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
  int c;
  long sz = 0;
  while ((c = fgetc(inp)) != EOF) {
    fputc(c, out);
    ++sz;
  }
  fclose(inp);
  fclose(out);
  printf("Hoàn thành sao chép %ld (bytes)\n", sz);
  return 0;
}