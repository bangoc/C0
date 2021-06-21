#include <stdio.h>

int main() {
  {
    printf("a) Đối với kiểu short: \n");
    short n = 1, gt = 1;
    for (;;) {
      short gt1 = gt * (n + 1);
      if ((gt1 / gt) != (n + 1)) {
        printf("%hd! = %hd\n%hd! = %hd\n%hd! = %hd\n", n - 1, gt/n, n, gt, n + 1, gt1);
        break;
      }
      gt = gt1;
      ++n;
    }
  }
  {
    printf("b) Đối với kiểu int: \n");
    int n = 1, gt = 1;
    for (;;) {
      int gt1 = gt * (n + 1);
      if ((gt1 / gt) != (n + 1)) {
        printf("%d! = %d\n%d! = %d\n%d! = %d\n", n - 1, gt/n, n, gt, n + 1, gt1);
        break;
      }
      gt = gt1;
      ++n;
    }
  }
  {
    printf("c) Đối với kiểu long: \n");
    long n = 1, gt = 1;
    for (;;) {
      long gt1 = gt * (n + 1);
      if ((gt1 / gt) != (n + 1)) {
        printf("%ld! = %ld\n%ld! = %ld\n%ld! = %ld\n", n - 1, gt/n, n, gt, n + 1, gt1);
        break;
      }
      gt = gt1;
      ++n;
    }
  }
  {
    printf("d) Đối với kiểu long long: \n");
    long long n = 1, gt = 1;
    for (;;) {
      long long gt1 = gt * (n + 1);
      if ((gt1 / gt) != (n + 1)) {
        printf("%lld! = %lld\n%lld! = %lld\n%lld! = %lld\n", n - 1, gt/n, n, gt, n + 1, gt1);
        break;
      }
      gt = gt1;
      ++n;
    }
  }
  {
    printf("e) Đối với kiểu float: \n");
    float n = 1, gt = 1;
    for (;;) {
      float gt1 = gt * (n + 1);
      if ((gt1 / gt) != (n + 1)) {
        printf("%f! = %f\n%f! = %f\n%f! = %f\n", n - 1, gt/n, n, gt, n + 1, gt1);
        break;
      }
      gt = gt1;
      ++n;
    }
  }

  {
    printf("f) Đối với kiểu double: \n");
    double n = 1, gt = 1;
    for (;;) {
      double gt1 = gt * (n + 1);
      if ((gt1 / gt) != (n + 1)) {
        printf("%lf! = %lf\n%lf! = %lf\n%lf! = %lf\n", n - 1, gt/n, n, gt, n + 1, gt1);
        break;
      }
      gt = gt1;
      ++n;
    }
  }

  {
    printf("g) Đối với kiểu long double: \n");
    long double n = 1, gt = 1;
    for (;;) {
      long double gt1 = gt * (n + 1);
      if ((gt1 / gt) != (n + 1)) {
        printf("%Lf! = %Lf\n%Lf! = %Lf\n%Lf! = %Lf\n", n - 1, gt/n, n, gt, n + 1, gt1);
        break;
      }
      gt = gt1;
      ++n;
    }
  }
  return 0;
}