/*
  (C) Nguyen Ba Ngoc
  Minh họa tính tích 2 ma trận, biểu diễn
  các ma trận như mảng 1 chiều.
*/
#include <stdio.h>

// c(mxp) = a(mxn) %*% b(nxp)
void matrix_mult(int m, int n, int p,
        double *a, double *b, double *c) {
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < p; ++j) {
      double s = 0;
      for (int t = 0; t < n; ++t) {
        s += a[i * n + t] * b[t * p + j];
      }
      c[i * p + j] = s;
    }
  }
}
int main() {
  double a[3][2] = {{1, 1}, {1, 1}, {1, 1}},
      b[2][3] = {{1, 2, 3,}, {7, 6, 5}},
      c[3][3];
  matrix_mult(3, 2, 3, a[0], b[0], c[0]);
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      printf("\t%.0f", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}