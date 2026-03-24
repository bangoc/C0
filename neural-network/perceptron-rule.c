/* Nguyễn Bá Ngọc 24-03-2026 */
/*
Huấn luyện 1 perceptron sử dụng giá trị thô của sai số
x0 --
      \w0
       \ -->o = g(x0 * w0 + x1 * w1)
       /
      /w1
x1 --

Sử dụng hàm ngưỡng làm hàm kích hoạt g(x) = x >= 1? 1: 0;
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int activate(float x) {
  return x >= 1.0? 1: 0;
}

float randw() {
  return (rand() + 1.0) / (rand() + 1.0);
}

#define ITER 10
#define R 1.5

int main() {
  float xx[][2] = {
    {0, 0},
    {0, 1},
    {1, 0},
    {1, 1}
  };
  int tt[] = {
    0,
    0,
    1,
    0
  };
  if (sizeof(xx) / sizeof(xx[0]) != sizeof(tt) / sizeof(tt[0])) {
    printf("Dữ liệu huấn luyện không hợp lệ.\n");
    return 0;
  }
  const int k_samples = sizeof(tt)/sizeof(tt[0]);

  /* Khởi tạo ngẫu nhiên các trọng số lan truyền */
  srand(time(NULL));
  float w[2] = {randw(), randw()};

  /* Huấn luyện */
  for (int iter = 0; iter < ITER; ++iter) {
    float e = 0;
    for (int i = 0; i < k_samples; ++i) {
      float *x = xx[i];
      int t = tt[i];
      int o = activate(x[0] * w[0] + x[1] * w[1]);
      printf("iter %d: w0 = %.2f w1 = %.2f x0 = %.2f x1 = %.2f t = %d o = %d\n",
            i + 1, w[0], w[1], x[0], x[1], t, o);
      if (o != t) {
        w[0] += R * (t - o) * x[0];
        w[1] += R * (t - o) * x[1];
      }
      e += (t - o) * (t - o);
    }
    printf("e = %.3f\n", e);
  }
}