#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Sử dụng: line-count tên-tệp\n");
    return 1;
  }
  FILE *f = fopen(argv[1], "r");
  char buff[512];
  int cc = 0;
  while (!feof(f) && fgets(buff, 512, f)) {
    if (buff[strlen(buff) - 1] == '\n') {
      ++cc;
    }
  }
  printf("Số lượng dòng là: %d\n", cc);
  fclose(f);
  return 0;
}