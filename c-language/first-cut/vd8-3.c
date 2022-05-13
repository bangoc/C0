/*
  (C) Nguyen Ba Ngoc 2022
  Minh họa thực hiện các phép toán đại số với cấu trúc point.
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
struct point *sum_point(const struct point *a,
    const struct point *b, struct point *c) {
  c->x = a->x + b->x;
  c->y = a->y + b->y;
  return c;
}
struct point *div_point(struct point *p, double k) {
  p->x /= k;
  p->y /= k;
  return p;
}
int main() {
   struct point a, b, c;
   scan_point(&a);
   scan_point(&b);

   // c = (a + b)/2
   div_point(sum_point(&a, &b, &c), 2);
   print_point(&c);
   return 0;
}
