/*
  (C) Nguyen Ba Ngoc 2021
  Biên dịch chương trình với tên prog, tạo tệp inp.txt với nội dung 3 5,
  sau đó chạy chương trình với lệnh: ./prog < inp.txt > out.txt 2 > err.txt
*/

#include <stdio.h>

int main() {
  int a, b;

  // Đọc từ stdin
  scanf("%d%d", &a, &b);

  // Xuất ra stdout
  printf("%d + %d = %d\n", a, b, a + b);

  // Xuất ra stderr
  fprintf(stderr, "Test error message\n");
  return 0;
}