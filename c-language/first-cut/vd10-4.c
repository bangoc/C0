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
    printf("Usage: ./prog inp.txt out.txt\n");
    return 1;
  }
  char *iname = argv[1], *oname = argv[2];
  FILE *inp = fopen(iname, "r"),
       *out = fopen(oname, "w");
  if (!inp || !out) {
    printf("Lỗi mở tệp\n");
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
  return 0;
}