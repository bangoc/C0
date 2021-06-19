#include <stdio.h>
int main() {
  int g1, g2, g3, g4, g5;
  printf("Nhập ISBN: ");
  scanf("%d-%d-%d-%d-%d", &g1, &g2, &g3, &g4, &g5);
  printf("Tiền tố GS1: %d\n", g1);
  printf("Mã quốc gia/nhóm ngôn ngữ: %d\n", g2);
  printf("Mã nhà xuất bản: %d\n", g3);
  printf("Mã ấn phẩm: %d\n", g4);
  printf("Chữ số kiểm tra: %d\n", g5);

  // Kiểm thử với 978-0-393-97950-3 => OK
  // Kiểm thử với 978-101-0-00100-3 => NOK - Không bảo toàn độ dài
  //      => Cần công cụ xử lý chuỗi ký tự
  return 0;
}