/*
  @bangoc 2020
  Có thể hiểu hằng của một kiểu dữ liệu là giá trị cụ thể thuộc phạm
  vi biểu diễn của kiểu dữ liệu đó.
  Quy ước viết hằng có khá nhiều chi tiết như: Hệ cơ số, kiểu dữ
  liệu, v.v... vì vậy có thể nói là khá phức tạp. Phân tích hết tất
  cả các cách viết hằng là việc hết sức khó khăn.

  Mục đích của mã nguồn này là để trình biên dịch tự cho biết kiểu dữ
  liệu của hằng và được thiết kế để có thể dễ dàng bổ xung các cách
  viết hằng hiện chưa có trong mã nguồn.

  Yêu cầu: Trình biên dịch hỗ trợ từ khóa _Generic trong C11
*/

#include <stdio.h>

#include <math.h>
#include <stdio.h>

#define type_name(x) _Generic((x), \
            _Bool: "_Bool", \
            char: "char", \
            signed char: "signed char", \
            unsigned char: "unsigned char", \
            short: "short", \
            unsigned short: "unsigned short", \
            int: "int", \
            unsigned int: "unsigned int", \
            long: "long", \
            unsigned long: "unsigned long", \
            long long: "long long", \
            unsigned long long: "unsigned long long", \
            float: "float", \
            double: "double", \
            long double: "long double", \
            default: "still not specified")

#define PRINT_TYPENAME(constant) \
  printf("Kiểu dữ liệu của " #constant " = %s\n", \
      type_name(constant))

int main() {
  printf("Các hằng số nguyên: \n");
  PRINT_TYPENAME(10);
  PRINT_TYPENAME(123456789123456);
  PRINT_TYPENAME(4294967295U);
  PRINT_TYPENAME(4294967295);
  PRINT_TYPENAME(10l);
  PRINT_TYPENAME(10L);
  PRINT_TYPENAME(10ll);
  PRINT_TYPENAME(10LL);
  PRINT_TYPENAME(10u);
  PRINT_TYPENAME(10U);
  PRINT_TYPENAME(10ul);
  PRINT_TYPENAME(10UL);
  PRINT_TYPENAME(10ull);
  PRINT_TYPENAME(10ULL);
  PRINT_TYPENAME(0xAB);
  PRINT_TYPENAME(0XAB);
  PRINT_TYPENAME(0XABl);
  PRINT_TYPENAME(0XABLL);
  PRINT_TYPENAME(0XABu);
  PRINT_TYPENAME(0XABul);
  PRINT_TYPENAME(0XABlu);
  PRINT_TYPENAME(0XABuLL);
  PRINT_TYPENAME(01234567);
  PRINT_TYPENAME(01234567u);
  PRINT_TYPENAME(01234567l);
  PRINT_TYPENAME(01234567ll);
  PRINT_TYPENAME(01234567ul);
  PRINT_TYPENAME(01234567ull);
  PRINT_TYPENAME(2147483648);
  PRINT_TYPENAME(0x80000000);

  printf("Các hằng số thực: \n");
  PRINT_TYPENAME(0x1p1);
  PRINT_TYPENAME(1e1);
  PRINT_TYPENAME(1.0f);
  PRINT_TYPENAME(1.0);
  PRINT_TYPENAME(1.0l);
  PRINT_TYPENAME(1.0L);
  PRINT_TYPENAME(0x1.1fp-3);
  PRINT_TYPENAME(0x1.1fp-3f);
  PRINT_TYPENAME(0x1.1fp-3l);
  PRINT_TYPENAME(0x1.Fp0f);

  printf("Một số hằng ký tự nguyên: \n");
  PRINT_TYPENAME('A');
  PRINT_TYPENAME('\x5F');
  PRINT_TYPENAME('\012');
  PRINT_TYPENAME('\n');
  PRINT_TYPENAME('\0');

  if ('\0' == 0) {
    printf("Mã số của '\\0' bằng 0\n");
  } else {
    printf("Có gì đó sai.\n");
  }
  PRINT_TYPENAME(((char)'A'));
  PRINT_TYPENAME(((unsigned char)'A'));

  enum Bool {False, True};
  PRINT_TYPENAME(False);

  char c;
  int i;
  unsigned int u;
  long l;
  unsigned long ul;
  float f;
  double lf;
  long double llf;
  long long ll;
  PRINT_TYPENAME(u + f);
  PRINT_TYPENAME(i + u);
  PRINT_TYPENAME((int)(u + f));
  PRINT_TYPENAME(c);
  PRINT_TYPENAME(c + c);
  PRINT_TYPENAME(ul + ll);
  return 0;
}