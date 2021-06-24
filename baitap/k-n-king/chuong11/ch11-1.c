#include <stdio.h>

void pay_amount(int amount, int *n20, int *n10,
                int *n5, int *n2, int *n1) {
  *n20 = amount / 20;
  amount %= 20;
  *n10 = amount / 10;
  amount %= 10;
  *n5 = amount / 5;
  amount %= 5;
  *n2 = amount / 2;
  amount %= 2;
  *n1 = amount;
}

int main() {
  int amount;
  printf("Nhập số tiền (x 1000 VNĐ): ");
  scanf("%d", &amount);
  int n20, n10, n5, n2, n1;
  pay_amount(amount, &n20, &n10, &n5, &n2, &n1);
  printf("số tờ 20000: %d\n", n20);
  printf("số tờ 10000: %d\n", n10);
  printf("số tờ  5000: %d\n", n5);
  printf("số tờ  2000: %d\n", n2);
  printf("số tờ  1000: %d\n", n1);
  printf("tổng số tờ : %d\n", n1 + n2 + n5 + n10 + n20);
  return 0;
}