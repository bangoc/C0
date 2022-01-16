/*
  (C) Nguyen Ba Ngoc 2022
  Minh họa rẽ nhánh biên dịch: Chương trình đưa ra thông báo hỗ trợ tìm lỗi
  nếu được biên dịch với khóa -DDEBUG, trong trường hợp ngược lại chương trình
  bỏ qua thông báo này.
  gcc -DDEBUG -o prog vd11-2.c
*/

#include <stdio.h>

int main() {
  int a, b;
  printf("Nhập 2 số nguyên a và b: ");
  scanf("%d%d", &a, &b);
#ifdef DEBUG
  printf("Đã nhập: a = %d, b = %d\n", a, b);
#endif  // DEBUG
  int sum = a + b;
  printf("sum = %d\n", a + b);
  return 0;
}