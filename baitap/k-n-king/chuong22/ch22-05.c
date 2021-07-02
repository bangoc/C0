#include <stdio.h>

#define KEY '&'

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Sử dụng: ./xor tệp-nguồn tệp-đích\n");
    return 0;
  }
  int orig_char, new_char;
  FILE *inp = fopen(argv[1], "rb");
  FILE *out = fopen(argv[2], "wb");
  if (inp == NULL || out == NULL) {
    printf("Lỗi mở tệp.\n");
    return 1;
  }
  while ((orig_char = fgetc(inp)) != EOF) {
    new_char = orig_char ^ KEY;
    fputc(new_char, out);
  }
  fclose(inp);
  fclose(out);
  return 0;
}