/*
  (C) Nguyen Ba Ngoc 2022
  Minh họa cách sử dụng strcmp
  int strcmp(const char *s1, const char *s2);
  Hàm strcmp trả về giá trị < 0 nếu s1 nhỏ hơn s2,
             trả về giá giá trị > 0 nếu s1 lớn hơn s2,
             trả về 0 nếu s1 bằng s2.
  Quan hệ thứ tự được xác định dựa trên mã số của từng ký tự trong chuỗi.
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
  TEST("a", "b");  // strcmp("a", "b") < 0
  TEST("c", "b");  // > 0
  TEST("a", "a");  // == 0
  TEST("ab", "a");  // > 0
  TEST("ab", "b");  // < 0  - So sánh từng ký tự, từ trái sang phải
  return 0;
}