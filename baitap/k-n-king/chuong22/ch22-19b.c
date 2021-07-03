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
  int ch, prev = 0;
  // Chuyển \n thành cặp \r\n
  while ((ch = fgetc(inp)) != EOF) {
    if (ch == '\n') {
      if (prev != '\r') {
        fputc('\r', out);
      }
    }
    fputc(ch, out);
    prev = ch;
  }
  fclose(inp);
  fclose(out);
  return 0;
}
