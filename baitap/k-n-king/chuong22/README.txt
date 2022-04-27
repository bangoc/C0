1. Mở rộng chương trình canopen.c sao cho người dùng có thể đưa các tên tệp với số lượng bất kỳ vào dòng lệnh:
canopen foo bar baz
Chương trình cần in thông báo Có thể mở hoặc Không thể mở riêng cho mỗi tệp. Chương trình kết thúc với trạng thái EXIT_FAILURE nếu không thể mở một hoặc nhiều tệp.

2. Viết chương trình chuyển đổi tất cả các chữ cái trong một tệp thành chữ hoa. (Các ký tự không phải là chữ cái được giữ nguyên không thay đổi.) Chương trình nhận tên tệp qua tham số dòng lệnh và đưa kết quả ra stdout.

3. Viết chương trình với tên là fcat để nối các tệp với số lượng bất kỳ - đưa kết quả vào stdout. Nội dung các tệp được đưa ra liên tiếp  không có khoảng trống giữa các tệp.
Ví dụ, lệnh sau sẽ đưa các tệp f1.c, f2.c và f3.c lên màn hình:
fcat f1.c f2.c f3.c
fcat cần đưa ra thông báo lỗi nếu không thể mở được bất kỳ tệp nào.
Gợi ý: Vì không cần mở nhiều hơn một tệp ở một thời điểm, fcat có thể sử dụng chỉ một con trỏ tệp. Sau khi xử lý xong một tệp fcat đóng tệp đó lại rồi sử dụng con trỏ tệp để mở tệp tiếp theo.

4. a) Viết chương trình đếm số lượng chữ cái trong một tệp văn bản.
b) Viết chương trình đếm số lượng từ trong một tệp văn bản. (Trong bài này một "từ" được coi đơn giản là bất kỳ chuỗi ký tự liên tiếp nào không chứa khoảng trắng.)
c) Viết chương trình đếm số dòng trong một tệp văn bản.
Các chương trình đều nhận tên tệp qua tham số dòng lệnh.

5. Chương trình xor.c có trong chương 20 từ chối mã hóa các byte là các ký tự điều khiển khi ở dạng nguyên bản hoặc sau mã hóa. Hãy gỡ bỏ ràng buộc này - điều chỉnh chương trình sao cho các tên tệp đầu vào và đầu ra là các tham số dòng lệnh, mở cả hai tệp ở chế độ nhị phân, và loại bỏ kiểm tra ký tự in đối với các ký tự ban đầu và các ký tự thu được sau khi mã hóa.

6. Viết chương trình hiển thị nội dung của một tệp đồng thời như các bytes và như các ký tự. Người dùng có thể truyền tên tệp qua tham số dòng lệnh. Đầu ra của chương trình khi hiển thị nội dung của tệp pun.c có trong chương 2 có thể như sau:
Ví dụ:
Xê dịch                Bytes                 Ký tự
------  -----------------------------  ----------
     0  23 69 6E 63 6C 75 64 65 20 3C  #include <
    10  73 74 64 69 6F 2E 68 3E 0D 0A  stdio.h>..
    20  0D 0A 69 6E 74 20 6D 61 69 6E  ..int main
    30  28 76 6F 69 64 29 0D 0A 7B 0D  (void)..{.
    40  0A 20 20 70 72 69 6E 74 66 28  .  printf(
    50  22 4C E1 BA AD 70 20 74 72 C3  "L...p tr.
    60  AC 6E 68 20 43 2C 20 68 61 79  .nh C, hay
    70  20 6B 68 C3 B4 6E 67 20 6C E1   kh..ng l.
    80  BA AD 70 20 74 72 C3 AC 6E 68  ..p tr..nh
    90  20 43 3A 20 C4 90 C3 B3 20 6C   C: .... l
   100  C3 A0 20 63 C3 A2 75 20 68 E1  .. c..u h.
   110  BB 8F 69 2E 5C 6E 22 29 3B 0D  ..i.\n");.
   120  0A 20 20 72 65 74 75 72 6E 20  .  return
   130  30 3B 0D 0A 7D 0D 0A           0;..}..

Mỗi dòng hiển thị 10 bytes từ tệp, đồng thời như số trong hệ 16 và như ký tự. Các số trong cột Xê dịch biểu diễn vị trí bên trong tệp tính từ byte đầu tiên. Chỉ các ký tự in (được nhận diện bằng hàm isprint) được hiển thị; các ký tự khác được biểu diễn bằng dấu chấm. Lưu ý rằng tệp văn bản có thể được hiển thị khác nhau tùy theo tập ký tự và hệ điều hành. Trong ví dụ trên, pun.c được lưu như một tệp văn bản của Windows, vì vậy 0D và 0A (tương ứng với các ký tự lùi về đầu dòng và xuống dòng trong bảng mã ASCII) xuất hiện ở cuối mỗi dòng.
Gợi ý: Mở tệp ở chế độ "rb".

7. Trong số các kỹ thuật nén tệp, một kỹ thuật đơn giản nhất và nhanh nhất được biết đến là mã hóa số-lặp (run-length). Kỹ thuật này nén một tệp bằng cách thay thế một dãy các bytes giống nhau bằng một cặp bytes: Byte đầu tiên là số lần lặp và sau đó là byte được lặp.
Ví dụ, giả sử tệp được nén bắt đầu với dãy byte sau (hệ 16):
46 6F 6F 20 62 61 72 21 21 21 20 20 20 20 20
Tệp sau khi nén sẽ chứa các byte sau:
01 46 02 6F 01 20 01 62 01 61 01 72 03 21 05 20
Mã hóa số-lặp hoạt động tốt nếu tệp gốc chứa nhiều chuỗi bytes giống nhau dài. Trong trường hợp tệ nhất (tệp không có byte nào lặp lại). Mã số-lặp có thể nhân đôi độ dài tệp.
a) Viết chương trình với tên là compress_file sử dụng mã số-lặp để nén tệp. Để chạy compress_file, chúng ta sử dụng lệnh theo dạng:
compress_file tệp-gốc
chương trình sẽ lưu kết quả nén tệp-gốc vào tệp với tên tệp-gốc.rle.
Ví dụ, lệnh:
compress_file foo.txt
sẽ lưu kết quả nén tệp foo.txt vào tệp với tên là foo.txt.rle.
Gợi ý: Chương trình trong bài 6 có thể hữu ích cho việc gỡ lỗi.
b) Viết chương trình với tên là uncompress_file giải nén tệp được nén bởi compress_file. Lệnh uncompress_file sẽ có dạng
uncompress_file tệp-đã-nén
tệp-đã-nén phải có phần mở rộng .rle. Ví dụ, lệnh
uncompress_file foo.txt.rle sẽ giải nén tệp foo.txt.rle và lưu kết quả vào tệp foo.txt.
Chương trình uncompress_file cần hiển thị thông báo lỗi nếu tên tệp được truyền vào không có phần mở rộng .rle.

