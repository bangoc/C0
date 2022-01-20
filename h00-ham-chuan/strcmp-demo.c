/*
  (C) Nguyen Ba Ngoc 2022
  Minh họa cách sử dụng strcmp
  int strcmp(const char *s1, const char *s2);
  Hàm strcmp trả về giá trị < 0 nếu s1 nhỏ hơn s2,
             trả về giá giá trị > 0 nếu s1 lớn hơn s2,
             trả về 0 nếu s1 bằng s2.
  .
  Lô-gic so sánh:
  Các ký tự được so sánh song song từ trái sang phải. Quan hệ so sánh
  được xác định khi gặp cặp ký tự khác nhau đầu tiên hoặc cả 2 đều là.
  các ký tự null.
  Trong trường hợp gặp 2 ký tự khác nhau (1 ký tự có thể là null) quan
  hệ thứ tự được xác định dựa trên mã số của các ký tự trong bảng mã.
  Trong trường hợp gặp 2 ký tự null 2 chuỗi được coi là bằng nhau.
*/

#include <stdio.h>
#include <string.h>

#define TEST(s1, s2) printf("strcmp(\"%s\", \"%s\") = %d\n", s1, s2, strcmp(s1, s2));

int main(int argc, char *argv[]) {
  if (argc == 3) {
    // So sánh argv[1] và argv[2] nếu được cung cấp
    // Ví dụ: ./prog abc abcd
    TEST(argv[1], argv[2]);
    return 1;
  }

  // Trường hợp 1: Gặp 2 ký tự khác nhau
  TEST("a", "b");  // strcmp("a", "b") < 0: 'a' < 'b'
  TEST("aab", "b");  // < 0: 'a' < 'b'
  TEST("c", "bef");  // > 0: 'c' > 'b'
  TEST("ab", "a");  // > 0: 'b' > '\0'
  TEST("a", "ab");  // < 0: '\0' < 'b'

  // Trường hợp 2: Gặp 2 ký tự '\0' =>
  //  cả 2 chuỗi có cùng độ dài và các ký tự đều bằng nhau.
  TEST("a", "a");  // == 0
  TEST("bbb", "bbb");  // == 0
  return 0;
}