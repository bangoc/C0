/*
  Chương trình hiển thị giá trị của 1 triệu tiền đầu tư với lãi suất khác nhau qua các năm. Người dùng nhập lãi suất và số năm đầu tư. Chương trình hiển thị bảng giá trị tiền đầu tư hàng năm bắt đầu với lãi suất ban đầu và 4 mức lãi suất tiếp theo cao hơn. Giả sử lợi nhuận được gộp 1 lần 1 năm. Một phiên làm việc của chương tình có thể như sau:

  Nhập lãi suất: 6
  Nhập số năm: 5

  Các năm     6%     7%     8%     9%    10%
      1      1.06   1.07   1.08   1.09   1.10
      2      1.12   1.14   1.17   1.19   1.21
      3      1.19   1.23   1.26   1.30   1.33
      4      1.26   1.31   1.36   1.41   1.46
      5      1.34   1.40   1.47   1.54   1.61
*/

#include <stdio.h>

#define NUM_RATES ((int)(sizeof(value)/sizeof(value[0])))
#define INITIAL_BALANCE 1.0

int main() {
  int i, low_rate, num_years, year;
  double value[5];
  printf("Nhập lãi suất: ");
  scanf("%d", &low_rate);
  printf("Nhập số năm: ");
  scanf("%d", &num_years);
  printf("\nCác năm");
  for (i = 0; i < NUM_RATES; ++i) {
    printf("%6d%%", low_rate + i);
    value[i] = INITIAL_BALANCE;
  }
  printf("\n");
  for (year = 1; year <= num_years; ++year) {
    printf("%5d   ", year);
    for (i = 0; i < NUM_RATES; ++i) {
      value[i] += (low_rate + i) / 100.0 * value[i];
      printf("%7.2f", value[i]);
    }
    printf("\n");
  }
  return 0;
}