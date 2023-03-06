/*
  (C) Nguyen Ba Ngoc 2022
  Chương trình nhận tên tệp qua tham số dòng lệnh và
  xuất ra kích thước tệp được tính như khoảng cách tính
  theo bytes từ vị trí kết thúc tệp tới đầu tệp.
*/

#include <stdio.h>
int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage: ./sizeof file.txt\n");
    return 1;
  }
  FILE *inp = fopen(argv[1], "rb");
  fseek(inp, 0, SEEK_END);
  long sz = ftell(inp);
  printf("Size = %ld bytes\n", sz);
  fclose(inp);
}