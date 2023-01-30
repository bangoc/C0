/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa sử dụng nhóm như kiểu long hoặc double
*/

#include <stdio.h>
typedef union generic_type {
  long l; 
  double d;
} gtype;
gtype sum_d(gtype g1, gtype g2) {
  return (gtype){.d = g1.d + g2.d};
}
gtype sum_l(gtype g1, gtype g2) {
  return (gtype){.l = g1.l + g2.l};
}
int main() {
  gtype g1, g2;
  printf("Nhập vào 2 số thực: ");
  scanf("%lf%lf", &g1.d, &g2.d);
  printf("%.3f + %.3f = %.3f\n", 
         g1.d, g2.d, sum_d(g1, g2).d);
  printf("Nhập vào 2 số nguyên: ");
  scanf("%ld%ld", &g1.l, &g2.l);
  printf("%ld + %ld = %ld\n", 
         g1.l, g2.l, sum_l(g1, g2).l);
}
