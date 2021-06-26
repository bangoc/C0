#include <stdio.h>

double compute_average_word_length(const char *sentence) {
  double sum = 0, len = 0, n = 0;
  for (;;) {
    char ch = *sentence;
    ++sentence;
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
  return n > 0? sum / n : 0;
}

int main() {
  int ch;
  char line[100];
  printf("Nhập một câu: ");
  fgets(line, 100, stdin);
  printf("Trung bình độ dài từ: %.1f\n", compute_average_word_length(line));
  return 0;
}