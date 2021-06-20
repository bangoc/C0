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
  float commission, value, price;
  int n;
  printf("Nhập số lượng cổ phiếu trong giao dịch: ");
  scanf("%d", &n);
  printf("Nhập giá 1 cổ phiếu (triệu): ");
  scanf("%f", &price);
  value = n * price;
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
  printf("Phí giao dịch của môi giới 1 (triệu): %.2f\n", commission);
  float commission2;
  if (n < 2000) {
    commission2 = 0.33 + 0.0003 * n;
  } else {
    commission2 = 0.33 + 0.0002 * n;
  }
  printf("Phí giao dịch của môi giới 2 (triệu): %.2f\n", commission2);
  return 0;
}