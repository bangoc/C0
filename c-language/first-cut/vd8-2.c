/*
  (C) Nguyen Ba Ngoc 2021
  Nhập/xuất đối tượng point
*/

#include <stdio.h>
struct point {double x, y;};
void scan_point(struct point *p) {
  printf("Nhập tọa độ 1 điểm: ");
  scanf("%lf%lf", &p->x, &p->y);
}
void print_point(const struct point *p) {
  printf("Tọa độ của điểm là (%.2lf, %.2lf)\n",
        p->x, p->y);
}
int main() {
   struct point p;
   scan_point(&p);
   print_point(&p);
   return 0;
}