8. Điều chỉnh chương trình inventory.c trong chương 16 thêm vào hai thao tác mới:
+) Lưu CSDL vào một tệp nhất định
+) Đọc CSDL từ một tệp nhất định.
Sử dụng mã d (dump = xuất) và r (restore = khôi phục), lần lượt cho các thao tác này. Tương tác với người dùng cần được thực hiện tương tự như trong ví dụ sau:
Ví dụ:
Nhập một mã lệnh: d
Nhập tên tệp đầu ra: inventory.dat

Nhập một mã lệnh: r
Nhập tên tệp đầu vào: inventory.dat
Gợi ý: Sủ dụng fwrite để viết mảng chứa thông tin về các linh kiện ra tệp nhị phân. Sử dụng fread để đọc dữ liệu từ tệp vào mảng.

9. Viết chương trình hợp nhất hai tệp chứa các bản ghi được tạo bởi chương trình inventory.c (xem chương trình bài 8). Giả sử các bản ghi trong mỗi tệp đã được sắp xếp theo mã linh kiện, và chúng ta muốn dữ liệu trong tệp kết quả cũng được sắp xếp theo mã linh kiện. Nếu hai linh kiện có cùng mã số, hợp nhất số lượng tồn kho trong các bản ghi. (Để kiểm tra tính nhất quán dữ liệu, chương trình so sánh tên linh kiện trong các bản ghi và in thông báo lỗi nếu không khớp). Các tên tệp đầu vào và tệp đầu ra được truyền qua các tham số dòng lệnh cho chương trình.

10. Điều chỉnh chương trình inventory2.c có trong chương 17 thêm các thao tác d (xuất) và r (khôi phục) như trong chương trình bài 8. Bởi vì các bản ghi linh kiện không được lưu trong mảng, thao tác d không thể lưu tất cả dữ liệu bằng một lệnh fwrite. Thay vào đó, nó phải duyệt từng nút trong danh sách móc nối đơn, viết mã linh kiện, tên linh kiện, và số lượng tồn kho vào tệp. (Không lưu con trỏ next; nó sẽ không còn hợp lệ sau khi kết thúc chương trình.) Khi nó đọc các linh kiện từ tệp, thao tác r sẽ tạo lại danh sách liên kết từ các bản ghi đọc được.

11. Viết chương trình đọc một ngày từ tham số dòng lệnh và hiển thị nó theo dạng:
Ngày 10, tháng 11, 2020
Cho phép người dùng nhập ngày theo định dạng 10-11-2020 hoặc 10/11/2020; Có thể đặt giả thuyết không có dấu cách trong biểu diễn ngày. In thông báo lỗi nếu ngày không đúng theo các định dạng đã nêu.
Gợi ý: Sử dụng sscanf để tách ngày, tháng, và năm từ tham số dòng lệnh.

