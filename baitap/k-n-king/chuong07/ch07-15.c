#include <stdio.h>
#include <math.h>

int main() {
  printf("1 = sử dụng kiểu short.\n"
         "2 = sử dụng kiểu int.\n"
         "3 = sử dụng kiểu long.\n"
         "4 = sử dụng kiểu long long.\n"
         "5 = sử dụng kiểu float.\n"
         "6 = sử dụng kiểu double.\n"
         "7 = sử dụng kiểu long double.\n");
  printf("Nhập lựa chọn của bạn (1-7): ");
  int choice;
  scanf("%d", &choice);
  if (choice == 1) {
    short n, gt = 1;
    printf("Đang sử dụng kiểu short:\n");
    printf("nhập n = ");
    scanf("%hd", &n);
    for (short i = 1; i <= n; ++i) {
      gt *= i;
      printf("%hd! = %hd\n", i, gt);
    }
  } else if (choice == 2) {
    int n, gt = 1;
    printf("Đang sử dụng kiểu int:\n");
    printf("nhập n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
      gt *= i;
      printf("%d! = %d\n", i, gt);
    }
  } else if (choice == 3) {
    long n, gt = 1;
    printf("Đang sử dụng kiểu long:\n");
    printf("nhập n = ");
    scanf("%ld", &n);
    for (long i = 1; i <= n; ++i) {
      gt *= i;
      printf("%ld! = %ld\n", i, gt);
    }
  } else if (choice == 4) {
    long long n, gt = 1;
    printf("Đang sử dụng kiểu long long:\n");
    printf("nhập n = ");
    scanf("%lld", &n);
    for (long long i = 1; i <= n; ++i) {
      gt *= i;
      printf("%lld! = %lld\n", i, gt);
    }
  } else if (choice == 5) {
    float n, gt = 1;
    printf("Đang sử dụng kiểu float:\n");
    printf("nhập n = ");
    scanf("%f", &n);
    for (float i = 1; i <= n; ++i) {
      gt *= i;
      printf("%.0f! = %e\n", i, gt);
      if (isinf(gt)) {
        break;
      }
    }
  } else if (choice == 6) {
    double n, gt = 1;
    printf("Đang sử dụng kiểu double:\n");
    printf("nhập n = ");
    scanf("%lf", &n);
    for (double i = 1; i <= n; ++i) {
      gt *= i;
      printf("%.0lf! = %le\n", i, gt);
      if (isinf(gt)) {
        break;
      }
    }
  } else if (choice == 7) {
    long double n, gt = 1;
    printf("Đang sử dụng kiểu long double:\n");
    printf("nhập n = ");
    scanf("%Lf", &n);
    for (long double i = 1; i <= n; ++i) {
      gt *= i;
      printf("%.0Lf! = %Le\n", i, gt);
      if (isinf(gt)) {
        break;
      }
    }
  }
  return 0;
}