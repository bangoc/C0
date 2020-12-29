/*
  @bangoc 2020
  Biến là một khái niệm cơ bản, có thể hiểu biến như một vùng nhớ
  được đặt tên và định kiểu.
*/

#include <stdio.h>

int main() {
  // Một số khai báo biến đơn giản theo định dạng:
  //   kiểu-dữ-liệu tên-biến1, tên-biến2, ...;
  int a;  // Khai báo một biến i
  int b, c, d; // Khai báo nhiều biến cùng kiểu

  // Một số khai báo biến và khởi tạo giá trị đơn giản theo định dạng
  //   kiểu-dữ-liệu tên-biến1 = hằng1, tên-biến2 = hằng 2, ...;
  short sh1 = -111, sh2 = 222;
  int i1 = -111111, i2 = 221222;
  long l1 = -11111111l, l2 = 22222222L;
  long long ll1 = -111111111111LL, ll2 = 22222222222ll;
  unsigned int ui1 = 111111, ui2 = 222222;
  unsigned long ul1 = 11111111ul, ul2 = 22222222UL;
  unsigned long long ull1 = 111111111111ul, ull2 = 222222222222UL;

  long decimal = 1234567890L;  // mặc định là hệ 10
  long long hexa = 0x123456789ABCDEFLL; // 0x hoặc 0X - hệ 16
  int octal = 01234567;  // bắt đầu bằng 0 là hệ cơ số 8

  float f1 = 123.456f,
        f2 = 1.23456E2f;
  double d1 = 0.0012345,
         d2 = 1.2345E-3;
  long double ld1 = 123.45678l,
              ld2 = 1.112233E-5L;

  // Các kiểu ký tự là các kiểu dữ liệu đặc biệt có thể biểu diễn cả
  // số nguyên và ký tự
  char c1 = 100,
       c2 = 'A';
  unsigned uc1 = 230,
           uc2 = 'B';

  return 0;
}