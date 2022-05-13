#include <stdio.h>

int main() {
  int n;
  printf("Nhập 1 số nguyên dương: ");
  scanf("%d", &n);
  if (n <= 0 ) {
    printf("%d không thỏa mãn yêu cầu.\n", n);
    return 0;
  }
  if (n % 2 == 0) {
    int sum = n * (n + 2) / 4;
    printf("2 + ... + %d = %d\n", n, sum);
  } else {
    int sum = (n + 1) * (n + 1) / 4;
    printf("1 + ... + %d = %d\n", n, sum);
  }
  return 0;
}
