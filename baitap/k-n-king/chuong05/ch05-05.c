#include <stdio.h>

int main() {
  float income;
  printf("Nhập khoản thu nhập chịu thuế (triệu): ");
  scanf("%f", &income);
  float tax = 0;
  if (income < 7.5) {
    tax = 0.01 * income;
  } else if (income < 22.5) {
    tax = 0.075 + 0.02 * (income - 7.5);
  } else if (income < 37.5) {
    tax = 0.375 + 0.03 * (income - 22.5);
  } else if (income < 52.5) {
    tax = 0.825 + 0.04 * (income - 37.5);
  } else if (income < 70) {
    tax = 1.425 + 0.05 * (income - 52.5);
  } else {
    tax = 2.3 + 0.06 * (income - 70);
  }
  printf("Khoản thuế phải nộp (triệu): %.3f\n", tax);
  return 0;
}