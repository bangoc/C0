#include <stdio.h>

#include "book.h"

int main() {
  FILE *inp = fopen("book.dat", "rb");
  if (!inp) {
    printf("Lỗi mở tệp\n");
    return 1;
  }
  struct book book;
  int idx;
  printf("array index = ");
  scanf("%d", &idx);
  fseek(inp, idx * sizeof(book), SEEK_SET);
  int n = fread(&book, sizeof(book), 1, inp);
  if (n != 1) {
    printf("Không tìm thấy.\n");
  } else {
    printf("%d | %s | %g\n", book.id, book.name, book.price);
  }
  fclose(inp);
  return 0;
}