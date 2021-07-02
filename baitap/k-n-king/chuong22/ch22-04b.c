#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Sử dụng: word-count tên-tệp\n");
    return 1;
  }
  FILE *f = fopen(argv[1], "r");
  char buff[512];
  int cc = 0;
  bool start = false;
  while (!feof(f) && fgets(buff, 512, f)) {
    for (int i = 0; i < strlen(buff); ++i) {
      if (isspace(buff[i])) {
        if (start) {
          ++cc;
          start = false;
        }
      } else {
        if (!start) {
          start = true;
        }
      }
    }
  }
  printf("Số lượng từ: %d\n", cc);
  fclose(f);
  return 0;
}