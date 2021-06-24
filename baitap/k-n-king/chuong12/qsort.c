/* Sắp xếp mảng số nguyên sử dụng giải thuật Quicksort */

#include <stdio.h>

#define N 10

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void) {
  int a[N], i;
  printf("Nhập %d số nguyên cần sắp xếp: ", N);
  for (int i = 0; i < N; ++i) {
    scanf("%d", &a[i]);
  }
  quicksort(a, 0, N - 1);
  printf("Theo thứ tự đã sắp xếp: ");
  for (i = 0; i < N; ++i) {
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}

void quicksort(int a[], int low, int high) {
  int middle;
  if (low >= high) {
    return;
  }
  middle = split(a, low, high);
  quicksort(a, low, middle - 1);
  quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high) {
  int part_element = a[low];
  for (;;) {
    while (low < high && part_element <= a[high]) {
      --high;
    }
    if (low >= high) {
      break;
    }
    a[low++] = a[high];
    while (low < high && a[low] <= part_element) {
      ++low;
    }
    if (low >= high) {
      break;
    }
    if (low >= high) {
      break;
    }
    a[high--] = a[low];
  }
  a[high] = part_element;
  return high;
}