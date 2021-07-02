#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Sử dụng: uncompress_file tên-tệp.rle\n");
    return 1;
  }
  int len = strlen(argv[1]);
  char *p = argv[1] + len - 4;
  if (len <= 4 || strcmp(p, ".rle") != 0) {
    printf("Tệp không có phần mở rộng .rle\n");
    return 1;
  }
  FILE *inp = fopen(argv[1], "rb");
  char out_name[strlen(argv[1])];
  strcpy(out_name, argv[1]);
  out_name[len - 4] = '\0';
  FILE *out = fopen(out_name, "wb");
  if (inp == NULL || out == NULL) {
    printf("Lỗi mở tệp.\n");
    return 1;
  }

  // Giải nén
  int b, c = 0;
  for (;;) {
    if ((c = fgetc(inp)) == EOF) {
      break;
    }
    if ((b = fgetc(inp)) == EOF) {  // Chỉ có số lần, không có byte lặp
      printf("Lỗi dữ liệu.\n");
      break;
    }
    for (int i = 0; i < c; ++i) {
      fputc(b, out);
    }
  }
  fclose(inp);
  fclose(out);

  return 0;
}