#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Sử dụng: ./w2u tệp-vào tệp-ra\n");
    return 1;
  }
  FILE *inp = fopen(argv[1], "r");
  FILE *out = fopen(argv[2], "w");
  if (inp == NULL || out == NULL) {
    printf("Lỗi mở tệp.\n");
    return 1;
  }
  int ch;
  // Chuyển cặp \r\n thành \n
  while ((ch = fgetc(inp)) != EOF) {
    if (ch == '\r') {
      int ch2 = fgetc(inp);
      if (ch2 != EOF) {
        if (ch2 == '\n') {
          fputc(ch2, out);
        } else {
          fputc(ch, out);
          fputc(ch2, out);
        }
      } else {
        fputc(ch, out);
      }
    } else {
      fputc(ch, out);
    }
  }
  fclose(inp);
  fclose(out);
  return 0;
}
