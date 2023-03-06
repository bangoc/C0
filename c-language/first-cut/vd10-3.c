/*
  (C) Nguyen Ba Ngoc 2022
  Đọc n số nguyên từ tệp và xuất ra tệp khác theo thứ tự ngược lại.
  Các tên tệp được truyền qua tham số dòng lệnh. Giả sử n < 100.
*/

#include <stdio.h>

#define MAXN 100

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
  int n;
  fscanf(inp, "%d", &n);
  int a[MAXN];
  for (int i = 0; i < n; ++i) {
    fscanf(inp, "%d", &a[i]);
  }
  fprintf(out, "%d\n", n);
  for (int i = n - 1; i > 0; --i) {
    fprintf(out, "%d ", a[i]);
  }
  fprintf(out, "%d\n", a[0]);
  fclose(inp);
  fclose(out);
}