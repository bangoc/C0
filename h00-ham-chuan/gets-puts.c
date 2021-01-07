/*
  @bangoc 2021
  Tệp tiêu đề: stdio.h
  Nguyên mẫu:
    char *gets (char *__s);
    int puts (const char *__s);

  * Lưu ý: gets bắt đầu bị lược bỏ khỏi thư viện tiêu chuẩn từ C11

  [Nếu đã học về nhập xuất với tệp thì]
  Xem thêm: fgets-stdin.c

  Kiến thức cơ bản về ký tự:
  \n là ký tự xuống dòng, tên bằng chữ là LF, mã ASCII là 10
  \r là ký tự lùi về đầu dòng, tên bằng chữ là CR, mã ASCII là 13
  Mô phỏng các thao tác của máy đánh chữ ngày xưa khi chuyển sang
  dòng mới.
*/

#include <stdio.h>

int main() {
  char s[100];

  // Đọc một dòng cho tới hết ký tự xuống dòng,
  // nhưng không đưa ký tự xuống dòng vào s
  gets(s);
  // Giải thích:
  //   Nếu thao tác nhập của bạn là a b c⏎
  //   thì chuỗi s là "a b c\0" (không bao gồm ký tự xuống dòng)
  //
  // * Lưu ý: Nếu có \r đứng trước \n thì \r vẫn được đưa vào s
  // Ví dụ, khi điều hướng tệp vào stdin, kết quả có thể là
  // "a b c\r\0"

  // Xuất chuỗi s và tự động thêm dấu xuống dòng
  puts(s);

  // khác với puts, printf không tự động thêm dấu xuống dòng
  printf("%s", s);
  printf("Mot chuoi khac\n");  // Tiếp tục trên một dòng sau chuỗi s
  return 0;
}