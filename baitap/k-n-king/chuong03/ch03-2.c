#include <stdio.h>

int main() {
  int id, price, d, m, y;
  printf("Nhập mã số sản phẩm: ");
  scanf("%d", &id);
  printf("Nhập giá bán sản phẩm (VNĐ): ");
  scanf("%d", &price);
  printf("Nhập ngày mua hàng (dd/mm/yyyy): ");
  scanf("%d/%d/%d", &d, &m, &y);
  // Căn chỉnh cột kích thước cố định
  //      0123456789012345678901234567  0123456789
  //        10      |    18             |  10    |
  printf("Mã số     Giá bán             Ngày mua  \n");
  printf("%-10d%12d VNĐ    %02d/%02d/%04d\n", id, price, d, m, y);
  return 0;
}