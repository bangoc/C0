#include <stdio.h>
int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Sử dụng: fcat f1.c f2.c f3.c\n");
    return 0;
  }
  for (int i = 1; i < argc; ++i) {
    FILE *f = fopen(argv[i], "r");
    if (!f) {
      printf("Không thể mở tệp %s\n", argv[i]);
      return 1;
    }
    char buff[100];
    while (!feof(f)) {
      fgets(buff, 100, f);
      printf("%s", buff);
    }
    fclose(f);
    printf("\n");
  }
  return 0;
}