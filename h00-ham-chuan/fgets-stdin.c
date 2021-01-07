/*
  @bangoc: 2021
  Tệp tiêu đề: stdio.h
  Nguyên mẫu:
    char *fgets (char *__restrict __s, int __n,
                    FILE *__restrict __stream);

  [Nếu cần một hàm đơn giản để nhập nguyên một dòng thì]
  Xem thêm: gets-puts.c

  Kiến thức cơ bản về ký tự:
  \n là ký tự xuống dòng, tên bằng chữ là LF, mã ASCII là 10
  \r là ký tự lùi về đầu dòng, tên bằng chữ là CR, mã ASCII là 13
  Mô phỏng các thao tác của máy đánh chữ ngày xưa khi chuyển sang
  dòng mới.
*/

#include <stdio.h>
#define N 100
int main() {
  char s[N];

  // Đọc một dòng cho tới hết ký tự xuống dòng
  // và đưa cả ký tự xuống dòng vào s.
  fgets(s, N, stdin);
  // Giải thích:
  //   Nếu thao tác nhập của bạn là a b c⏎
  //   thì chuỗi s là:
  //         "a b c\n\0" (có bao gồm ký tự xuống dòng)
  // So sánh với gets:
  //   Nếu sử dụng gets(s); và thực hiện cùng thao tác nhập
  //   Thì chuỗi s là:
  //         "a b c\0" (không bao gồm ký tự xuống dòng)
  //
  // Nếu stdin được điều hướng từ một tệp văn bản với định dạng xuống
  // dòng theo phong cách Windows gồm 2 ký tự CR và LF thì kết quả
  // nhập có thể là
  //   fgets(s, N, stdin);  // => s = "a b c\r\n\0"
  //   gets(s);  // => s = "a b c\r\0"
  // => Chỉ khác biệt ở ký tự xuống dòng '\n'
  //
  // Các tham số:
  //   stdin - là luồng nhập tiêu chuẩn, thường được mặc định là
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
  //      dấu xuống dòng. Có nhiều cách biểu diễn dấu hiệu kết thúc
  //      dòng trong các môi trường khác nhau. Điển hình là:
  //        Môi trường Unix sử dụng 1 ký tự (LF) \n;
  //        Môi trường Windows sử dụng hai ký tự (CR và LF) \r\n.
  //   2) gets - Bị xóa khỏi thư viện tiêu chuẩn của C từ phiên bản
  //      C11.

  return 0;
}