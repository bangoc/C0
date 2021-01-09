/*
  @bangoc 2021
  Tệp tiêu đề: ctype.h

  Nguyên mẫu một số hàm phân loại ký tự:
    int isalpha(int c);
    int isdigit(int c);
    int islower(int c);
    int isspace(int c);
    int isupper(int c);

  Nguyên mẫu các hàm chuyển đổi chữ hoa/chữ thường:
    int tolower(int c);
    int toupper(int c);

  Các khái niệm alpha - ký tự, digit - chữ số, lower - viết thường,
  upper - viết hoa, space - khoảng trống được định nghĩa trong "C"
  locale.
*/

#include <ctype.h>
#include <stdio.h>

int main() {
  // 1. Cơ bản
  // Các hàm có tiền tố is trả về một giá trị khác 0 nếu ký tự được
  // kiểm tra có thuộc tính tương ứng với tên hàm, và trả về 0 nếu
  // ngược lại
  printf("isalpha('A') = %d\n", isalpha('A'));  // khác 0
  printf("isalpha('-') = %d\n", isalpha('-'));  // == 0

  printf("isdigit('1') = %d\n", isdigit('1'));  // khác 0
  printf("isdigit('-') = %d\n", isdigit('-'));  // == 0

  printf("islower('a') = %d\n", islower('a'));  // khác 0
  printf("islower('A') = %d\n", islower('A'));  // == 0

  printf("isspace(' ') = %d\n", isspace(' '));  // khác 0
  printf("isspace('-') = %d\n", isspace('-'));  // == 0

  printf("isupper('A') = %d\n", isupper('A'));  // khác 0
  printf("isupper('a') = %d\n", isupper('a'));  // == 0

  // Các hàm chuyển đổi chữ hoa-thường
  // toupper trả ký tự viết hoa nếu ký tự được truyền vào thỏa mãn
  // islower, trả về chính ký tự được chuyền vào nếu ngược lại
  printf("toupper('c') = %c\n", toupper('c')); // == 'C'
  printf("toupper('1') = %c\n", toupper('1')); // == '1'

  // tolower trả về ký tự viết thường nếu ký tự được truyền vào thỏa
  // mãn isupper, trả về chính ký tự được truyền vào nếu ngược lại
  printf("tolower('C') = %c\n", tolower('C')); // == 'c'
  printf("tolower('1') = %c\n", tolower('1')); // == '1'

  // 2. Nâng cao
  // Duyệt bảng mã ASCII và liệt kê các ký tự theo phân loại
  char *class_names[] = {"isalpha", "isdigit", "islower",
                         "isspace", "isupper"};
  char *class_formats[] = {" %s", " %s", " %s", " %s", " %s"};
  int (*class_funcs[])(int) = {isalpha, isdigit, islower,
                          isspace, isupper};
  char *ascii_symbols[] = {"NUL", "SOH", "STX", "ETX", "EOT", "ENQ",
    "ACK", "BEL", "BS", "TAB (HT)", "LF", "VT", "FF", "CR", "SO",
    "SI", "DLE", "DC1", "DC2", "DC3", "DC4", "NAK", "SYN", "ETB",
    "CAN", "EM", "SUB", "ESC", "FS", "GS", "RS", "US", "SP", "!",
    "\"", "#", "$", "%", "&", "'", "(", ")", "*", "+", ",", "-", ".",
    "/", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", ":", ";",
    "<", "=", ">", "?", "@", "A", "B", "C", "D", "E", "F", "G", "H",
    "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U",
    "V", "W", "X", "Y", "Z", "[", "\\", "]", "^", "_", "`", "a", "b",
    "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o",
    "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "{", "l",
    "}", "~", "DEL"};
  const int n = sizeof(class_names)/sizeof(class_names[0]);
  for (int i = 0; i < n;++i) {
    printf("%s:", class_names[i]);
    for (int c = 0; c < 128; ++c) {
      if (class_funcs[i](c)) {
        printf(class_formats[i], ascii_symbols[c]);
      }
    }
    printf("\n");
  }
  return 0;
}