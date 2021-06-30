#include <stdbool.h>   /* C99 */
#include <stdio.h>
#include <stdlib.h>

#include "stackADT.h"

int main() {
  char ch, ch1;
  int result = 0;
  Stack s = create();
  printf("Nhập dãy ngoặc (ngoặc tròn và ngoặc nhọn) lồng nhau: ");
  for (;;) {
    ch = getchar();
    if (ch == '\n') {
      if (!is_empty(s)) {
        result = 1;  // Trường hợp 1: Ngăn xếp khác rỗng khi kết thúc
      }
      break;
    } else if (ch == '(' || ch == '{') {
      push(s, ch);
    } else if (ch == ')' || ch == '}') {
      ch1 = pop(s);
    } else {
      // Bỏ qua các ký tự khác
      continue;
    }
    // Kiểm tra cặp ngoặc đóng & mở
    if (ch == ')' && ch1 != '(') {
      result = 4;  // Trường hợp 4: Lỗi đặt ngoặc ()
      break;
    } else if (ch == '}' && ch1 != '{') {
      result  = 5;  // Trường hợp 5: Lỗi đặt ngoặc {}
      break;
    }
  }
  switch (result) {
    case 0:
      printf("Dãy ngoặc được đạt đúng.\n");
      break;
    case 1:
      printf("Thừa ngoặc mở. Dãy ngoặc được đặt sai.\n");
      break;
    case 4:
      printf("Cặp () không khớp. Dãy ngoặc được đặt sai.\n");
      break;
    case 5:
      printf("Cặp {} không khớp. Dãy ngoặc được đặt sai.\n");
      break;
  }
  destroy(s);
  return 0;
}