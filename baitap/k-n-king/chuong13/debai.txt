1. Viết chương trình tìm các từ nhỏ nhất và lớn nhất trong một dãy. Sau khi người dùng nhập vào các từ, chương trình sẽ xác định các từ xuất hiện đầu tiên và cuối cùng theo thứ tự từ điển. Chương trình phải dừng đọc dữ liệu khi người dùng nhập vào một từ 4 chữ cái. Giả sử không có từ nào dài hơn 20 chữ cái. Một phiên làm việc của chương trình có thể nhìn như sau:
Ví dụ:
Nhập từ: dog
Nhập từ: zebra
Nhập từ: rabbit
Nhập từ: catfish
Nhập từ: walrus
Nhập từ: cat
Nhập từ fish

Từ nhỏ nhất: cat
Từ lớn nhất: zebra

Gợi ý: Có thể sử dụng hai chuỗi được đặt tên là smallest_word và largest_word để lưu các từ nhỏ nhất và lớn nhất trong số các từ đã được nhập vào. Mỗi khi người dùng nhập một từ, sử dụng strcmp để so sánh nó với smallest_word và largest_word; Nếu từ mới nhỏ hơn smallest_word thì sử dụng strcpy để lưu nó vào smallest_word. Xử lý tương tự với largest_word. Sử dụng strlen để xác định độ dài từ được nhập vào.

2. Điều chỉnh chương trình remind.c theo cách sau:
a) Chương trình in thông báo lỗi và bỏ qua việc nhắc nếu ngày tương ứng là số âm hoặc lớn hơn 31. Gợi ý: Sử dụng câu lệnh continue.
b) Cho phép người dùng nhập một ngày, thời gian 24-giờ, và nội dung nhắc nhở. Danh sách nhắc nhở được in ra phải được sắp xếp đầu tiên theo ngày, sau đó theo thời gian. (Chương trình gốc cho phép người dùng nhập giờ, nhưng nó được coi như phần của thông điệp nhắc nhở.)
c) Chương trình in danh sách nhắc nhở cho một năm. Yêu cầu người dùng nhập vào các ngày theo định dạng ngày/tháng.

3. Điều chỉnh chương trình deal.c có trong chương 8 sao cho nó in tên đầy đủ của quân bài:
Ví dụ:
Nhập số quân bài trên tay: 5
Bài của bạn:
Bẩy cơ
Hai tép
Năm rô
Át tép
Hai cơ
Gợi ý: Thay rank_code và suit_code bằng các mảng con trỏ tới các chuỗi là tên và chất của các quân bài.

4. Viết một chương trình in ra các tham số dòng lệnh của nó theo thứ tự ngược lại.
Ví dụ nếu chương trình tên là reverse thì khi thực hiện lệnh
reverse void and null
nó cần in ra
null and void

5. Viết chương trình tính tổng các số được truyền cho nó như những tham số dòng lệnh.
Ví dụ nếu chương trình tên là sum thì khi thực hiện lệnh
sum 8 24 62
nó cần in ra
Tổng là: 94
Gợi ý: Sử dụng hàm atoi hoặc sscanf để chuyển đổi các tham số dòng lệnh từ dạng chuỗi sang số.

6. Điều chỉnh chương trình planet.c sao cho nó bỏ qua tính chất hoa/thường của các chữ cái khi so sánh tham số dòng lệnh với các chuỗi trong mảng planets.

7. Điều chỉnh chương trình 11 chương 5 sao cho nó sử dụng các mảng con trỏ tới các chuỗi thay cho câu lệnh switch. Ví dụ, thay vì sử dụng lệnh switch để ánh xạ chữ số sang cách đọc, hãy sử dụng chữ số như chỉ số của một mảng chứa các chuỗi "Mười", "Hai mươi", v.v..

8. Điều chỉnh bài 5 chương 7 sao cho nó bao gồm hàm sau:
int compute_scrabble_value(const char *word);
Hàm này trả về giá trị xếp cho từ được trỏ tới bởi word.

9. Điều chỉnh bài 10 chương 7 sao cho nó bao gồm hàm sau:
int count_vowel(const char *sentence);
Hàm này trả về số lượng nguyên âm có trong chuỗi được trỏ tới bởi sentence.

10. Điều chỉnh bài 11 chương 7 sao cho nó bao gồm hàm sau:
void reverse_name(char *name)
Hàm này coi như name trỏ tới chuỗi chứa tên và sau đó là họ (tiếng anh). Nó thay đổi chuỗi sao cho họ được đưa lên trước, sau đó là một dấu phẩy, một dấu cách, chữ cái đầu tiên của tên, và một dấu chấm. Chuỗi ban đầu có thể chứa nhiều dấu cách trước tên, giữa tên và họ, và sau họ.

11. Điều chỉnh bài 13 chương 7 sao cho nó bao gồm hàm sau:
double compute_average_word_length(const char *sentence);
Hàm trả về độ dài trung bình của các từ trong chuỗi được trỏ đến bởi sentence.

12. Điều chỉnh chương trình 14 chương 8 sao cho nó lưu các từ trong một mảng 2 chiều kiểu char khi nó đọc câu, với mỗi dòng của mảng lưu một từ. Giả sử câu được nhập vào chứa không quá 30 từ và không có từ nào chứa nhiều hơn 20 ký tự. Hãy chắc chắn rằng ký tự '\0' được lưu ở cuối mỗi từ để nó được coi như một chuỗi.

13. Điều chỉnh chương trình 15 chương 8 sao cho nó bao gồm hàm sau:
void encrypt(char *message, int shift);
Hàm này coi message trỏ tới một chuỗi chứa thông điệp cần mã hóa; shift là số vị trí mà mỗi chữ cái trong thông điệp cần được dịch chuyển.

14. Điều chỉnh bài 16 chương 8 sao cho nó bao gồm hàm sau:
bool are_anagrams(const char *word1, const char *word2);
Hàm trả về true nếu các chuỗi được trỏ tới bởi word1 và word2 là các hoán vị (anagrams) của cùng các ký tự.

15. Điều chỉnh bài 6 chương 10 sao cho nó bao gồm hàm sau:
int evaluate_RPN_expression(const char *expression);
Hàm trả về giá trị của biểu thức RPN được trỏ tới bởi expression.

16. Điều chỉnh bài 1 chương 12 sao cho nó bao gồm hàm sau:
void reverse(char *message);
Hàm này đảo ngược chuỗi được trỏ tới bởi message.
Gợi ý: Sử dụng 2 con trỏ, một con trỏ ban đầu trỏ tới ký tự đầu tiên của chuỗi và con trỏ còn lại ban đầu trỏ tới ký tự cuối của chuỗi. Hoán đổi những ký tự này, sau đó di chuyển các con trỏ về phía nhau và tiếp tục hoán đổi các ký tự. Lặp cho tới khi hai con trỏ gặp nhau.

17. Điều chỉnh chương trình bài 2 chương 12 sao cho nó bao gồm hàm sau:
bool is_palindrome(const char *message);
Hàm trả về true nếu chuỗi được trỏ tới bởi message là palindrome.

18. Viết chương trình nhận một ngày từ người dùng theo định dạng dd/mm/yy và sau đó hiển thị nó theo định dạng dd Tháng, yyyy, trong đó Tháng là tên của tháng.
Ví dụ:
Nhập một ngày (dd/mm/yyyy): 17/1/2021
Bạn đã nhập ngày: 17 tháng Giêng, 2021