12. Điều chỉnh chương trình bài 2 chương 3 sao cho chương trình đọc một loạt các sản phẩm từ tệp và hiển thị dữ liệu dạng bảng. Mỗi dòng của tệp có định dạng:
Mã sản phẩm, giá, ngày/tháng/năm
Ví dụ, giả sử tệp có chứa các dòng sau:
583, 135000, 24/10/2005
3912, 599000, 27/7/2008
Đầu ra của chương trình tương tự như sau:
Mã sản phẩm      Đơn giá            Ngày mua
583               135000            24/10/2005
3912              599000            27/7/2008
Chương trình nhận tên tệp qua tham số dòng lệnh.

13. Điều chỉnh chương trình bài 8 chương 5 đọc thời gian đi và thời gian đến từ tệp flights.dat. Mỗi dòng trong tệp chứa thời gian đi và thời gian đến của một chuyến bay được ngăn cách bởi một hoặc nhiều khoảng trắng. Thời gian được cho ở định dạng 24-giờ.
Ví dụ, tệp flights.dat có thể có nội dung như sau nếu nó chứa thông tin cho chương trình ban đầu:
8:00 10:16
9:43 11:52
11:19 13:31
12:47 15:00
14:00 16:08
15:45 17:55
19:00 21:20
21:45 23:58

14. Điều chỉnh chương trình bài 15 chương 8 sao cho nó hỏi ngời dùng nhập vào tên tệp cần được mã hóa:
Ví dụ:
Nhập tên tệp chứa thông tin cần được mã hóa: message.txt
Nhập khoảng di chuyển (1-25): 3
Chương trình viết thông điệp được mã hóa vào tệp cùng tên nhưng bổ xung thêm phần mở rộng .enc. Trong ví dụ này, tên tệp ban đầu là mesage.txt, vì vậy thông điệp sau mã hóa sẽ được lưu trong tệp với tên mesage.txt.enc. Không có giới hạn kích thước của tệp cần được mã hóa hoặc độ dài dòng trong tệp.

15. Điều chỉnh chương trình justify có trong chương 15 sao cho nó đọc từ một tệp văn bản và viết vào tệp khác. Chương trình nhận các tên tệp từ dòng lệnh.

16. Điều chỉnh chương trình fcopy.c sao cho nó sử dụng fread và fwrite để sao chép tệp theo các khối 512 bytes. (Tất nhiên khối cuối cùng có thể có ít hơn 512 bytes.)

17. Viết chương trình đọc một loạt số điện thoại từ tệp và hiển thị theo một định dạng tiêu chuẩn. Mỗi dòng của tệp sẽ chứa một số điện thoại, nhưng có thể ở các định dạng khác nhau. Bạn có thể đặt giả thuyết mỗi dòng có 10 chữ số, có thể trộn lẫn với các ký tự khác (cần được bỏ qua).
Ví dụ, giả sử tệp chứa các dòng sau:
404.817.6900
(215) 686-1776
312-746-6000
877 275 5273
6173434200
Đầu ra của chương trình cần tương tự như sau:
(404) 817-6900
(215) 686-1776
(312) 746-6000
(877) 275-5273
(617) 343-4200
Chương trình nhận tên tệp qua tham số dòng lệnh.

18. Viết chương trình đọc các số nguyên từ một tệp văn bản với tên được truyền qua tham số dòng lệnh. Mỗi dòng của tệp có thể chứa các số nguyên với số lượng bất kỳ (kể cả không chứa số nào) được ngăn cách bởi một hoặc nhiều dấu cách. Chương trình phải hiển thị số lớn nhất trong tệp, số nhỏ nhất, và số giữa (median, số gần điểm giữa của dãy sau khi sắp xếp nhất). Nếu số lượng số nguyên trong tệp là số chẵn, thì sẽ có hai số ở giữa, trong trường hợp này chương trình phải hiển thị giá trị trung bình của các số (làm tròn xuống). Bạn có thể giả sử rằng tệp chứa không nhiều hơn 10000 số nguyên.
Gợi ý: Lưu các số nguyên trong mảng một chiều rồi sau đó sắp xếp mảng.

19. Trong môi trường Windows dấu hiệu xuống dòng được biểu diễn bởi cặp hai ký tự \r\n, còn trong môi trường UNIX dấu hiệu xuống dòng được biểu diễn bởi một ký tự \n.
a) Viết chương trình chuyển đổi các dấu hiệu xuống dòng của một tệp văn bản sử dụng định dạng của Windows sang định dạng của môi trường UNIX.
b) Viết chương trình chuyển đổi các dấu hiệu xuống dòng của một tệp văn bản của môi trường UNIX sang định dạng của Windows.
Trong mỗi trường hợp, chương trình nhận các tên tệp qua tham số dòng lệnh.
Gợi ý: Mở tệp để đọc trong chế độ "rb" và mở tệp để viết trong chế độ "wb".
