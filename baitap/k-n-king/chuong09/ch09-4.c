#include <stdbool.h>
#include <stdio.h>

void read_word(int counts[256]) {
  char ch;
  for (;;) {
    ch = getchar();
    if (ch == '\n') {
      break;
    }
    ++counts[ch];
  }
}

bool equal_array(int counts1[256], int counts2[256]) {
  bool ret = true;
  for (int i = 0; i < 256; ++i) {
    if (counts1[i] != counts2[i]) {
      ret = false;
      break;
    }
  }
  return ret;
}

int main() {
  int counts1[256] = {0},
      counts2[256] = {0};
  printf("Nhập từ thứ nhất: ");
  read_word(counts1);
  printf("Nhập từ thứ hai: ");
  read_word(counts2);

  if (equal_array(counts1, counts2)) {
    printf("Các từ là các hoán vị.\n");
  } else {
    printf("Các từ không phải là các hoán vị.\n");
  }
  return 0;
}