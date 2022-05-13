/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa hành vi bất định với giá trị trả về
  Biên dịch với cờ: -Wall
  Trình biên dịch có thể đưa ra cảnh báo.
*/

#include <stdio.h>

double average(double a, double b) {
  double avg = (a + b) / 2;
  /* Quên return avg; */
}

int main() {
  double x, y;
  printf("Nhập 2 số thực: ");
  scanf("%lf%lf", &x, &y);
  printf("Trung bình = %f\n", (x + y)/2);
  return 0;
}