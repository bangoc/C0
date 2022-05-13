/*
  (C) Nguyễn Bá Ngọc 2021
  Nhập n chuỗi ký tự và xuất theo thứ tự ngược lại
*/

#include <stdio.h>

int main() {
  char c[100][100];
  int n;
  printf("Nhập số nguyên dương n <= 100: ");
  scanf("%d", &n);
  printf("Nhập n chuỗi ký tự: \n");
  while (getchar() != '\n') ;
  for (int i = 0; i < n; ++i) {
    printf("Chuỗi %d: ", i);
    scanf("%[^\n]%*c", c[i]);
  }
  printf("Các chuỗi theo thứ tự ngược lại: \n");
  for (int i = n - 1; i >= 0; --i) {
    printf("%s\n", c[i]);
  }
  return 0;
}