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
#define N 100
int main() {
   int n, j = 0;
   printf("Nhập số n (<= %d) = ", N);
   scanf("%d", &n);

   // a[100], có thể cải tiến với mảng cấp phát động.
   struct point a[N];
   for (int i = 0; i < n; ++i) {
     printf("Nhập điểm %d: ", i);
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
   printf("Điểm gần nhất là: (%.3lf, %.3lf)\n",  a[j].x, a[j].y);
   return 0;
}
