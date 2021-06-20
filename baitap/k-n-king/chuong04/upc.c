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
  int d, i1, i2, i3, i4, i5, i6, j1, j2, j3, j4, j5,
      first_sum, second_sum, total;
  printf("Nhập vào (một) chữ số đầu tiên: ");
  scanf("%1d", &d);
  printf("Nhập nhóm 5 chữ số đầu tiên: ");
  scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
  printf("Nhập nhóm 5 chữ số thứ hai: ");
  scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;
  total = 3 * first_sum + second_sum;

  printf("Chữ số kiểm tra: %d\n", 9 - ((total - 1) % 10));
  return 0;
}