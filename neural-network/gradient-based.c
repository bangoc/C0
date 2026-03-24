/* Nguyễn Bá Ngọc 24-03-2026 */
/*
Huấn luyện 1 perceptron sử dụng giá trị thô của sai số
x0 ---
       \w0
        \ -----> o = g(x0 * w0 + x1 * w1 + b)
         /
        /w1
x1 --- /

Sử dụng hàm sigmoid làm hàm kích hoạt g(x) = 1 / (1 + e^-x)
dg = g * (1 - g)
diff = -2(t - o) * o * (1 - o)
w = w - n * diff * x
*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float activate(float x) {
  return 1 / (1 + exp(-x));
}

float randw() {
  return (rand() + 1.0) / (rand() + 1.0);
}

#define ITER 1000
#define R 1.5

int main() {
  float xx[][3] = {
    {0, 0},
    {0, 1},
    {1, 0},
    {1, 1}
  };
  int tt[] = {
    0,
    0,
    0,
    1
  };
  if (sizeof(xx) / sizeof(xx[0]) != sizeof(tt) / sizeof(tt[0])) {
    printf("Dữ liệu huấn luyện không hợp lệ.\n");
    return 0;
  }
  const int k_samples = sizeof(tt)/sizeof(tt[0]);

  /* Khởi tạo ngẫu nhiên các trọng số lan truyền */
  srand(time(NULL));
  float w[2] = {randw(), randw()};
  float b = randw();

  /* Huấn luyện */
  for (int iter = 0; iter < ITER; ++iter) {
    float e = 0;
    for (int i = 0; i < k_samples; ++i) {
      float *x = xx[i];
      int t = tt[i];
      float o = activate(x[0] * w[0] + x[1] * w[1] + b);
      printf("iter %d: w0 = %.2f w1 = %.2f b = %.2f x0 = %.2f x1 = %.2f "
             "t = %d o = %.2f\n", i + 1, w[0], w[1], b, x[0], x[1], t, o);
      float diff = -2 * (t - o) * o * (1 - o);
      w[0] -= R * diff * x[0];
      w[1] -= R * diff * x[1];
      b -= R * diff;
      e += (t - o) * (t - o);
    }
    printf("e = %.5f\n", e);
  }
}