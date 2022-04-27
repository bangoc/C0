1. Điều chỉnh chương trình repdigit.c sao cho nó hiển thị tất cả các chữ số lặp lại:
Ví dụ:
Nhập một số: 939577
(Các) chữ số lặp lại: 7 9

2. Điều chỉnh chương trình repdigit.c sao cho nó in ra bảng thông báo mỗi chữ số xuất hiện bao nhiêu lần:
Ví dụ:
Nhập một số: 41271092
Chữ số:           0    1   2   3   4   5   6   7   8   9
Số lần xuất hiện: 1    2   2   0   1   0   0   1   0   1

3. Điều chỉnh chương trình repdigit.c sao cho người dùng có thể thực hiện kiểm tra nhiều lần. Chương trình dừng lại khi người dùng nhập một số nhỏ hơn hoặc bằng 0.

4. Điều chỉnh chương trình reverse.c sử dụng biểu thức (int)sizeof(a)/sizeof(0) để lấy độ dài mảng.

5. Điều chỉnh chương trình interest.c sao cho nó tính lãi gộp hàng tháng thay vì hàng năm. Giữ nguyên không thay đổi định dạng xuất: Số dư vẫn được hiển thị sau mỗi năm.

6. Một số bạn trẻ thường có cách viết thông điệp riêng trong không gian mạng. Ví dụ một người dùng có tên B1FF viết một câu như sau: H3Y DUD3, C 15 R1lly COOL!!!!!!!!!!!
Hãy viết một bộ lọc, gọi là "Bộ lọc B1FF" để đọc thông điệp được nhập bởi người dùng và chuyển nó thành dạng tương tự như thông điệp của B1FF:
Ví dụ:
Nhập một thông điệp: Hey dude, C is rilly cool
Sau khi áp dụng bộ lọc B1FF: H3Y DUD3, C 15 R1lly COOL!!!!!!!!!!!

Chương trình của bạn cần chuyển các chữ cái trong thông điệp thành dạng in hoa, thay đổi một số chữ cái thành chữ số (A -> 4, B -> 8, E -> 3, I -> 1, O -> 0, S -> 5), và sau đó thêm vào tầm 10 dấu chấm than.
Gợi ý: Lưu thông điệp vào một mảng ký tự, sau đó duyệt mảng từ đầu, chuyển đổi và in ra từng ký tự.

7. Viết chương trình đọc một ma trận số nguyên 5 x 5, sau đó in ra các tổng theo hàng và các tổng theo cột:
Ví dụ:
Nhập hàng 1:  8   3   9   0   10
Nhập hàng 2:  3   5  17   1    1
Nhập hàng 3:  2   8   6  23    1
Nhập hàng 4:  15  7   3   2    9
Nhập hàng 5:  6   14  2   6    0

Các tổng theo hàng: 30 27 40 36 28
Các tổng theo cột: 34 37 37 32 21

8. Điều chỉnh chương trình bài 7 sao cho nó hỏi nhập điểm 5 bài kiểm tra của 5 sinh viên, sau đó tính tổng điểm và điểm trung bình cho mỗi sinh viên, và điểm trung bình, điểm cao nhất, và điểm thấp nhất cho mỗi bài kiểm tra.

