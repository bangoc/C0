/*
  @bangoc 2021

  Tệp tiêu đề: stdio.h
  Nguyên mẫu:
    int sprintf (char *__restrict __s,
                 const char *__restrict __format, ...);
    int scanf (const char *__restrict __format, ...);

  Một số trường hợp nhập & xuất cơ bản.
  * Mẹo hay: Có thể đóng tất cả các phần còn lại, để tập trung hơn
  vào thử nghiệm phần được quan tâm nhất.
 */

#include <stdio.h>

int main() {
  printf("----Các số nguyên có dấu:----\n");
  // Nhập & xuất một số nguyên kiểu int
  int i;
  scanf("%d", &i);  // Nhập i, &i là địa chỉ của i
  printf("i = %d\n", i);  // Xuất i, %d - mẫu xuất biến kiểu int

  // Nhập & xuất một số nguyên kiểu long
  long l;
  scanf("%ld", &l);  // %ld là mẫu định dạng cho biến kiểu long
  printf("l = %ld\n", l);

  // Nhập & xuất một số nguyên kiểu long long
  long long ll;
  scanf("%lld", &ll);
  printf("ll = %lld\n", ll);

  printf("-----Các số nguyên không dấu:------\n");
  // Nhập & xuất một số nguyên kiểu unsigned int
  unsigned int ui;
  scanf("%u", &ui);  // Nếu sử dụng %d có thể gặp vấn đề tràn số
  printf("ui = %u\n", ui);  // Sử dụng u để nhập & xuất số không dấu

  // Nhập & xuất kiểu unsigned long
  unsigned long lu;
  scanf("%lu", &lu);
  printf("lu = %lu\n", lu);

  // Nhập & xuất kiểu unsigned long long
  unsigned long long llu;
  scanf("%llu", &llu);
  printf("llu = %llu\n", llu);

  printf("----------Các số thực:----------\n");
  float f;
  scanf("%f", &f);
  printf("f = %f\n", f);

  double d;
  scanf("%lf", &d);  // %lf là bắt buộc để scanf biến double
  printf("d = %lf\n", d); // nhưng có thể dùng %f hoặc %lf để printf
  printf("d = %f\n", d);  // Cũng Ok

  long double ld;
  scanf("%Lf", &ld);  // %Lf áp dụng cho long double
  printf("ld = %Lf\n", ld);

  printf("----Nhập ký tự----\n");
  char c;
  scanf(" %c", &c);  // Dấu cách trước %c là để xóa các khoảng trắng
  printf("c = %c\n", c); // trong bộ nhớ đệm sau lần nhập trước đó.
  scanf(" %c", &c);  // Nhập thêm một ký tự nữa.
  printf("c2 = %c\n", c); // Thử: xóa khoảng trắng trước %c

  printf("-----Nhập mảng n phần tử -----\n");
  // Cần nhập số n và lặp n lần nhập phần tử của mảng
  //
  // Nhập mảng một chiều kiểu int, (làm tương tự với các kiểu dữ liệu
  // khác).
  int a[100];
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);  // a[i] tương đương một biến kiểu int
  }
  printf("n = %d\n", n);
  for (int i = 0; i < n; ++i) {
    printf("a[%d] = %d\n", i, a[i]);
  }

  printf("-------Nhập chuỗi ký tự--------\n");
  char s[100];

  // Nhập chuỗi không chứa khoảng trắng, ví dụ: sinhvien
  scanf("%s", s);  // scanf sẽ tự bỏ qua các khoảng trắng
  printf("s = %s\n", s);

  // Nhập chuỗi có chứa khoảng trắng, ví dụ: Nguyen Van A
  // !Lưu ý: Cú pháp này khá phức tạp và không phải là nhập nguyên
  // một dòng. Để nhập nguyên một dòng - tham khảo thêm gets-puts.c
  scanf(" %[^\n]", s);
  printf("s = %s\n", s);
  scanf(" %[^\n]", s);  // Nhập thêm một lần nữa
  printf("s = %s\n", s);
  return 0;
}