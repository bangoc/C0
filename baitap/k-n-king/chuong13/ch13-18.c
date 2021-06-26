#include <stdio.h>
int main() {
  int d, m, y;
  char *months[] = {"", "Tháng giêng", "Tháng hai", "Tháng ba", "Tháng từ", "Tháng năm",
        "Tháng sáu", "Tháng bẩy", "Tháng tám", "Tháng chín", "Tháng mười", "Tháng mười một",
        "Tháng mười hai"};
  printf("Nhập vào một ngày (dd/mm/yy): ");
  scanf("%d/%d/%d", &d, &m, &y);
  printf("Bạn đã nhập ngày: %d %s, %d\n", d, months[m], y);
  return 0;
}