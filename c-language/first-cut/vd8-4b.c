/*
  (C) Nguyen Ba Ngoc 2021
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
  int n, j = 0;
  scanf("%d", &n);
  struct point a[100];
  for (int i = 0; i < n; ++i) {
    scanf("%lf%lf", &a[i].x, &a[i].y);
  }
  struct point p0 = {0, 0};
  double min = distance(&p0, &a[0]);
  for (int i = 1; i < n; ++i) {
    double dist = distance(&p0, &a[i]);
    if (dist < min) {
      min = dist;
      j = i;
    }
  }
  printf("(%.3lf, %.3lf)\n",  a[j].x, a[j].y);
}
