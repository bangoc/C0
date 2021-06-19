1. Viết chương trình hỏi người dùng nhập ngày theo định dạng dd/mm/yyyy, sau đó hiển thị theo định dạng yyyymmdd:
Ví dụ:
Nhập một ngày (dd/mm/yyyy): 19/6/2021
Bạn đã nhập ngày 20210619

2. Viết chương trình định dạng thông tin sản phẩm do người dùng nhập vào. Một phiên làm việc của chương trình nhìn như sau:
Nhập mã số sản phẩm: 583
Nhập giá bán sản phẩm (VNĐ): 135000
Nhập ngày mua hàng (dd/mm/yyyy): 15/5/2020

Mã số      Giá bán            Ngày mua
583            135000 VNĐ     15/5/2020

Mã số sản phẩm và ngày mua phải được căn lề trái; Giá phải được căn lề phải, số tiền được phép lên tới 10000000 VNĐ.

3. Sách được xác định bằng mã số quốc tế (ISBN - International Standard Book Number). Các mã ISBN được cấp sau 1/1/2007 bao gồm 13 chữ số được tổ chức thành 5 nhóm, ví dụ 978-604-0-00000-2. (Mã ISBN cũ hơn sử dụng 10 chữ số, không có nhóm GS1).
- Nhóm đầu tiên (tiền tố GS1) hiện có thể là 978 hoặc 979.
- Nhóm tiếp theo xác định nhóm ngôn ngữ hoặc quốc gia phát hành (ví dụ mã quốc gia của Việt Nam là 604).
- Nhóm mã nhà xuất bản xác định nhà xuất bản.
- Mã ấn phẩm được nhà xuất bản cấp cho từng đầu sách (ví dụ, 97950).
- Mã ISBN kết thúc bằng một chữ số kiểm tra, được sử dụng để kiểm tra tính chính xác của các nhóm đứng trước.
Viết chương trình tách các nhóm trong mã ISBN được nhập bởi người dùng.
Ví dụ:
Nhập ISBN: 978-0-393-97950-3
Tiền tố GS1: 978
Mã quốc gia/nhóm ngôn ngữ: 0
Mã nhà xuất bản: 393
Mã ấn phẩm: 97950
Chữ số kiểm tra: 3

Ghi chú: Số chữ số trong mỗi nhóm có thể dao động: Bạn không thể đặt giả thuyết rằng các nhóm có độ dài như trong ví dụ. Kiểm thử chương trình của bạn với các giá trị ISBN thực tế (thường được tìm thấy trên bìa sau và trên trang bản quyền).

4. Viết chương trình hỏi người dùng nhập vào một số điện thoại cố định theo định dạng xxxx.xxx.xxxx sau đó xuất ra theo định dạng (xxxx) xxx-xxxx.
Ví dụ:
Nhập số điện thoại [xxxx.xxx.xxxx]: 0243.869.0236
Bạn đã nhập (0243) 869-0236

5. Viết chương trình hỏi người dùng nhập vào các số từ 1 tới 16 (theo trật tự bất kỳ) và hiển thị các số như một ma trận 4 x 4, sau đó là tổng của các dòng, tổng của các cột và tổng của các đường chéo:
Ví dụ:
Nhập các số từ 1 tới 16 theo trật tự bất kỳ:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
16   3   2  13
 5  10  11   8
 9   6   7  12
 5  15  14   1
Tổng các dòng: 34 34 34 34
Tổng các cột: 34 34 34 34
Tổng các đường chéo: 34 34
Nếu các tổng theo dòng, theo cột, và đường chéo đều bằng nhau (như trong ví dụ này), thì ma trận tạo thành được gọi là hình vuông kỳ diệu. Hình vuông kỳ diệu trong ví dụ này được khắc năm 1514 bởi nghệ sỹ và đồng thời là nhà toán học Albrecht Dürer.

6. Điều chỉnh chương trình addfrac.c sao cho người dùng nhập cả hai tỉ số cùng lúc, các tỉ số được ngăn cách bằng dấu cộng:
Ví dụ:
Nhập hai tỉ số được ngăn cách bằng một dấu cộng: 5/6+3/4
Tổng là 38/24