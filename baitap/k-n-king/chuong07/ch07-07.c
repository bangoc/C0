#include <stdio.h>

int main() {
  int num1, denom1, num2, denom2, num3, denom3;
  char op;
  printf("Nhập phép tính hai tỉ số: ");
  scanf("%d/%d%c%d/%d", &num1, &denom1, &op, &num2, &denom2);
  switch (op) {
    case '+':
      num3 = num1 * denom2 + num2 * denom1;
      denom3 = denom1 * denom2;
      break;
    case '-':
      num3 = num1 * denom2 - num2 * denom1;
      denom3 = denom1 * denom2;
      break;
    case '*':
      num3 = num1 * num2;
      denom3 = denom1 * denom2;
      break;
    case '/':
      num3 = num1 * denom2;
      denom3 = denom1 * num2;
      break;
  }
  printf("Kết quả là: %d/%d\n", num3, denom3);
  return 0;
}