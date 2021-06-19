#include <stdio.h>
int main() {
  int g1, g2, g3;
  printf("Nhập số điện thoại [xxxx.xxx.xxxx]: ");
  scanf("%d.%d.%d", &g1, &g2, &g3);
  printf("Bạn đã nhập (%04d) %03d-%04d\n", g1, g2, g3);
  return 0;
}