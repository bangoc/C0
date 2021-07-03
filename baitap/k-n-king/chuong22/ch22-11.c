#include <stdio.h>
int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Sử dụng: ./pdate 10-11-2020\n./pdate 10/11/2020\n");
    return 1;
  }
  int d, m, y;
  char c1, c2;
  if (sscanf(argv[1], "%d%*[-/]%d%*[-/]%d", &d, &m, &y) != 3) {
    printf("Lỗi đọc dữ liệu.\n");
  } else {
    printf("Ngày %d, tháng %d, %d\n", d, m, y);
  }
  return 0;
}