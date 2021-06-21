#include <stdio.h>

int main() {
  int ch;
  float n = 0, len = 0, sum = 0;
  printf("Nhập một câu: ");
  for (;;) {
    ch = getchar();
    if (ch == '\n' || ch == ' ') {
      if (len > 0) {
        sum += len;
        ++n;
        len = 0;
      }
    } else {
      ++len;
    }
    if (ch == '\n') {
      break;
    }
  }
  if (n > 0) {
    printf("Trung bình độ dài từ: %.1f\n", sum/n);
  }
  return 0;
}