#include <stdio.h>

struct product_info {
  int id, price, d, m, y;
};

int main(int argc, char *argv[]) {
  struct product_info products[100];
  int num_products = 0;
  if (argc != 2) {
    printf("Sử dụng: ./pproduct products.txt\n");
    return 0;
  }
  FILE *f = fopen(argv[1], "r");
  struct product_info tmp;
  while (!feof(f)) {
    if (fscanf(f, "%d, %d, %d/%d/%d", &tmp.id, &tmp.price, &tmp.d, &tmp.m, &tmp.y) == 5) {
      products[num_products] = tmp;
      ++num_products;
    }
  }
  fclose(f);
  // Căn chỉnh cột kích thước cố định
  //      0123456789012345678901234567  0123456789
  //        12        |    18             |  10    |
  printf("Mã sản phẩm     Giá bán (VNĐ)      Ngày mua  \n");
  for (int i = 0; i < num_products; ++i) {
    struct product_info *p = products + i;
    printf("%-12d%16d      %02d/%02d/%04d\n", p->id, p->price, p->d, p->m, p->y);
  }
  return 0;
}