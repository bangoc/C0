/*
 Khi cổ phiếu được bán và mua qua môi giới, phí môi giới thường được tính theo thang lũy tiến dựa trên giá trị của giao dịch. Giả sử bên môi giới thu khoản phí như trong bảng sau:

 Giá trị giao dịch      Phí môi giới
 Dưới 25 triệu          0.3 + 1.7%
 25-62.5 triệu          0.56 + 0.66%
 62.5-200 triệu         0.76 + 0.34%
 200-500 triệu          1 + 0.22%
 trên 500 triệu         1.55 + 0.11%

 Khoản phí tối thiểu là 0.39. Chương trình này hỏi người dùng nhập vào giá trị giao dịch, sau đó hiển thị khoản phí:

 Nhập giá trị giao dịch (triệu): 300
 Phí giao dịch (triệu): 1.66
*/

#include <stdio.h>

int main() {
  float commission, value;
  printf("Nhập giá trị giao dịch (triệu): ");
  scanf("%f", &value);
  if (value < 25) {
    commission = 0.3 + 0.017 * value;
  } else if (value < 62.5) {
    commission = 0.56 + 0.0066 * value;
  } else if (value < 200) {
    commission = 0.76 + 0.0034 * value;
  } else if (value < 500) {
    commission = 1 + 0.0022 * value;
  } else {
    commission = 1.55 * 0.0011 * value;
  }
  if (commission < 0.39) {
    commission = 0.39;
  }
  printf("Phí giao dịch (triệu): %.2f\n", commission);
  return 0;
}