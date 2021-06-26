#include <stdio.h>

int main() {
  int d1, d2;
  printf("Nhập một số có 2 chữ số: ");
  scanf("%1d%1d", &d1, &d2);
  char *digits1[] = {"", "Mười", "Hai mươi", "Ba mươi", "Bốn mươi", "Năm mươi", "Sáu mươi",
            "Bẩy mươi", "Tám mươi", "Chín mươi"};
  char *digits2[] = {"", "mốt", "hai", "ba", "bốn", "lăm", "sáu", "bẩy", "tám", "chín"};
  printf("%s", digits1[d1]);
  if (d2 > 0) {
    printf(" %s", digits2[d2]);
  }
  printf("\n");
  return 0;
}