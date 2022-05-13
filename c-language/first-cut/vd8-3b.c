/*
  (C) Nguyen Ba Ngoc
*/
#include <stdio.h>
#include <math.h>
struct point {
  double x, y;
};
double distance(struct point *p1, struct point *p2) {
  double x = (p1->x - p2->x), y = (p1->y - p2->y);
  return sqrt(x*x + y*y);
}
int main() {
   struct point p1, p2;
   printf("Nhập tọa độ 2 điểm: ");
   scanf("%lf%lf%lf%lf", &p1.x, &p1.y, &p2.x, &p2.y);
   printf("Khoảng cách = %.3lf\n", distance(&p1, &p2));
   return 0;
}
