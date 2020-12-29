/*
  @bangoc 2020
  Trong C,
    +) Quy chuẩn ngôn ngữ chỉ quy ước kích thước tương đối giữa các
    kiểu dữ liệu cơ bản, không quy ước các kích thước cụ thể. Nói
    cách khác, nếu hỏi sizeof(int) bằng bao nhiêu? thì chúng ta chỉ
    có câu trả lời cụ thể cho từng trường hợp cụ thể, có thể là 2, 4,
    ... tùy thuộc vào kiến trúc máy tính và trình biên dịch được sử
    dụng. Trong trường hợp tổng quát chúng ta chỉ có trật tự không
    giảm kích thước của các kiểu dữ liệu cơ bản:
      char  --  short   --  int    --    long   --  long long
      float --  double  --  long double
    +) Các triển khai cụ thể (trình biên dịch C) có thể tự lựa chọn
    các kích thước tối ưu cho các kiểu dữ liệu cơ bản theo kiến trúc
    phần cứng.
  Đối với chương trình này, thông tin về kích thước các kiểu dữ liệu
  cơ bản được xuất ra phụ thuộc vào cách biên dịch nó: Bằng trình
  biên dịch nào? Cho kiến trúc máy tính gì (16, 32, hay 64 bits)? và
  không phải là sự khẳng định về các kích thước cụ thể trong trường
  hợp tổng quát. Nếu biên dịch theo các cách khác nhau, chương trình
  thu được hoàn toàn có thể xuất ra các thông tin khác nhau.
*/

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