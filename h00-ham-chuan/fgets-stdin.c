/*
  @bangoc: 2021
  Tệp tiêu đề: stdio.h
  Nguyên mẫu:
    char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream);

  Xem thêm: gets-puts.c
*/

#include <stdio.h>
#define N 100
int main() {
  char s[N];

  // Đọc một dòng bao gồm cả dấu xuống dòng
  fgets(s, N, stdin);
  // Giải thích:
  //   Nếu thao tác nhập của bạn là a b c⏎ (Enter)
  //   thì chuỗi s có thể (vì còn phụ thuộc môi trường) là:
  //         "a b c\n\0" (có bao gồm ký tự xuống dòng)
  // So sánh với gets:
  //   Nếu sử dụng gets(s); và thực hiện cùng thao tác nhập
  //   Thì chuỗi s là:
  //         "a b c\0" (không bao gồm ký tự xuống dòng)
  //
  // Các tham số:
  //   stdin - là luồng nhập tiêu chuẩn, thường được mặc đình là
  //           nhập từ bàn phím.
  //   s     - lưu kết quả nhập
  //   N     - giới hạn, đọc không quá N-1 ký tự, sau đó thêm ký tự
  //           '\0' vào sau ký tự đọc được cuối cùng.
  //
  // So sánh fgets và gets - là một cặp hàm nhập chuỗi ký tự khá
  // đặc biệt: Tuy một cái vẫn để nhập từ tệp, còn cái kia để nhập từ
  // bàn phím như các cặp hàm nhập khác (có tên giống nhau, ví dụ
  // fscanf và scanf). Nhưng lô-gic hoạt động khác nhau.
  //
  // Cụ thể: gets xóa ký tự xuống dòng khỏi bộ nhớ đệm nhập nhưng
  //         không đưa vào chuỗi kết quả nhập.
  //         fgets xóa ký tự xuống dòng khỏi bộ nhớ đệm nhập, và có
  //         đưa vào chuỗi kết quả nhập.
  //

  printf("s = %s", s);  // Có xuống dòng
  // gets(s);
  // printf("s = %s", s);  // Không xuống dòng

  // Vậy nên sử dụng fgets hay gets?
  //
  // Câu trả lời phụ thuộc vào tình hình thực tế và quy chuẩn.
  //
  // Đối với người mới bắt đầu lập trình thì gets có ưu điểm: Có
  // thiết kế đơn giản hơn vì chỉ có một tham số, vì vậy cũng dễ sử
  // dụng hơn. Hàm fgets có nhiều tham số hơn và yêu cầu khái niệm
  // luồng nhập (tuy nhiên vẫn là các khái niệm cơ bản nên không phải
  // là quá khó).
  //
  // Nhưng nếu xét từ góc độ chuyên nghiệp, thì fgets được coi là hàm
  // có thiết kế tốt hơn: 1) An toàn hơn: Vì có giới hạn số lượng ký
  // tự nhập nên có thể tránh được lỗi làm tràn mảng đầu ra trong
  // những trường hợp không biết trước số lượng ký tự trên một dòng;
  // 2) Đa chức năng hơn: Khái quát hóa được khái niệm luồng nhập
  // (sử dụng 1 hàm để đọc dữ liệu từ nhiều nguồn khác nhau: Bàn
  // phím, tệp, v.v...). Các xử lý xóa dấu xuống dòng cũng tương đối
  // đơn giản.
  //
  // Một số điểm cần lưu ý:
  //   1) Dấu xuống dòng: nếu sử dụng fgets cho những bài toán không
  //      quan tâm đến dấu xuống dòng thì cần phải lưu ý đến các dấu
  //      xuống dòng trong các xử lý, hoặc viết thêm mã nguồn để xóa
  //      dấu xuống dòng. Có nhiều cách biểu diễn ký hiệu xuống dòng
  //      trong các môi trường khác nhau. Điển hình là:
  //        Môi trường Unix sử dụng 1 ký tự (LF) \n;
  //        Môi trường Windows sử dụng hai ký tự (CR và LF) \r\n.
  //   2) gets - Bị xóa khỏi thư viện tiêu chuẩn của C từ phiên bản
  //      C11.

  return 0;
}