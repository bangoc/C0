/*
  (C) Nguyen Ba Ngoc 2021
  Minh họa đặc tả xuất phức tạp
*/

#include <stdio.h>
int main() {
  double x = 3.1415;
  int i = 101;
  printf("1234567890|12345678901234567890\n");
  // Sử dụng stt tham số (bắt đầu từ 1)
  printf("%1$+-10.5d|%2$*3$.*4$f\n", i, x, 15, 5);

  // Tham số mặc định theo thứ tự tuần tự
  printf("%+-10.5d|%*.*f\n", i, 15, 5, x);

  // Độ rộng và độ chính xác cố định
  printf("%+-10.5d|%15.5f\n", i, x);
  return 0;
}
