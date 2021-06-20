#include <stdio.h>

int main() {
  int d1, d2, d3, d4;
  printf("Nhập bốn số nguyên: ");
  scanf("%d%d%d%d", &d1, &d2, &d3, &d4);
  int min1, min2, max1, max2;
  if (d1 < d2) {
    min1 = d1;
    max1 = d2;
  } else {
    min1 = d2;
    max1 = d1;
  }
  if (d3 < d4) {
    min2 = d3;
    max2 = d4;
  } else {
    min2 = d4;
    max2 = d3;
  }
  int min = min2, max = max2;
  if (min1 < min2) {
    min = min1;
  }
  if (max1 > max2) {
    max = max1;
  }
  printf("Số lớn nhất: %d\n", max);
  printf("Số nhỏ nhất: %d\n", min);
}