/*
  @bangoc 2021

  Chuỗi ký tự == Xâu ký tự, các thuật ngữ này là tương đương.

  Trong C chuỗi ký tự được biểu diễn như mảng ký tự một chiều với
  quy ước ký tự có mã số bằng 0, ('\0') là ký tự kết thúc chuỗi. Với
  quy ước này thì trong chuỗi ký tự không được có ký tự có mã số
  bằng 0, và các hàm xử lý chuỗi thường mặc định bỏ qua phần dữ liệu
  đứng sau ký tự kết thúc chuỗi đầu tiên.
  !Yêu cầu: Kích thước của mảng phải >= Độ dài của chuỗi + 1.
    +1 phần tử để lưu ký tự kết thúc chuỗi.

  C không hỗ trợ các toán tử để thực hiện các xử lý bậc cao với chuỗi
  ký tự, thay vào các xử lý được thực hiện bằng hàm. Ví dụ không thể
  sử dụng toán tử + để ghép nối hai chuỗi, hay các toán tử thứ tự như
  <, >, == để so sánh hai chuỗi.

  * Như chúng ta có thể thấy phép + hai số nguyên có ý nghĩa toán học
  rất rõ ràng, nhưng với hai chuỗi thì không hiển nhiên như vậy.
  Tương tự với các toán tử thứ tự: Cũng có thể có nhiều cách định
  nghĩa thứ tự khác nhau.

  Tệp mã nguồn này sẽ minh họa một số xử lý chuỗi cơ bản bằng hàm.

  Tệp tiêu đề: stdio.h
  Nguyên mẫu:
    size_t strlen (const char *__s);
    int strcmp (const char *__s1, const char *__s2);
    char *strcat (char *__dest, const char *__src); // (đã giản lược)
    char *strcpy (char *__dest, const char *__src); // (đã giản lược)

  Xem thêm: ctype-C-locale.c - Các xử lý ký tự
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  // Một số khai báo chuỗi
  //              123456789012345678901234567890
  char *s1     = "Mua xuan den tram hoa dua no";
  char s2[]    = "Mua xuan den tram hoa dua no";
  char s3[100] = "Mua xuan den tram hoa dua no";

  printf("Phân biệt các khái niệm biến, kiểu, độ dài chuỗi ký tự\n");

  // s1 là một con trỏ kiểu char *
  printf("sizeof(s1) = %lu\n", sizeof(s1));

  // s2 là một mảng một chiều với kích thước được ngầm định
  printf("sizeof(s2) = %lu\n", sizeof(s2));  // == strlen(s2) + 1

  // s3 là một mạng một chiều với kích thước cố dịnh 100 phần tử
  printf("sizeof(s3) = %lu\n", sizeof(s3));

  printf("So sánh kích thước s1, s2, và s3 với độ dài chuỗi:\n");

  // Đôi lời trước khi gọi hàm: Các hàm được sử dụng sau đây không
  // kiểm tra tính hợp lệ của dữ liệu. Trách nhiệm kiểm tra tính hợp
  // lệ của dữ liệu đầu vào thuộc về phía người gọi hàm.
  // Các điều kiện mảng có chứa ký tự kết thúc hay không? Mảng đích
  // có đủ lớn để lưu kết quả hay không? v.v..
  printf("strlen(\"%s\") = %lu\n", s1, strlen(s1));

  // strcmp so sánh hai chuỗi theo từng ký tự từ trái qua phải
  printf("Các giá trị trả về:\n"
         "  -1 nếu s1 < s2:  ví dụ: %d %d\n"
         "   0 nếu s1 == s2: ví dụ: %d %d\n"
         "   1 nếu s1 > s2:  ví dụ: %d %d\n",
                  strcmp("abc", "acd"), strcmp("abc", "abcd"),
                  strcmp("abc", "abc"), strcmp("def", "def"),
                  strcmp("abc", "abb"), strcmp("abc", "ab")
        );

  // strcat - Ghép nối src vào dest
  char dest[100];
  strcat(dest, "Xuan ve");
  strcat(dest, " tren ban lang");
  printf("dest = %s\n", dest);

  // strcpy - copy chuỗi src vào dest
  char src[] = "Dao phai chum chim khoe moi hong";
  strcpy(dest, src);
  printf("Sau khi copy dest = %s\n", dest);
  // Lưu ý: Phép gán dest = src mang ý nghĩa khác. Giả sử dest và src
  // đều có kiểu char * thì dest = src có ý nghĩa như thao tác với
  // con trỏ, không phải là sao chép nội dung chuỗi.
  // Hàm strcpy sao chép nội dung của chuỗi src vào chuỗi dest.

  // Sử dụng vòng lặp và toán tử [] để xử lý từng ký tự
  // Ví dụ: Đếm số lượng khoảng trống trong câu
  int cc = 0;
  for (int i = 0; i < strlen(s1); ++i) {
    if (isspace(s1[i])) {  // Tham khảo thêm các hàm xử lý ký tự
      ++cc;                // trong ctype-C-locale.c
    }
  }
  printf("Số lượng khoảng trống trong \"%s\" là: %d\n", s1, cc);
  return 0;
}