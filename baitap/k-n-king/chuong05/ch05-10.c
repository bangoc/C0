#include <stdio.h>

int main() {
  float grade;
  printf("Nhập điểm dạng số: ");
  scanf("%f", &grade);
  if (grade < 0) {
    printf("Lỗi nhập.\n");
  } else if (grade < 4.0) {
    printf("Điểm dạng chữ: F\n");
  } else if (grade < 5.0) {
    printf("Điểm dạng chữ: D\n");
  } else if (grade < 5.5) {
    printf("Điểm dạng chữ: D+\n");
  } else if (grade < 6.5) {
    printf("Điểm dạng chữ: C\n");
  } else if (grade < 7.0) {
    printf("Điểm dạng chữ: C+\n");
  } else if (grade < 8.0) {
    printf("Điểm dạng chữ: B\n");
  } else if (grade < 8.5) {
    printf("Điểm dạng chữ: B+\n");
  } else if (grade < 9.5) {
    printf("Điểm dạng chữ: A\n");
  } else if (grade <= 10.0) {
    printf("Điểm dạng chữ: A+\n");
  } else {
    printf("Lỗi nhập.\n");
  }
  return 0;
}