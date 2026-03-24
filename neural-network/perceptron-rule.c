/* Nguyễn Bá Ngọc 24-03-2026 */
/*
Huấn luyện 1 perceptron sử dụng giá trị thô của sai số
x0 --
      \w0
       \ -->g(>=1?1:0) --> y
       /
      /w1
x1 --
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int activate(float v) {
  return v >= 1.0? 1: 0;
}

int main() {
  float d[][2] = {
    {0, 0},
    {0, 1},
    {1, 0},
    {1, 1}
  };
  int t[] = {
    0,
    0,
    1,
    0
  };
  if (sizeof(d) / sizeof(d[0]) != sizeof(t) / sizeof(t[0])) {
    printf("Dữ liệu huấn luyện không hợp lệ.\n");
    return 0;
  }
  const int k_samples = sizeof(t)/sizeof(t[0]);
  const int k_iter = 10;
  const float k_rate = 1.5;

  /* Khởi tạo ngẫu nhiên các trọng số lan truyền */
  srand(time(NULL));
  float w[2];
  for (int i = 0; i < 2; ++i) {
      w[i] = (rand() + 1.0) / (rand() + 1.0);
  }

  /* Huấn luyện */
  int y;
  float e = 0;
  for (int i = 0; i < k_iter; ++i) {
    e = 0;
    for (int j = 0; j < k_samples; ++j) {
      float *x = d[j];
      y = activate(x[0] * w[0] + x[1] * w[1]);
      printf("iter %d: w0 = %.2f w1 = %.2f x0 = %.2f x1 = %.2f t = %d y = %d\n",
            i + 1, w[0], w[1], x[0], x[1], t[j], y);
      if (y != t[j]) {
        w[0] += k_rate * (t[j] - y) * x[0];
        w[1] += k_rate * (t[j] - y) * x[1];
      }
      e += (t[j] - y) * (t[j] - y);
    }
    printf("e = %.2f\n", e);
  }
}