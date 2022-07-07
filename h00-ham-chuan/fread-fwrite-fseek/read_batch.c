#include <stdio.h>

#include "book.h"

int main() {
  FILE *inp = fopen("book.dat", "rb");
  if (!inp) {
    printf("Lỗi mở tệp\n");
    return 1;
  }
  struct book book[10];
  int n = fread(book, sizeof(book[0]), 10, inp);
  printf("Số lượng sách = %d\n", n);
  for (int i = 0; i < n; ++i) {
    printf("%d | %s | %g\n", book[i].id, book[i].name,
             book[i].price);
  }
  fclose(inp);
  return 0;
}