#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Sử dụng: compress_file tên-tệp\n");
    return 1;
  }
  FILE *inp = fopen(argv[1], "rb");
  char out_name[strlen(argv[1]) + 5];
  strcpy(out_name, argv[1]);
  strcat(out_name, ".rle");
  FILE *out = fopen(out_name, "wb");
  if (inp == NULL || out == NULL) {
    printf("Lỗi mở tệp.\n");
    return 1;
  }
  int ch, b, c = 0;
  while ((ch = fgetc(inp)) != EOF) {
    if (c == 0) {
      b = ch;
      ++c;
      continue;
    }
    if (ch == b) {
      ++c;
      if (c >= 255) {
        fputc(c, out);
        fputc(b, out);
        c = 0;
      }
    } else {
      fputc(c, out);
      fputc(b, out);
      b = ch;
      c = 1;
    }
  }
  if (c > 0) {
    fputc(c, out);
    fputc(b, out);
  }
  fclose(inp);
  fclose(out);

  return 0;
}