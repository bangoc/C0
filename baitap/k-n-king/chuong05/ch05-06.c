/*
  Mã UPC bao gồm 12 chữ số:
    - chữ số đầu tiên là phân loại đồ (0 hoặc 7 cho hầu hết các loại đồ, 2 là đồ cần được cân, 3 là thuốc hoặc hàng hóa khác liên quan đến sức khỏe, và 6 là các phiếu).
    - nhóm 5 chữ số kế tiếp xác định nhà sản xuất
    - nhóm 5 chữ số tiếp theo xác định hàng hóa (bao gồm cả kích thước đóng gói)
    - chữ số cuối cùng là chữ số kiểm tra được sử dụng để kiểm tra lỗi trong các chữ số đứng trước.
    Chữ số kiểm tra được tính như sau:
    Cộng các chữ số thứ 1, thứ 3, thứ 5, thứ 7, thứ 9 và thứ 11
    Cộng các chữ số thứ 2, thứ 4, thứ 6, thứ 8, và thứ 10
    Nhân tổng thứ nhất với 3 và cộng với tổng thứ 2
    Lấy kết quả trừ 1
    Lấy phần dư của kết quả (sau khi đã trừ 1) khi chia cho 10
    Lấy 9 trừ phần dư.
*/

/* Tính chữ số kiểm tra cho mã UPC */
#include <stdio.h>

int main() {
  int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;
  printf("Nhập mã UPC (12 chữ số): ");
  //       1  2  3  4  5  6  1  2  3  4  5  6
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
         &d1, &d2, &d3, &d4, &d5, &d6,
         &d7, &d8, &d9, &d10, &d11, &d12);
  int s1 = d1 + d3 + d5 + d7 + d9 + d11;
  int s2 = d2 + d4 + d6 + d8 + d10;
  int total = 3 * s1 + s2 - 1;
  int c = 9 - total % 10;
  if (c == d12) {
    printf("Hợp lệ.\n");
  } else {
    printf("Không hợp lệ.\n");
  }
  return 0;
}