/* (C) Nguyễn Bá Ngọc 24/3/2026 */
/*
     x0         h0 = g(s + hb[0])
          xh                         ho    o = g(s + ob)
     x1         h1 = g(s + hb[1])
Sử dụng hàm Sigmoid làm hàm kích hoạt: g(x) = 1/(1 + e^-x)
*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float activate(float x) {
  return 1/(1 + exp(-x));
}

float randw() {
  return (rand() + 1.0)/(rand() + 1.0);
}

#define R 0.75
#define ITER 1000

int main() {
  float xx[][2] = {
    {0, 0},
    {0, 1},
    {1, 0},
    {1, 1}
  };
  float tt[] = {
    0,
    1,
    1,
    0
  };
  const int k_samples = sizeof(tt)/sizeof(tt[0]);

  /* Khởi tạo ngẫu nhiên */
  srand(time(NULL));
  float xh[2][2] = {
    {randw(), randw()},
    {randw(), randw()}
  };
  float ho[2] = {randw(), randw()};
  float hb[2] = {randw(), randw()};
  float ob = randw();
  float h[2];
  float o;

  /* Huấn luyện */
  for (int iter = 0; iter < ITER; ++iter) {
    float e = 0;
    printf("Iter %d:\n", iter + 1);
    for (int i = 0; i < k_samples; ++i) {
      float *x = xx[i];
      float t = tt[i];
      h[0] = activate(x[0] * xh[0][0] + x[1] * xh[1][0] + hb[0]);
      h[1] = activate(x[0] * xh[0][1] + x[1] * xh[1][1] + hb[1]);
      o = activate(h[0] * ho[0] + h[1] * ho[1] + ob);
      e += (t - o) * (t - o);
      float diff_o = -2 * (t - o) * o * (1 - o);
      float diff_h0 = diff_o * ho[0] * h[0] * (1 - h[0]);
      float diff_h1 = diff_o * ho[1] * h[1] * (1 - h[1]);

      ho[0] -= R * diff_o * h[0];
      ho[1] -= R * diff_o * h[1];
      ob -= R * diff_o;

      xh[0][0] -= R * diff_h0 * x[0];
      xh[0][1] -= R * diff_h1 * x[0];
      xh[1][0] -= R * diff_h0 * x[1];
      xh[1][1] -= R * diff_h1 * x[1];
      hb[0] -= R * diff_h0;
      hb[1] -= R * diff_h1;

      printf("x0 = %.0f x1 = %.0f t = %.0f o = %.2f\n", x[0], x[0], t, o);
      printf("%8.2f %8.2f  | %8.2f\n", xh[0][0], xh[0][1], ho[0]);
      printf("%8.2f %8.2f  | %8.2f\n", xh[1][0], xh[1][1], ho[1]);
    }
    printf("e = %.5f\n", e);
  }
}