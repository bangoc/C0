/*
  @bangoc 2020
  Để thuận tiện cho việc sử dụng hằng một cách nhất quán nhiều lần
  ở nhiều nơi, có hai cách thường được dùng là:
    +) Lưu hằng vào một biến với kiểu dữ liệu thích hợp và có ràng
    buộc const
    +) Sử dụng một macro thay thế
*/


// Giả sử chúng ta cần tính chu vi của nhiều hình tròn
#include <stdio.h>

#define MY_PI 3.141593

int main() {
  double d1 = 5, d2 = 7;  // Đường kính của các hình tròn

  // Không nên làm như thế này:
  double s1 = d1 * 3.141593, // lặp giá trị 3.141593 nhiều lần vừa
         s2 = d2 * 3.141593; // khó vừa có thể phát sinh nhiều vấn đề

  // Các giải pháp tốt hơn
  // 1. Sử dụng kiểu dữ liệu có ràng buộc const. Có thể linh động hơn
  // các macro
  const double k_my_pi = 3.141593;
  // k_my_pi = 3.14;  // Lỗi, tuy nhiên vẫn có cách khác để thay đổi
  s1 = k_my_pi * d1;
  s2 = k_my_pi * d2;

  // 2. Sử dụng macro thay thế. Các macro được xử lý khi biên dịch,
  // giống như trình biên dịch viết các hằng thay cho chúng ta
  s1 = MY_PI * d1;
  s2 = MY_PI * d2;

  // Các lưu ý:
  // 1. Ràng buộc const không phải là sự đảm bảo chắc chắn
  // rằng giá trị của biến sẽ không bao giờ thay đổi. Ví dụ:
  {
    double *hack = (double*)&k_my_pi;
    *hack = 3.14;
  }
  // Từ đoạn này k_my_pi ~ 3.14

  // 2. Macro cũng không phải sự đảm bảo. Nội dung của macro cũng có
  // thể thay đổi
  #undef MY_PI
  #define MY_PI 3.14

  // Từ đoạn này MY_PI cũng sẽ là 3.14

/*
  Kết luận:
    +) Macro trong C còn được sử dụng cho rất nhiều mục đích khác
    nhau, không chỉ để thay thế hằng. Có thể định nghĩa lại macro.
    +) Với một biến có kiểu được ràng buộc const, trình biên dịch
  sẽ đưa ra lỗi nếu người lập trình sử dụng tên biến để thay đổi
  giá trị. Nhưng nếu sử dụng một tên khác và địa chỉ thì vẫn thay
  đổi được giá trị của biến dù đã có ràng buộc const.
*/
  return 0;
}