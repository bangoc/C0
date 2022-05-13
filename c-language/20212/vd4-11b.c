/*
  (C) Nguyen Ba Ngoc 2022
  Quy đổi điểm thang 10 sang điểm chữ
*/
#include <stdio.h>
int main() {
  float score;
  printf("Nhập điểm = ");
  scanf("%f", &score);
  if (score > 10) {
    printf("Không hợp lệ\n");
  } else if (score >= 9.5 ) {
    printf("A+\n");
  } else if (score >= 8.5) {
    printf("A\n");
  } else if (score >= 8.0) {
    printf("B+\n");
  }
  /* ... */
  return 0;
}