/*
  (C) Nguyen Ba Ngoc 2021
*/

#include <stdio.h>

int main() {
  printf("12345678901234567890\n");

  // Xuất số nguyên
  int i = 1001;
  long long ll = 123451234512l;
  printf("%d\n", i);  // Xuất thường
  printf("%15d\n", i);  // Căn lề phải
  printf("%-15d\n", i);  // Căn lề trái
  printf("%15d\n", ll);  // NOK - Sai kiểu
  printf("%15lld\n", ll);  // Ok
  printf("%015d\n", i);  // Lấp đầy với 0
  printf("%-15.5d\n", i);  // Thêm 0 nếu cần
  unsigned char uc = 255;
  printf("%15u\n", uc + 100);  // unsigned
  printf("%15hhu\n", uc + 100);  // unsigned char

  // Xuất số thực
  double d = 3.141592653589793;
  long double ld = 3.141592653589793238L;
  printf("%.3f\n", d);  // Làm tròn đến 3 chữ số
  printf("%15.3f\n", d);  // Căn lề phải
  printf("%-15.f\n", d);  // Căn lề trái
  printf("%.18f\n", ld);  // NOK -  Sai kiểu
  printf("%20.18Lf\n", ld);  // Ok

  // Xuất ký tự
  printf("%c%c%c%c%c\n", 'h', 101, 'l', 'l', 'o');
  return 0;
}