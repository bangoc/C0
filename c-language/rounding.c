#include <stdio.h>
#include <fenv.h>

int main() {
  // Mặc định làm tròn đến giá trị gần nhất, ưu tiên "số chẵn"
  // (bit thấp nhất = 0), bởi vì ổn định hơn từ góc độ toán học
  // http://www.gnu.org/software/libc/manual/html_node/Rounding.html
  printf("%.1f\n", (8.5 + 9.0) / 2);
  printf("%.1f\n", (8.5 + 10) / 2);

  #pragma STDC FENV_ACCESS ON

  fesetround(FE_UPWARD);
  printf("%.1f\n", (8.5 + 9.0) / 2);
  printf("%.1f\n", (8.5 + 10) / 2);

  fesetround(FE_TONEAREST);
  printf("%.1f\n", (8.5 + 9.0) / 2);
  printf("%.1f\n", (8.5 + 10) / 2);

  fesetround(FE_DOWNWARD);
  printf("%.2f\n", 1.555 / 2);
  return 0;
}
