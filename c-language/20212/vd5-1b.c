/*
  (C) Nguyen Ba Ngoc 2022
  Minh họa hàm tính USCLN
*/
#include <stdio.h>
int uscln(int a, int b) {
  while (b != 0) {
    int tmp = a % b;
    a = b;
    b = tmp;
  }
  return a;
}
int main() {
  int a, b, c;
  printf("Nhập a b c: ");
  scanf("%d%d%d", &a, &b, &c);
  printf("USCLN(%d, %d) = %d\n", a, b, uscln(a, b));
  printf("USCLN(%d, %d) = %d\n", a, c, uscln(a, c));
  printf("USCLN(%d, %d) = %d\n", b, c, uscln(b, c));
  return 0;
}
