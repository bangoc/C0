/*
  (C) Nguyen Ba Ngoc 2022
  Chạy lệnh biên dịch với cờ -E để xem kết quả tiền xử lý
  gcc -E vd11-1.c
*/

#define N 10
#define M 20
#define MN (M * N)

int a[N];

#define MAX(x, y) ((x) < (y)? (y): (x))
c = MAX(a, b);

#define SUM(a, b) (a + b)
total = SUM(a, b) * SUM(c, d);

#define print_array(a, n) \
  do { \
    for (int i = 0; i < n; ++i) { \
      printf(" %d", a[i]); \
    } \
  } while (0)

print_array(a, n);
print_array(b, m);

printf("%s:%d", __FILE__, __LINE__);