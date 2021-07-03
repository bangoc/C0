/* Sao chép một tệp */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *source_fp, *dest_fp;
  int ch;

  if (argc != 3) {
    fprintf(stderr, "Sử dụng: fcopy tệp-nguồn tệp-đích\n");
    exit(EXIT_FAILURE);
  }

  if ((source_fp = fopen(argv[1], "rb")) == NULL) {
    fprintf(stderr, "Không thể mở %s để đọc\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  if ((dest_fp = fopen(argv[2], "wb")) == NULL) {
    fprintf(stderr, "Không thể mở %s để ghi\n", argv[2]);
    fclose(source_fp);
    exit(EXIT_FAILURE);
  }

  char buff[512];
  int n;
  while ((n = fread(buff, sizeof(char), 512, source_fp)) > 0) {
    fwrite(buff, sizeof(char), n, dest_fp);
  }

  fclose(source_fp);
  fclose(dest_fp);
  return 0;
}
