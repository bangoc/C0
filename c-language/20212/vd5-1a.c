/*
  (C) Nguyen Ba Ngoc 2022
  Chương trình này yêu cầu nhập và tính USCLN của 2 số
  nguyên a và b.
  *
  Thử: Điều chỉnh chương trình để nhập thêm c, rồi in ra
  các USCLN của a và b, b và c, và a và c.
*/
#include <stdio.h>
int main() {
  int a, b;
  printf("Nhập a b: ");
  scanf("%d%d", &a, &b);
  while (b != 0) {
    int tmp = a % b;
    a = b;
    b = tmp;
  }
  printf("USCLN = %d\n", a);
  return 0;
}
