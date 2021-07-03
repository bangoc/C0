#include <ctype.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Sử dụng: pphone phones.txt\n");
    return 0;
  }
  FILE *f = fopen(argv[1], "r");
  if (!f) {
    printf("Không thể mở tệp %s để đọc.\n", argv[1]);
    return 0;
  }
  int ch;
  char digits[10];
  int len = 0;
  while ((ch = fgetc(f)) != EOF) {
    if (isdigit(ch)) {
      digits[len++] = ch;
      if (len == 10) {
        printf("(%c%c%c) %c%c%c-%c%c%c%c\n", digits[0], digits[1], digits[2],
            digits[3], digits[4], digits[5], digits[6], digits[7], digits[8],
            digits[9]);
        len = 0;
        while ((ch = fgetc(f)) != EOF) {  // Bỏ qua các ký tự còn lại trên dòng
          if (ch == '\n') {
            break;
          }
        }
      }
    } else if (ch == '\n') {
      printf("Lỗi: Dòng có ít hơn 10 chữ số.\n");
      len = 0;
    }
  }
  return 0;
}