9. Viết chương trình sinh một dấu vết "di chuyển ngẫu nhiên" trên ma trận 10x10. Ban đầu ma trận chỉ chứa ký tự '.'. Bắt đầu từ vị trí (0, 0). Chương trình phải di chuyển từ một ô hiện tại sang ô liền kề theo một trong các hướng: lên, xuống, trái, phải. Các ô được ghé thăm được gán các chữ cái từ A tới Z, theo thứ tự ghé thăm. Đây là một ví dụ đầu ra:
A   .   .   .   .   .   .   .   .   .
B   C   D   .   .   .   .   .   .   .
.   F   E   .   .   .   .   .   .   .
H   G   .   .   .   .   .   .   .   .
I   .   .   .   .   .   .   .   .   .
J   .   .   .   .   .   .   .   Z   .
K   .   .   R   S   T   U   V   Y   .
L   M   P   Q   .   .   .   W   X   .
.   N   O   .   .   .   .   .   .   .
.   .   .   .   .   .   .   .   .   .
Gợi ý: Sử dụng hàm srand và rand (xem deal.c) để sinh các số ngẫu nhiên. Sau khi sinh một số, kiểm tra phần dư khi chia cho 4. Phần dư chỉ có thể nhận 1 trong 4 giá trị - 0, 1, 2 và 3 - tương ứng với các hướng di chuyển. Trước khi thực hiện một bước di chuyển, kiểm tra a) nó không đi ra ngoài ma trận, và b) nó không đi tới một ô đã được gán chữ cái. Nếu vi phạm a hoặc b, thử di chuyển theo một hướng khác. Nếu cả 4 hướng đều bị chặn, chương trình phải dừng lại. Đây là một ví dụ dừng sớm:
A   B   G   H   I   .   .   .   .   .
.   C   F   .   J   K   .   .   .   .
.   D   E   .   M   L   .   .   .   .
.   .   .   .   N   O   .   .   .   .
.   .   W   X   Y   P   Q   .   .   .
.   .   V   U   T   S   R   .   .   .
.   .   .   .   .   .   .   .   .   .
.   .   .   .   .   .   .   .   .   .
.   .   .   .   .   .   .   .   .   .
.   .   .   .   .   .   .   .   .   .
Y bị chặn ở cả 4 hướng, vì vậy không có chỗ đặt Z.

10. Điều chỉnh bài 8 chương 5 sao cho thời gian đi được lưu trong một mảng và thời gian đến được lưu trong một mảng khác. (Thời gian được biểu diễn như số nguyên là số phút tính từ lúc nửa đêm). Chương trình sử dụng vòng lặp để tìm trong mảng thời gian đi gần nhất với thời gian do người dùng nhập vào.

11. Điều chỉnh bài 4 chương 7 sao cho chương trình hiển thị thêm câu giới thiệu cho đầu ra:
Ví dụ:
Nhập số điện thoại: 1-800-COL-LECT
Định dạng kiểu số: 1-800-265-5328
Chương chình cần lưu số điện thoại (theo khuôn dạng ban đầu của nó hoặc theo dạng số) cho tới khi in ra. Bạn có thể đặt giả thuyết số điện thoại không dài hơn 15 chữ số.

12. Điều chỉnh chương trình bài 5 chương 7 sao cho các giá trị xếp của các chữ cái được lưu trong mảng. Mỗi khi đọc được một chữ cái, chương trình sẽ sử dụng mảng để xác định giá trị của chữ cái đó.

13. Điều chỉnh chương trình bài 11 chương 7 sao cho chương trình hiển thị câu giới thiệu cho đầu ra của nó:
Ví dụ:
Nhập tên và họ: Lloyd Fosdick
Bạn đã nhập tên: Fosdick, L.
Chương trình sẽ cần lưu họ (không cần lưu tên) trong một mảng ký tự cho tới khi in ra. Bạn có thể đặt giả thuyết họ không dài hơn 20 ký tự.

14. Viết chương trình đảo ngược các chữ trong một câu:
Ví dụ:
Nhập một câu: you can cage a swallow can't you?
Câu đảo ngược: you can't swallow a cage can you?
Gợi ý: Sử dụng một vòng lặp để đọc từng ký tự và lưu vào trong một mảng một chiều kiểu char. Vòng lặp dừng khi gặp dấu chấm, dấu hỏi chấm, hoặc dấu chấm than (các dấu kết thúc câu), ký tự này được lưu trong một biến riêng kiểu char. Sau đó sử dụng một vòng lặp khác để tìm kiếm mảng theo chiều ngược lại bắt đầu với từ cuối cùng. In từ cuối cùng, sau đó tiếp tục tìm từ tiếp theo. Lặp cho tới khi xử lý hết mảng. Cuối cùng in ký tự kết thúc câu.

