#include <stdio.h>

void create_magic_square(int n, int a[100][100]) {
  int r = 0, c = n / 2, v = 1,
      r1, c1, n2 = n * n;
  a[r][c] = v;
  for (;;) {
    ++v;
    if (v > n2) {
      break;
    }
    r1 = r - 1;
    if (r1 < 0) {
      r1 = n - 1;
    }
    c1 = (c + 1) % n;
    if (a[r1][c1] == 0) {
      r = r1;
      c = c1;
    } else {
      r = (r + 1) % n;
    }
    if (a[r][c] != 0) {
      printf("Giải thuật có lỗi.\n");
    }
    a[r][c] = v;
  }
}

void print_magic_square(int n, int a[100][100]) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      printf("%5d", a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("Tổng các dòng: ");
  for (int i = 0; i < n; ++i) {
    int s = 0;
    for (int j = 0; j < n; ++j) {
      s += a[i][j];
    }
    printf(" %d", s);
  }
  printf("\nTổng các cột: ");
  for (int i = 0; i < n; ++i) {
    int s = 0;
    for (int j = 0; j < n; ++j) {
      s += a[j][i];
    }
    printf(" %d", s);
  }
  printf("\nTổng các đường chéo: ");
  int d1 = 0, d2 = 0;
  for (int i = 0; i < n; ++i) {
    d1 += a[i][i];
    d2 += a[i][n - 1 - i];
  }
  printf("%d %d\n", d1, d2);
}

int main() {
  int a[100][100];
  int n;
  printf("Chương trình này tạo một ma trận kỳ ảo với kích thước được cho. "
         "Kích thước phải là một số lẻ trong khoảng giữa 1 và 99.");
  printf("Nhập kích thước của ma trận kỳ ảo: ");
  scanf("%d", &n);
  create_magic_square(n, a);
  print_magic_square(n, a);
  return 0;
}