#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  // a)
  // Nếu không gọi srand với các đối số khác nhau
  // thì chuỗi giá trị được trả về bởi rand() không đổi
  srand(time(NULL));
  for (int i = 0; i < 1000; ++i) {
    int v = rand() % 2;
    printf("%d", v);
  }
  printf("\n");

  // b) Theo tác giả thì rand() / (RAND_MAX / N + 1)
  // thường cho kết quả tốt hơn rand() % N
  for (int i = 0; i < 1000; ++i) {
    int v = rand() / (RAND_MAX / 2 + 1);
    printf("%d", v);
  }
  printf("\n");

  // Tạm thời mình chưa có cơ sở để so sánh a) và b)
  return 0;
}