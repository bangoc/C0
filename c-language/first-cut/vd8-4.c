/*
  (C) Nguyen Ba Ngoc 2022
  Tìm điểm gần gốc tọa độ nhất, triển khai với hàm.
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
#define MAXN 100
int less_point(const struct point*p1,
        const struct point *p2) {
  return p1->x * p1->x + p1->y * p1->y <
           p2->x * p2->x + p2->y * p2->y;
}
int main() {
   struct point a[MAXN];
   printf("Nhập số lượng phần tử (<=100): ");
   int n;
   scanf("%d", &n);
   printf("Nhập %d điểm: \n", n);
   for (int i = 0; i < n; ++i) {
     scan_point(a + i);
   }
   struct point min = a[0];
   for (int i = 1; i < n; ++i) {
     if (less_point(&a[i], &min)) {
       min = a[i];
     }
   }
   print_point(&min);
   return 0;
}
