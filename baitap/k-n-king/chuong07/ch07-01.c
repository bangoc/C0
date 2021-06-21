#include <stdio.h>

int main() {
  int i = 1 << (sizeof(int) * 4 - 1);
  printf("Đối với kiểu int: \n");
  for (;;) {
    int s = i * i,
        s1 = (i + 1) * (i + 1);
    if (s1 < s) {
      printf("%d * %d = %d\n", i, i, s);
      printf("%d * %d = %d\n", i + 1, i + 1, s1);
      break;
    }
    ++i;
  }

  printf("Đối với kiểu short: \n");
  short h = 1 << (sizeof(short) * 4 - 1);
  for (;;) {
    short s = h * h,
          s1 = (h + 1) * (h + 1);
    if (s1 < s) {
      printf("%hd * %hd = %hd\n", h, h, s);
      printf("%hd * %hd = %hd\n", h + 1, h + 1, s1);
      break;
    }
    ++h;
  }

  printf("Đối với kiểu long: \n");
  long l = 1l << (sizeof(long) * 4 - 1);
  for (;;) {
    long s = l * l,
         s1 = (l + 1) * (l + 1);
    if (s1 < s) {
      printf("%ld * %ld = %ld\n", l, l, s);
      printf("%ld * %ld = %ld\n", l + 1, l + 1, s1);
      break;
    }
    ++l;
  }

  return 0;
}