/*
  (C) Nguyen Ba Ngoc 2021
*/

#include <stdio.h>
struct point {float x; float y;};
union gtype {long l; double d;};
int main() {
   struct point p;
   union gtype g;
   printf("Nhập tọa độ 1 điểm: ");
   scanf("%f%f", &p.x, &p.y);
   printf("Bạn đã điểm: (%.3f, %.3f)\n", p.x, p.y);
   printf("Nhập 1 giá trị kiểu long: ");
   scanf("%ld", &g.l);
   printf("Bạn đã nhập %ld\n", g.l);
   return 0;
}
