#include <stdio.h>

int main() {
  printf("Kích thước tính theo bytes của các kiểu số nguyên:\n");
  printf("char      - %ld\n", sizeof(char));
  printf("short     - %ld\n", sizeof(short));
  printf("int       - %ld\n", sizeof(int));
  printf("long      - %ld\n", sizeof(long));
  printf("long long - %ld\n", sizeof(long long));

  printf("Kiểu số nguyên thường được mặc định là có dấu (không bắt "
         "buộc viết từ signed).\n");
  printf("signed char      - %ld\n", sizeof(signed char));
  printf("signed short     - %ld\n", sizeof(signed short));
  printf("signed int       - %ld\n", sizeof(signed int));
  printf("signed long      - %ld\n", sizeof(signed long));
  printf("signed long long - %ld\n", sizeof(signed long long));

  printf("Kiểu số nguyên không dấu có dải biểu diễn khác với kiểu số "
         "nguyên có dấu cùng kích thước.\n");
  printf("unsigned char      - %ld\n", sizeof(unsigned char));
  printf("unsigned short     - %ld\n", sizeof(unsigned short));
  printf("unsigned int       - %ld\n", sizeof(unsigned int));
  printf("unsigned long      - %ld\n", sizeof(unsigned long));
  printf("unsigned long long - %ld\n", sizeof(unsigned long long));

  printf("Kiểu số thực luôn luôn có dấu. Kích thước tính theo bytes "
         "của các kiểu số thực:\n");
  printf("float        - %ld\n", sizeof(float));
  printf("double       - %ld\n", sizeof(double));
  printf("long double  - %ld\n", sizeof(long double));

  printf("Các kiểu char, signed char, unsigned char còn được gọi "
         "chung là các kiểu ký tự\n");
  printf("char          - %ld\n", sizeof(char));
  printf("signed char   - %ld\n", sizeof(signed char));
  printf("unsigned char - %ld\n", sizeof(unsigned char));
  return 0;
}