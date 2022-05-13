/*
  (C) Nguyen Ba Ngoc 2022
  Đọc n số nguyên từ tệp và xuất ra tệp khác theo thứ tự ngược lại.
  Các tên tệp được truyền qua tham số dòng lệnh. Giả sử n < 100.
*/

#include <stdio.h>

#define MAXN 100

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
  int n;
  fscanf(inp, "%d", &n);
  int a[MAXN];
  for (int i = 0; i < n; ++i) {
    fscanf(inp, "%d", &a[i]);
  }
  fprintf(out, "%d\n", n);
  for (int i = n - 1; i >= 0; --i) {
    fprintf(out, " %d", a[i]);
  }
  fprintf(out, "\n");
  fclose(inp);
  fclose(out);
  return 0;
}