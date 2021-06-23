#include <stdio.h>
void selection_sort(int n, int a[]) {
  if (n <= 1) {
    return;
  }
  int j = n - 1;
  for (int i = 0; i < n - 1; ++i) {
    if (a[i] > a[j]) {
      j = i;
    }
  }
  if (j != n - 1) {
    int tmp = a[j];
    a[j] = a[n - 1];
    a[n - 1] = tmp;
  }
  selection_sort(n - 1, a);
}
int main() {
  int a[100];
  int n;
  printf("Nhập số lượng phần tử: ");
  scanf("%d", &n);
  printf("Nhập %d số nguyên: ", n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  selection_sort(n, a);
  printf("Dãy sau khi sắp xếp: ");
  for (int i = 0; i < n; ++i) {
    printf(" %d", a[i]);
  }
  printf("\n");
  return 0;
}