/*
  (C) Nguyen Ba Ngoc 2022
  Chương trình sao chép tệp, tên tệp được truyền qua
  các tham số dòng lệnh.
*/

#include <stdio.h>

#define BUFFSIZE 1024

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Usage: ./copy source dest\n");
    return 1;
  }
  FILE *inp = fopen(argv[1], "rb"),
       *out = fopen(argv[2], "wb");
  if (!inp || !out) {
    fprintf(stderr, "Lỗi mở tệp\n");
    return 1;
  }
  unsigned char buff[BUFFSIZE];
  long sz = 0;
  while (!feof(inp)) {
    int n = fread(buff, 1, BUFFSIZE, inp);
    fwrite(buff, 1, n, out);
    sz += n;
  }
  fclose(inp);
  fclose(out);
  printf("Hoàn thành sao chép %ld (bytes)\n", sz);
}