#include <stdio.h>

int main() {
  int d1, d2;
  printf("Nhập một số có 2 chữ số: ");
  scanf("%1d%1d", &d1, &d2);
  switch (d1) {
    case 1:
      printf("Mười");
      break;
    case 2:
      printf("Hai mươi");
      break;
    case 3:
      printf("Ba mươi");
      break;
    case 4:
      printf("Bốn mươi");
      break;
    case 5:
      printf("Năm mươi");
      break;
    case 6:
      printf("Sáu mươi");
      break;
    case 7:
      printf("Bẩy mươi");
      break;
    case 8:
      printf("Tám mươi");
      break;
    case 9:
      printf("Chín mươi");
      break;
  }

  switch (d2) {
    case 1:
      printf(" mốt");
      break;
    case 2:
      printf(" hai");
      break;
    case 3:
      printf(" ba");
      break;
    case 4:
      printf(" bốn");
      break;
    case 5:
      printf(" lăm");
      break;
    case 6:
      printf(" sáu");
      break;
    case 7:
      printf(" bẩy");
      break;
    case 8:
      printf(" tám");
      break;
    case 9:
      printf(" chín");
      break;
  }
  printf(".\n");
  return 0;
}