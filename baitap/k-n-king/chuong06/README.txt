1. Viết chương trình tìm số lớn nhất trong một dãy số được người dùng nhập vào. Chương trình hỏi người dùng nhập từng số một. Khi người dùng nhập 0 hoặc một số âm, chương trình phải hiển thị số không âm lớn nhất đã được nhập.

Ví dụ:
Nhập một số: 60
Nhập một số: 38.3
Nhập một số: 4.89
Nhập một số: 100.62
Nhập một số: 75.2295
Nhập một số: 0

Số dương lớn nhất đã nhập vào là 100.62
Lưu ý: Các số không bắt buộc phải là những số nguyên.

2. Viết chương trình hỏi người dùng nhập hai số nguyên, sau đó tính và hiển thị ước số chung lớn nhất của chúng (ƯSCLN).
Ví dụ:
Nhập hai số nguyên: 12 18
ƯSCLN là: 6
Gợi ý: Giải thuật cổ điển để tính ƯSCLN được biết là giải thuật Euclid, hoạt động như sau: Đặt m và n là các biến chứa hai số. Nếu n bằng 0 thì dừng: m là ƯSCLN. Nếu ngược lại thì tính phần dư khi chia m cho n, sau đó gán m bằng n và gán n bằng phần dư. Tiếp tục lặp lại các thao tác, bắt đầu với kiểm tra n bằng 0.

3. Viết chương trình hỏi người dùng nhập một tỉ số, sau đó giản lược tử số và mẫu số đến các giá trị nhỏ nhất:
Ví dụ:
Nhập một tỉ số: 6/12
Kết quả giản lược: 1/2
Gợi ý: Để giản lược tỉ số, đầu tiên tính ƯSCLN của tử số và mẫu số. Sau đó chia tử số và mẫu số cho ƯSCLN.

4. Thêm một vòng lặp cho chương trình broker.c trong chương 5 sao cho người dùng có thể nhập nhiều hơn một giao dịch và chương trình sẽ tính phí cho mỗi giao dịch. Chương trình cần kết thúc khi người dùng nhập 0 cho giá trị giao dịch:

Nhập giá trị giao dịch (triệu): 300
Phí giao dịch (triệu): 1.66

Nhập giá trị giao dịch (triệu): 150
Phí giao dịch (triệu): 1.27

Nhập giá trị giao dịch (triệu): 500
Phí giao dịch (triệu): 2.10

Nhập giá trị giao dịch (triệu): 0

5. Bài 1 chương 4 yêu cầu bạn viết chương trình hiển thị số có 2 chữ số theo thứ tự đảo ngược. Hãy khái quát chương trình đó sao cho người dùng có thể nhập vào số có độ dài tùy ý: một, hai, ba hoặc nhiều hơn.
Gợi ý: Lặp chia số cho 10 và dừng khi chạm 0.

6. Viết chương trình hỏi người dùng nhập một số n, sau đó in các giá trị bình phương chẵn giữa 1 và n. Ví dụ, nếu người dùng nhập 100 thì chương trình phải in ra:
4
16
36
64
100

7. Bố cục lại chương trình square3.c sao cho vòng lặp for khởi tạo i, kiểm tra i, và tăng i. Không viết lại chương trình và không sử dụng phép nhân nào.

8. Viết chương trình in lịch cho một tháng. Người dùng nhập số ngày trong tháng và ngày trong tuần của ngày bắt đầu tháng.
Ví dụ:
Nhập số ngày trong tháng: 31
Nhập ngày bắt đầu tháng (1 = Chủ Nhật, 7 = thứ 7): 3
         1   2   3   4   5
 6   7   8   9  10  11  12
13  14  15  16  17  18  19
20  21  22  23  24  25  26
27  28  29  30  31
Gợi ý: Sử dụng một vòng lặp để duyệt các giá trị từ 1 tới n, trong đó n là số ngày trong tháng, in ra các giá trị của i. Trong vòng lặp kiểm tra xem i có phải ngày cuối cùng trong tuần hay không; nếu có thì in một ký tự xuống dòng.

9. Bài 8 trong chương 2 yêu cầu bạn viết chương trình tính dư nợ còn lại sau khi thanh toán hàng tháng lần một, lần hai, và lần ba. Điều chỉnh chương trình sao cho nó hỏi người dùng nhập số khoản thanh toán và hiển thị dư nợ còn lại sau mỗi lần thanh toán.

10. Bài 9 chương 5 yêu cầu bạn xác định ngày sớm hơn trong hai ngày được nhập vào. Hãy khái quát hóa chương trình sao cho người dùng có thể nhập vào số ngày bất kỳ. Người dùng nhập 0/0/0 để dừng.

Ví dụ:
Nhập một ngày (dd/mm/yy): 6/3/08
Nhập một ngày (dd/mm/yy): 17/5/07
Nhập một ngày (dd/mm/yy): 6/3/07
Nhập một ngày (dd/mm/yy): 0/0/0
Ngày 6/3/07 là ngày sớm nhất.

11. Giá trị của hằng số toán học e có thể được biểu diễn như một dãy vô hạn:
e = 1 + 1/1! + 1/2! + 1/3! + ....
Hãy viết chương trình ước lượng e bằng cách tính biểu thức
1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
trong đó n là số nguyên được người dùng nhập vào.

12. Điều chỉnh chương trình trong bài 11 sao cho nó tiếp tục cộng thêm các thành phần mới cho tới khi thành phần hiện tại nhỏ hơn eps (ε), trong đó eps là một số (thực) rất nhỏ được nhập bởi người dùng.