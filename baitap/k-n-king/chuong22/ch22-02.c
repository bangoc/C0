#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Sử dụng: upper tên-tệp\n");
    return 0;
  }
  FILE *f = fopen(argv[1], "r");
  if (!f) {
    printf("Không thể mở tệp %s\n", argv[1]);
    return 1;
  }
  char buff[100];
  while (!feof(f)) {
    fgets(buff, 100, f);
    for (int i = 0; i < strlen(buff); ++i) {
      buff[i] = toupper(buff[i]);
    }
    printf("%s", buff);
  }
  fclose(f);
  printf("\n");
  return 0;
}