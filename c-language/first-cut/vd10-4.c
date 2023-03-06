/*
  (C) Nguyen Ba Ngoc 2022
  Đọc văn bản theo từng dòng và xuất ra tệp khác theo thứ tự ngược lại.
  Giả sử văn bản có không quá 100 dòng và mỗi dòng có độ dài không quá
  255 ký tự. Dòng cuối cùng trong tệp đầu vào có chứa dấu cách.
*/

#include <stdio.h>

#define MAXN 100
#define MAXL 256

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Usage: ./inverse inp.txt out.txt\n");
    return 1;
  }
  FILE *inp = fopen(argv[1], "r"),
       *out = fopen(argv[2], "w");
  if (!inp || !out) {
    fprintf(stderr, "Lỗi mở tệp\n");
    return 1;
  }
  int n = 0;
  char lines[MAXN][MAXL];
  while (fgets(lines[n], MAXL, inp)) {
    ++n;
  }
  for (int i = n - 1; i >= 0; --i) {
    fprintf(out, "%s", lines[i]);
  }
  fclose(inp);
  fclose(out);
}