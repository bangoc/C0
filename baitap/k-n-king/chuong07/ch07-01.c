#include <stdio.h>
#include <limits.h>

int main() {
  printf("1 = sử dụng kiểu short.\n2 = sử dụng kiểu int.\n3 = sử dụng kiểu long.\n");
  printf("Nhập lựa chọn của bạn (1-3) = ");
  int choice;
  scanf("%d", &choice);
  if (choice == 1) {
    short n = 1 << (sizeof(short) * 4 - 1);
    printf("Đang sử dụng kiểu short:\n");
    for (;;) {
      if (SHRT_MAX / n < n) {
        short n1 = n - 1;
        printf("%10hd%10hd\n", n1, n1 * n1);
        printf("%10hd%10hd\n", n, n * n);
        break;
      }
      ++n;
    }
  } else if (choice == 2) {
    int n = 1 << (sizeof(int) * 4 - 1);
    printf("Đang sử dụng kiểu int:\n");
    for (;;) {
      if (INT_MAX / n < n) {
        int n1 = n - 1;
        printf("%10d%15d\n", n1, n1 * n1);
        printf("%10d%15d\n", n, n * n);
        break;
      }
      ++n;
    }
  } else if (choice == 3) {
    long n = 1l << (sizeof(long) * 4 - 1);
    printf("Đang sử dụng kiểu long:\n");
    for (;;) {
      if (LONG_MAX / n < n) {
        long n1 = n - 1;
        printf("%10ld%23ld\n", n1, n1 * n1);
        printf("%10ld%23ld\n", n, n * n);
        break;
      }
      ++n;
    }
  }
  return 0;
}