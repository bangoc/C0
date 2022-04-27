1. Chương trình square2.c sẽ hoạt động sai nếu i * i lớn hơn giá trị cực đại của kiểu int. Chạy chương trình và xác định giá trị nhỏ nhất của n có thể gây ra lỗi. Sau đó thử thay đổi kiểu của i thành short và chạy lại chương trình (đừng quên cập nhật mô tả in trong gọi hàm printf), sau đó thử với long.Từ thí nghiệm này, bạn có thể kết luận điều gì về số lượng bits được sử dụng để lưu số nguyên trên máy tính của bạn?

2. Điều chỉnh chương trình square2.c sao cho nó tạm dừng và hiển thị thông báo:

Nhấn Enter để tiếp tục...

sau khi hiển thị 24 giá trị liên tiếp. Sau khi hiển thị thông báo, chương trình phải sử dụng getchar để đọc một ký tự. getchar không cho phép chương trình tiếp tục cho tới khi người dùng ấn phím Enter.

3. Điều chỉnh chương trình sum2.c để tính tổng một dãy giá trị có kiểu double.

4. Viết chương trình chuyển đổi số điện thoại từ định dạng chữ cái sang định dạng chữ số:
Ví dụ:
Nhập số điện thoại: CALLATT
2255288
Chuyển đổi từng ký tự theo bảng tham chiếu sau: 2 = ABC, 3 = DEF, 4 = GHI, 5 = JKL, 6 = MNO, 7 = PRS, 8 = TUV, 9 = WXY. Nếu số điện thoại ban đầu chứa các ký tự không phải là chữ cái trong bảng tham chiếu (ví dụ chữ số hoặc các dấu), thì giữ nguyên không thay đổi các ký tự đó:
Ví dụ:
Nhập số điện thoại: 1-800-COL-LECT
Kết quả chuyển đổi: 1-800-265-5328
Bạn có thể giả sử tất cả các chữ cái được nhập vào là in hoa.

5. Trong chò chơi xếp ô chữ, người chơi tạo chữ từ những miếng ghép, mỗi miếng ghép chứa một chữ cái hoặc một giá trị đại diện. Giá trị đại diện thay đổi theo từng chữ cái và phụ thuộc vào độ hiếm của chữ cái. Các giá trị đại diện được quy ước là: 1:AEILNORSTU, 2:DG, 3:BCMP, 4: FHVWY, 5: K, 8:JX, 10:QZ. Hãy viết chương trình tính giá trị của một từ xếp bằng cách cộng giá trị của các chữ cái của nó.

Ví dụ:
Nhập một từ: pitfall
Giá trị tính được: 12

Chương trình của bạn phải cho phép bất kỳ sự kết hợp hoa/thường nào trong từ.
Gợi ý: Sử dụng hàm toupper được khai báo trong tệp tiêu đề ctype.h để chuyển chữ cái thường thành hoa.

6. Viết chương trình in ra các giá trị của sizeof(int), sizeof(short), sizeof(long), sizeof(float), sizeof(double), và sizeof(long double).

7. Điều chỉnh chương trình bài 6 chương 3 sao cho người dùng có thể cộng, trừ, nhân hoặc chia hai tỉ số (bằng cách nhập +, -, *, hoặc chia giữa các tỉ số).

8. Điều chỉnh chương trình bài 8 chương 5 sao cho người dùng nhập thời gian 12 giờ. Đầu vào có dạng giờ:phút sau đó là A, P, AM hoặc PM (có thể là chữ thường hoặc chữ hoa). Cho phép các dấu cách (nhưng không bắt buộc) ở khoảng giữa phần số và các ký hiệu AM/PM. Một số ví dụ dữ liệu vào hợp lệ:
1:15P
1:15PM
1:15p
1:15pm
1:15 P
1:15 PM
1:15 p
1:15 pm
bạn có thể đặt giả thuyết rằng đầu vào thuộc một trong các dạng đã được liệt kê, không cần kiểm tra các lỗi.

9. Viết chương trình hỏi người dùng nhập thời gian 12 giờ, sau đó hiển thị ở dạng 24 giờ.
Ví dụ:
Nhập một thời gian 12 giờ: 9:11 PM
Thời gian tương đương ở dạng 24 giờ: 21:11

Định dạng đầu vào tương tự như trong bài 8.

10. Viết chương trình đếm số lượng nguyên âm (a, e, i, o và u) trong một câu tiếng anh:
Ví dụ:
Nhập một câu: And that's the way it is.
Câu của bạn chứa 6 nguyên âm.

11. Viết chương trình nhập tên (first name) và họ (last name) tiếng anh của một người nước ngoài, sau đó hiển thị họ, một dấu phẩy, chữ cái đầu của tên, và cuối cùng là một dấu chấm.
Ví dụ:
Nhập tên và họ: Lloyd Fosdick
Fosdick, L.

12. Viết chương trình tính giá trị biểu thức theo quy ước sau:
Ví dụ:
Nhập một biểu thức: 1+2.5*3
Giá trị biểu thức: 10.5
Các toán hạng trong biểu thức là các số thực; các toán tử bao gồm +,-,* và /. Biểu thức được thực hiện từ trái qua phải (không có thứ tự ưu tiên của toán tử).

13. Viết chương trình tính trung bình độ dài từ trong một câu:
Ví dụ:
Nhập một câu: It was deja vu all over again.
Trung bình độ dài từ: 3.4
Để cho đơn giản, bạn có thể coi các dấu câu được gắn với từ là một phần của từ đó, các từ được ngăn cách bởi dấu cách. Hiển thị giá trị trung bình độ dài với một chữ số sau dấu thập phân.

14. Viết chương trình sử dụng phương pháp Newton để tính căn bậc 2 của một số thực dương:
Ví dụ:
Nhập một số dương: 3
Căn bậc hai: 1.73205
Đặt x là số được nhập bởi người dùng. Phương pháp Newton yêu cầu dự đoán ban đầu y cho căn bậc 2 của x (chúng ta sẽ sử dụng y = 1). Các dự đoán tiếp theo được tính bằng trung bình của y và x/y. Bảng sau chứa thông tin chi tiết về cách tìm căn bậc 2 của 3:
                                 Trung bình của
x         y         x/y          y và x/y
3         1          3             2
3         2          1.5           1.75
3         1.75       1.71429       1.73214
3         1.73214    1.73196       1.73205
3         1.73205    1.73205       1.73205
Có thể nhận thấy y từng bước tiến tới giá trị đúng của căn bậc 2 của x. Để có độ chính xác cao hơn, bạn phải sử dụng kiểu double thay cho float trong chương trình. Tiến trình tính toán dừng khi trị tuyệt đối sai lệch giữa giá trị cũ và giá trị mới của y nhỏ hơn tích của 0.00001 và y.
Gợi ý: Bạn có thể sử dụng fabs được khai báo trong tệp tiêu đề math.h để tính giá trị tuyệt đối.

15. Viết chương trình tính giai thừa của một số nguyên dương:
Ví dụ:
Nhập một số nguyên dương: 6
Giai thừa của 6: 720
a) Sử dụng kiểu short để lưu giá trị giai thừa. Giá trị lớn nhất của n mà chương trình in đúng giá trị n! bằng bao nhiêu?
b) Làm lại phần a nhưng sử dụng kiểu int thay cho short.
c) - kiểu long.
d) - long long (nếu trình biên dịch của bạn có hỗ trợ kiểu long long)
e) - float
f) - double
g) - long double
Trong các trường hợp (e)-(g), chương trình sẽ hiển thị giá trị gần đúng của giai thừa, không nhất thiết phải hiển thị giá trị đúng.

