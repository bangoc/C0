1. Điều chỉnh bài 7 chương 2 sao cho nó bao gồm hàm sau:
void pay_amount(int amount, int *n20, int *n10,
                int *n5, int *n2, int *n1);
Hàm này xác định số tờ nhỏ nhất với các mệnh giá 20 ngàn, 10 ngàn, 5 ngàn, 2 ngàn, và 1 ngàn cần để trả số tiền được truyền qua tham số money. Tham số n20 trỏ tới biến chứa số tờ 20 ngàn cần sử dụng. Các tham số khác theo thứ tự trỏ tới các biến lưu số tờ với các mệnh giá còn lại.

2. Điều chỉnh bài 8 chương 5 sao cho nó bao gồm hàm sau:
void find_closest_flight(int desired_time,
                 int *departure_time, int *arrival_time);
Hàm này sẽ tìm chuyến bay có thời gian đi gần nhất so với thời gian người dùng nhập vào (desired_time), các biến departure_time, và arrival_time lần lượt trỏ đến các biến chứa thời gian đi và thời gian đến của chuyến bay tìm được, thời gian được biểu diễn bằng số phút tính từ lúc nửa đêm.

3. Điều chỉnh bài 3 chương 6 sao cho nó bao gồm hàm sau:
void reduce(int numerator, int denominator,
      int *reduced_numerator, int *reduced_denominator);
numerator và denominator là tử số và mẫu số của tỉ số cần được giản lược, reduced_numerator và reduced_denominator trỏ đến các biến chứa giá trị của tử số và mẫu số sau khi giản lược.

4. Điều chỉnh chương trình poker.c có trong chương 10 bằng cách di chuyển tất cả các biến ngoại vào hàm main và điều chỉnh các hàm sao cho các giao tiếp được thực hiện bằng cơ chế tham số. Hàm analyze_hand cần gán giá trị cho các biến straight, flush, four, three, và pairs, vì vậy nó cần được truyền các con trỏ tới những biến này.