#include <stdbool.h>
#include <stdio.h>

#include "country_codes.h"

int main() {
  int code;
  printf("Nhập mã điện thoại quốc gia: ");
  scanf("%d", &code);
  int n = get_codes_size();
  bool found = false;
  for (int i = 0; i < n; ++i) {
    if (country_codes[i].code == code) {
      printf("Tên quốc gia: %s\n", country_codes[i].country);
      found = true;
      break;
    }
  }
  if (!found) {
    printf("Không tìm thấy tên quốc gia với mã %d\n", code);
  }
  return 0;
}