1. Điều chỉnh chương trình trong bài 1 chương 10 sao cho nó sử dụng ngăn xếp khái quát (ADT) có trong chương này. Bạn có thể sử dụng bất kỳ triển khai nào của ADT có trong chương này.

2. Điều chỉnh chương trình trong bài 6 chương 10 sao cho nó sử dụng ngăn xếp ADT. Bạn có thể sử dụng bất kỳ triển khai nào của ADT có trong chương này.

3. Điều chỉnh stackADT3.c bằng cách thêm 1 thành viên len kiểu int vào cấu trúc stack_type. Phần tử này sẽ ghi nhớ bao nhiêu phần tử đang được lưu trong ngăn xếp. Thêm một hàm mới tên là length nhận tham số kiểu Stack và trả về giá trị của thành phần len của nó. (Một số hàm đã có trong stackADT3.c cũng cần được điều chỉnh). Điều chỉnh stackclient.c sao cho nó gọi hàm length (và hiển thị giá trị mà nó trả về) sau mỗi thao tác thay đổi ngăn xếp.

4. Điều chỉnh stackADT.h và stackADT3.c sao cho một ngăn xếp lưu các giá trị kiểu void*. Kiểu Item sẽ không được sử dụng nữa. Điều chỉnh stackclient.c sao cho nó lưu các con trỏ tới các chuỗi trong các ngăn xếp s1 và s2.

5. Bắt đầu với tệp tiêu đề queue.h, tạo một tệp tiêu đề khác với tên queueADT.h chứa định nghĩa của kiểu Queue như sau:
typedef struct queue_type *Queue;
queue_type là một kiểu cấu trúc không hoàn thiện. Tạo một tệp với tên queueADT.c chứa định nghĩa đầy đủ của queue_type cùng với định nghĩa của tất cả các hàm có trong queue.h. Sử dụng một mảng kích thước cố định để lưu các phần tử trong một hàng đợi. Tạo tệp queueclient.c (tương tự như stackclient.c) để tạo hai hàng đợi và thực hiện các thao tác với chúng. Hãy đảm bảo các hàm create và destroy được cung cấp cho ADT của bạn.

6. Điều chỉnh chương trình bài 5 sao cho các phần tử trong hàng đợi được lưu trong một mảng cấp phát động với độ dài được truyền qua tham số cho hàm create.

7. Điều chỉnh chương trình bài 5 sao cho các phần tử trong hàng đợi được lưu trong một danh sách liên kết đơn.
