#include <stdio.h>

#include "book.h"

int main() {
  struct book book[] = {
    {1, "Ngôn ngữ lập trình C", 121000},
    {2, "Giáo trình Tin Học Đại Cương", 125000},
    {3, "Giáo trình Giải Tích I", 80000}
  };
  int n = sizeof(book) / sizeof(book[0]);
  FILE *o = fopen("book.dat", "wb");
  if (!o) {
    printf("Lỗi mở tệp\n");
    return 1;
  }
  fwrite(book, sizeof(book[0]), n, o);
  fclose(o);
  return 0;
}