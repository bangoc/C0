/* Kiểm tra liệu có thể mở một tệp để đọc hay không */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;

  if (argc < 2) {
    printf("Sử dụng: canopen {danh sách tên-tệp}\n");
    exit(EXIT_FAILURE);
  }

  for (int i = 1; i < argc; ++i) {
    if ((fp = fopen(argv[i], "r")) == NULL) {
      printf("Không thể mở %s\n", argv[i]);
      exit(EXIT_FAILURE);
    }

    printf("Có thể mở %s\n", argv[i]);
    fclose(fp);
  }
  return 0;
}
