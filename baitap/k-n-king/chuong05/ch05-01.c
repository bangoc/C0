#include <stdio.h>
int main() {
  int n;
  printf("Nhập 1 số: ");
  scanf("%d", &n);
  int d = 0;
  if (n < 10) {
    d = 1;
  } else if (n < 100) {
    d  = 2;
  } else if (n < 1000) {
    d = 3;
  } else if (n < 10000) {
    d = 4;
  }
  if (n >= 0 && d > 0) {
    printf("số %d có %d chữ số\n", n, d);
  } else {
    printf("Ngoài khoảng.\n");
  }
  return 0;
}