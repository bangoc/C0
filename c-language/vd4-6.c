/* (C) Nguyễn Bá Ngọc 2022 */

#include <stdio.h>

int main() {
  int w, p;
  double v;
  printf("Giá trị số: ");
  scanf("%lf", &v);
  printf("Độ rộng & độ chính xác: ");
  scanf("%d%d", &w, &p);
  printf("%1$*2$.*3$f\n", v, w, p);
}