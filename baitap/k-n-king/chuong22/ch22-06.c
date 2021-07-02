#include <ctype.h>
#include <stdio.h>
static char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
          'A', 'B', 'C', 'D', 'E', 'F'};

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Sử dụng: ./hex-view tên-tệp\n");
    return 1;
  }
  FILE *f = fopen(argv[1], "r");
  if (f == NULL) {
    printf("Không thể mở tệp %s\n", argv[1]);
    return 1;
  }
  int offset = 0, i = 0;
  printf("Xê dịch            Bytes                 Ký tự\n");
  printf("------- ----------------------------- ----------\n");
  int ch;
  char text[10 + 1] = {0};
  while ((ch = fgetc(f)) != EOF) {
    if (i == 0) {
      printf("%7d ", offset);
    }
    printf("%c%c ",digits[ch / 16], digits[ch % 16]);
    text[i] = isprint(ch)? ch: '.';
    ++offset;
    ++i;
    if (i >= 10) {
      text[i] = '\0';
      printf("%s\n", text);
      i = 0;
    }
  }
  fclose(f);

  // In dòng cuối cùng
  text[i] = '\0';
  if (i > 0) {
    for (int j = i; j < 10; ++j) {
      printf("   ");
    }
    printf("%s\n", text);
  }
  return 0;
}