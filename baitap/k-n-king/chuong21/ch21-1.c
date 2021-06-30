/* Kết quả thực thi chương trình có thể như sau:
Kích thước của s (bytes): 16
Kích thước của s.a (bytes): 1
Kích thước của s.b (bytes): 8
Kích thước của s.c (bytes): 4
Độ xê dịch của a (bytes): 0
Độ xê dịch của b (bytes): 4
Tồn tại khoảng trống 3 (bytes) giữa a và b.
Độ xê dịch của c (bytes): 12
Không có khoảng trống giữa b và c.
*/

#include <stddef.h>
#include <stdio.h>

#include "s.h"

int main() {
  struct s s;
  long sizes = sizeof(s),
       sizea = sizeof(s.a),
       sizeb = sizeof(s.b),
       sizec = sizeof(s.c);
  printf("Kích thước của s (bytes): %ld\n", sizes);
  printf("Kích thước của s.a (bytes): %ld\n", sizea);
  printf("Kích thước của s.b (bytes): %ld\n", sizeb);
  printf("Kích thước của s.c (bytes): %ld\n", sizec);
  long offa = offsetof(struct s, a),  // Được đảm bảo bằng 0

  // Có thể có khoảng trống giữa các thành phần của cấu trúc
       offb = offsetof(struct s, b),
       offc = offsetof(struct s, c);
  printf("Độ xê dịch của a (bytes): %ld\n", offa);
  printf("Độ xê dịch của b (bytes): %ld\n", offb);
  if (offb > offa + sizea) {
    printf("Tồn tại khoảng trống %ld (bytes) giữa a và b.\n",
        offb - offa - sizea);
  } else {
    printf("Không có khoảng trống giữa a và b.\n");
  }
  printf("Độ xê dịch của c (bytes): %ld\n", offc);
  if (offc > offb + sizeb) {
    printf("Tồn tại khoảng trống %ld (bytes) giữa a và b.\n",
        offc - offb - sizeb);
  } else {
    printf("Không có khoảng trống giữa b và c.\n");
  }
  return 0;
}