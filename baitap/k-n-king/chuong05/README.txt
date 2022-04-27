1. Viết chương trình tính số chữ số của một số nguyên.
Ví dụ:
Nhập 1 số: 357
Số 357 có 3 chữ số
Bạn có thể đặt giả thuyết rằng các số cần xử lý có không quá 4 chữ số.
Gợi ý: Sử dụng câu lệnh if để kiểm tra khoảng giá trị chứa số đó. Ví dụ, nếu số trong khoảng giữa 0 và 9 thì nó có 1 chữ số. v.v.

2. Viết chương trình hỏi người dùng nhập thời gian theo 24 giờ, sau đó hiển thị thời gian tương đương theo 12 giờ.
Ví dụ:
Nhập thời gian theo 24 giờ: 21:11
Thời gian tương đương theo 12 giờ là: 9:11 PM
Chú ý không hiển thị 12:00 là 0:00.

3. Điều chỉnh chương trình broker.c với 2 thay đổi như sau:
a) Hỏi người dùng nhập vào số lượng cổ phiếu và giá một cổ phiếu thay vì giá trị của giao dịch.
b) Thêm các câu lệnh tính phí thu bởi một dịch vụ môi giới khác (0.33 + 0.0003 triệu/cổ phiếu đối với giao dịch ít hơn 2000 cổ phiếu: 0.33 + 0.0002 triệu/cổ phiếu đối với giao dịch từ 2000 cổ phiếu trở lên). Hiển thị khoản phí phải trả nếu sử dụng dịch vụ môi giới ban đầu và khoản phí phải trả nếu sử dụng dịch vụ môi giới này.

4. Đây là phiên bản đơn giản của thang Beaufort, được sử dụng để đánh giá sức gió:
Tốc độ (kn)    Mô tả
1-3            Gió Rất nhẹ
4-17           Gió nhẹ
18-47          Gió mạnh
48-63          Bão
trên 63        Cuồng phong
Viết chương trình hỏi người dùng nhập tốc độ gió (đo bằng kn), sau đó hiển thị mô tả tương ứng.
Ghi chú: 1kn (knot) = 1.85km/h

5. Ở một nơi thuế thu nhập cá nhân được tính như sau:
Thu nhập         Thuế phải nộp
< 7.5 triệu        1% thu nhập
7.5-22.5 triệu     0.075 triệu + 2% khoản thu trên 7.5 triệu
22.5-37.5 triệu    0.375 triệu + 3% khoản thu trên 22.5 triệu
37.5-52.5 triệu    0.825 triệu + 4% khoản thu trên 37.5 triệu
52.5-70.0 triệu    1.425 triệu + 5% khoản thu trên 52.5 triệu
trên 70 triệu      2.3 triệu + 6% khoản thu trên 70.0 triệu
Viết chương trình hỏi người dùng nhập khoản thu chịu thuế, sau đó tính và hiển thị khoản thuế phải nộp.

6. Điều chỉnh chương trình upc.c có trong chương 4 sao cho nó kiểm tra tính hợp lệ của mã UPC. Sau khi người dùng nhập một mã UPC (đủ 12 chữ số), chương trình hiển thị Hợp lệ hoặc Không hợp lệ (sử dụng 11 chữ số đầu tiên để tính chữ số kiểm tra và so sánh với chữ số cuối cùng).

7. Viết chương trình tìm số lớn nhất và nhỏ nhất trong bốn số nguyên được nhập vào.
Ví dụ:
Nhập bốn số nguyên: 21 43 10 35
Số lớn nhất: 43
Số nhỏ nhất: 10
Yêu cầu sử dụng ít nhất câu lệnh if trong giới hạn có thể.
Gợi ý: Có thể giải quyết vấn đề với không quá bốn câu lệnh if.

8. Bảng sau hiển thị lịch bay hàng ngày từ một thành phố tới một thành phố khác:

Thời gian đi     Thời gian đến
 8:00 a.m.         10:16 a.m.
 9:43 a.m.         11:52 a.m.
11:17 a.m.          1:31 p.m.
12:47 p.m.          3:00 p.m.
 2:00 p.m.          4:08 p.m.
 3:45 p.m.          5:55 p.m.
 7:00 p.m.          9:20 p.m.
 9:45 p.m.         11:58 p.m.
Viết chương trình hỏi người dùng nhập vào thời gian (theo định dạng 24 giờ, bao gồm giờ và phút). Chương trình hiển thị thời gian đi và thời gian đến của chuyến bay có thời gian đi gần nhất so với thời gian người dùng đã nhập.

Ví dụ:
Nhập thời gian 24-giờ: 13:15
Thời gian đi gần nhất là: 12:47 p.m., đến lúc 3:00 p.m.

Gợi ý: Chuyển đổi dữ liệu nhập thành thời gian được biểu diễn bằng số phút từ lúc nửa đêm. Ví dụ, 13:15 thành 13 * 60 + 15 = 795 phút từ nửa đêm, giá trị này gần 12:47 p.m. (767 phút) hơn bất kỳ thời gian cất cánh nào khác.

9. Viết chương trình hỏi người dùng nhập vào hai ngày và đưa ra thông báo ngày nào xuất hiện trước trên lịch:

Nhập ngày thứ nhất (dd/mm/yy): 6/3/08
Nhập ngày thứ hai (dd/mm/yy): 17/5/07
Ngày 17/5/07 sớm hơn 6/3/08

10. Viết chương trình chuyển điểm dạng số sang dạng chữ:
Ví dụ:
Nhập điểm dạng số: 8.4
Điểm dạng chữ: B+

Sử dụng thang điểm sau:
0.0-3.9: F; 4.0-4.9: D; 5.0-5.4: D+; 5.5-6.4: C; 6.5-6.9: C+; 7.0-7.9: B; 8.0-8.4: B+; 8.5-9.4: A; 9.5-10: A+
In thông báo lỗi nếu điểm được nhập vào lớn hơn 10 hoặc nhỏ hơn 0.

11. Viết chương trình hỏi người dùng nhập vào một số có 2 chữ số, sau đó in ra cách đọc số đó:
Nhập một số có 2 chữ số: 36
Bạn đã nhập số Ba mươi sáu
Gợi ý: Tách số đã nhập thành 2 chữ số. Sử dụng một câu lệnh switch để đọc chữ số thứ nhất (hai mươi, ba mươi, v.v.). Sử dụng thêm một câu lệnh switch nữa để đọc chữ số thứ hai.
