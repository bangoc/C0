/*
  (C) Nguyen Ba Ngoc 2021
  Biên dịch chương trình với tên prog, tạo tệp inp.txt với nội dung 20 50
  trong cùng thư mục với tệp prog, sau đó chạy chương trình.
*/

#include <stdio.h>

int main() {
  int a, b;

  // Mở lại các luồng tiêu chuẩn
  if (!freopen("inp.txt", "r", stdin) ||
      !freopen("out.txt", "w", stdout) ||
      !freopen("err.txt", "w", stderr)) {
    printf("Lỗi mở lại tệp.\n");
    return 1;
  }

  scanf("%d%d", &a, &b);  // inp.txt
  printf("%d + %d = %d\n", a, b, a + b); // out.txt
  fprintf(stderr, "Test error message\n");  // err.txt
  return 0;
}