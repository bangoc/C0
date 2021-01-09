/*
  @bangoc 2021

  Tệp tiêu đề: stdio.h
*/

#include <stdio.h>

int main() {
  printf("12345678901234567890\n");
  // Một số trường hợp cơ bản
  // 1. Xuất số thực với độ chính xác 3 chữ số
  //    Mặc định làm tròn tới giá trị gần nhất
  printf("%.3f\n", 3.141592);

  // 2. Xuất số thực với độ chính xác như trường hợp 1 nhưng sử dụng
  // 10 chỗ, căn lề phải.
  printf("%10.3f\n", 3.141592);

  // 3. Tương tự trường hợp 2 nhưng căn lề trái
  printf("%-10.3fNội dung tiếp theo\n", 3.141592);

  // 4. Nếu số chỗ thực tế cần nhiều hơn thì vẫn giữ nguyên giá trị
  // số. Trong ví dụ này, mẫu in là 5 chỗ, nhưng thực tế cần 6 chỗ.
  printf("%5.3fNội dung tiếp theo\n", -3.141592);

  // 5. Kết quả như trường hợp 1, vì cùng lý do đã giải thích ở
  // trường hợp 4.
  printf("%0.3f\n", 3.141592);

  printf("\nMột số ví dụ nâng cao về độ chính xác.\n");
  float f = 3.141592f;
  double d = 3.141592653589793;
  long double ld = 3.141592653589793238L;
  printf("%.6f\n", f);
  printf("%.15f\n", d);
  printf("%.18Lf\n", ld);

  // Vượt qua dải biểu diễn, bắt đầu có sai số
  float f2 = 3.1415926f;
  double d2 = 3.1415926535897932;
  long double ld2 = 3.1415926535897932384L;
  printf("%.7f\n", f2);
  printf("%.16f\n", d2);
  printf("%.19Lf\n", ld2);
  return 0;
}