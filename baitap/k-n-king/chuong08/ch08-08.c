#include <stdio.h>
int main() {
  float a[5][5];
  for (int i = 0; i < 5; ++i) {
    printf("Nhập điểm bài kiểm tra số %d:\n", i + 1);
    for (int j = 0; j < 5; ++j) {
      printf("  Điểm của sinh viên %d: ", j + 1);
      scanf("%f", &a[i][j]);
    }
  }
  printf("                    Tổng điểm    Trung bình\n");
  for (int i = 0; i < 5; ++i) {
    printf("Sinh viên thứ  %d: ", i + 1);
    float total = 0;
    for (int j = 0; j < 5; ++j) {
      total += a[j][i];
    }
    printf("%12.2f%12.2f\n", total, total / 5.0f);
  }
  printf("                     Trung bình   Cao nhất    Thấp nhất\n");
  for (int i = 0; i < 5; ++i) {
    printf("Bài kiểm tra thứ %d: ", i + 1);
    float min, max, total;
    min = max = total = a[i][0];
    for (int j = 1; j < 5; ++j) {
      total += a[i][j];
      if (min > a[i][j]) {
        min = a[i][j];
      }
      if (max < a[i][j]) {
        max = a[i][j];
      }
    }
    printf("%12.2f%12.2f%12.2f\n", total/5.0f, max, min);
  }
  return 0;
}