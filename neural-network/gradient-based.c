/* Nguyễn Bá Ngọc 24-03-2026 */
/*
Huấn luyện 1 perceptron sử dụng giá trị thô của sai số
x0 = 1 --
         \w0
          \ ----->g(z) = 1/(1 + e^-z) --> y
          /  /
         /w1/
x1 -----/  /w2
          /
x2 ------/
dg = g * (1 - g)
de/dy = -2(t - y) * y * (1 - y)
w = w - n * de/dy * x
Sử dụng 1 biến nhập x0 = 1 để biểu diễn độ lệch
*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float activate(float x) {
  return 1 / (1 + exp(-x));
}

int main() {
  float d[][3] = {
    {1, 0, 0},
    {1, 0, 1},
    {1, 1, 0},
    {1, 1, 1}
  };
  int t[] = {
    0,
    0,
    0,
    1
  };
  if (sizeof(d) / sizeof(d[0]) != sizeof(t) / sizeof(t[0])) {
    printf("Dữ liệu huấn luyện không hợp lệ.\n");
    return 0;
  }
  const int k_samples = sizeof(t)/sizeof(t[0]);
  const int k_iter = 1000;
  const float k_rate = 1.5;

  /* Khởi tạo ngẫu nhiên các trọng số lan truyền */
  srand(time(NULL));
  float w[3];
  for (int i = 0; i < 3; ++i) {
      w[i] = (rand() + 1.0) / (rand() + 1.0);
  }

  /* Huấn luyện */
  for (int i = 0; i < k_iter; ++i) {
    float e = 0;
    for (int j = 0; j < k_samples; ++j) {
      float *x = d[j];
      float y = activate(x[0] * w[0] + x[1] * w[1] + x[2] * w[2]);
      printf("iter %d: w0 = %.2f w1 = %.2f w2 = %.2f x1 = %.2f x2 = %.2f "
             "t = %d y = %.2f\n", i + 1, w[0], w[1], w[2], x[1], x[2], t[j], y);
      float diff = -2 * (t[j] - y) * y * (1 - y);
      w[0] -= k_rate * diff * x[0];
      w[1] -= k_rate * diff * x[1];
      w[2] -= k_rate * diff * x[2];
      e += (t[j] - y) * (t[j] - y);
    }
    printf("e = %.2f\n", e);
  }
}