15. Một trong những kỹ thuật mã hóa cổ xưa nhất được biết đến là mã Caesar, được đặt tên theo tên Julius Caesar. Nó được thực hiện bằng cách thay thế mỗi chữ cái trong một thông điệp bằng một chữ cái khác cách một số cố định các vị trí trong bảng chữ cái. (Nếu chữ cái thay thế vượt qua Z, thì quay vòng lại từ đầu bảng. Ví dụ, nếu mỗi chữ cái được thay bởi chữ cái đứng sau nó 2 vị trí, thì Y được thay bởi A, và Z được thay bởi B.) Viết chương trình mã hóa thông điệp sử dụng mã Caesar. Người dùng nhập vào thông điệp cần được mã hóa và khoảng dịch chuyển (số vị trí mà chữ cái được dịch chuyển):
Ví dụ:
Nhập thông điệp cần được mã hóa: Go ahead, make my day.
Nhập khoảng dịch chuyển (1-25): 3
Thông điệp sau khi mã hóa: Jr dkhdg, pdnh pb gdb.

Nhận xét: chương trình có thể giải mã một thông điệp nếu người dùng nhập khoảng cách bằng 26 trừ khoảng cách ban đầu.
Ví dụ:
Nhập một thông điệp cần được mã hóa: Jr dkhdg, pdnh pb gdb.
Nhập khoảng dịch chuyển (1-25): 23
Thông điệp sau khi mã hóa: Go ahead, make my day.

Bạn có thể đặt giả thuyết độ dài thông điệp không vượt quá 80. Các ký tự khác các chữ cái cần được giữ không thay đổi. Các chữ cái viết thường sau khi mã hóa vẫn là chữ cái thường, chữ cái viết hoa vẫn là viết hoa.
Gợi ý: có thể sử dụng biểu thức ((ch - 'A') + n) % 26 + 'A' để giải quyết vấn đề xoay vòng khi dịch chuyển và tìm chữ cái thay thế cho chữ cái in hoa. Trong đó ch là chữ cái, n là số vị trí cần dịch chuyển. (Bạn có thể sử dụng biểu thức tương tự cho chữ cái thường.)

16. Viết chương trình kiểm tra xem hai từ có phải là các hoán vị của cùng một nhóm các chữ cái hay không:
Ví dụ:
Nhập từ thứ nhất: smartest
Nhập từ thứ hai: mattress
Các từ là các hoán vị.

Nhập từ thứ nhất: dumbest
Nhập từ thứ hai: stumble
Các từ không phải là các hoán vị.

Gợi ý: Viết một vòng lặp đọc từ thứ nhất, sử dụng một mảng để đếm số lần xuất hiện các ký tự. Sử dụng một vòng lặp khác để đọc từ thứ 2, nhưng lần này giảm giá trị các phần tử trong mảng.

17. Viết chương trình in ma trận kỳ ảo kích thước n x n (ma trận vuông được tạo thành từ các giá trị 1, 2, ...n^2 sao cho các tổng theo dòng, theo cột, đường chéo đều bằng nhau). Người dùng sẽ cung cấp giá trị n.
Ví dụ:
Chương trình này tạo một ma trận kỳ ảo với kích thước được cho. Kích thước phải là một số lẻ trong khoảng giữa 1 và 99.
Nhập kích thước của ma trận kỳ ảo: 5
17    24    1   8   15
23    5     7   14  16
4     6     13  20  22
10    12    19  21  3
11    18    25   2  9

Gợi ý: Lưu ma trận kỳ ảo trong một mảng hai chiều. Bắt đầu với giá trị 1 ở giữa dòng đầu tiên. Đặt các số còn lại bằng cách đi lên 1 dòng (giảm chỉ số dòng) và qua phải 1 cột (tăng chỉ số cột), xoay vòng nếu vượt ra ngoài phạm vi mảng, ví dụ, thay vì lưu vào dòng -1 chúng ta cần lưu vào dòng n - 1, thay vì lưu vào cột n, chúng ta cần lưu vào cột 0. Nếu ô đích của mảng đã bị chiếm thì đặt số trực tiếp bên dưới ô đã lưu số trước.
Nếu trình biên dịch có hỗ trợ mảng độ dài linh động, bạn có thể khai báo mảng kích thước n x n. Nếu không, bạn có thể khai báo mảng với kích thước cực đại là 99 x 99.