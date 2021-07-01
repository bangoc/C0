/* Kiểm tra liệu có thể mở một tệp để đọc hay không */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;

  if (argc != 2) {
    printf("Sử dụng: canopen tên-tệp\n");
    exit(EXIT_FAILURE);
  }

  if ((fp = fopen(argv[1], "r")) == NULL) {
    printf("Không thể mở %s\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  printf("Có thể mở %s\n", argv[1]);
  fclose(fp);
  return 0;
}
