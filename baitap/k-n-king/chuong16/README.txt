1. Viết chương trình hỏi người dùng nhập vào một mã điện thoại quốc gia và sau đó tìm kiếm trong mảng country_codes (xem country_codes.c). Nếu tìm thấy mã người dùng đã nhập vào, chương trình phải hiển thị tên quốc gia tương ứng: Nếu không, chương trình phải in thông báo lỗi.

2. Điều chỉnh chương trình inventory.c sao cho thao tác p (print - in) hiển thị các linh kiện được xắp xếp theo mã linh kiện.

3. Điều chỉnh chương trình inventory.c bằng cách thay đổi inventory và num_parts thành các biến địa phương của hàm main.

4. Điều chỉnh chương trình inventory.c bằng cách bổ xung thành phần price (giá tính bằng VNĐ) vào cấu trúc part. Hàm insert cần hỏi người dùng giá của sản phẩm mới. Các hàm search và print phải hiển thị giá. Thêm một lệnh mới để người dùng có thể thay đổi giá của một linh kiện.

5. Điều chỉnh chương trình bài 8 chương 5 sao cho thời gian được lưu trong một mảng. Các phần tử của mảng là các cấu trúc lưu thời gian khởi hành và thời gian đến. (Thời gian là số nguyên, biểu diễn số phút tính từ lúc nửa đêm). Chương trình sử dụng vòng lặp để tìm kiếm trong mảng thời gian đi gần nhất so với thời gian người dùng đã nhập vào.

6. Điều chỉnh chương trình bài 9 chương 5 sao cho mỗi ngày được người dùng nhập vào được lưu trong một cấu trúc date. Cài đặt hàm
int compare_dates(struct date *d1, struct date *d2);
Gọi day1 và day2 là các ngày được trỏ tới bởi các con trỏ d1 và d2. Hàm compare_dates:
  - Trả về -1 nếu day1 < day2
  - Trả về 0 nếu day1 == day2
  - Trả về 1 nếu day1 > day2
và đưa vào chương trình của bạn.
