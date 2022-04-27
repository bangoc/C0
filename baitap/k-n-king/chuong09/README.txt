1. Viết chương trình hỏi người dùng nhập một dãy số nguyên (lưu trong một mảng), sau đó sắp xếp các số nguyên bằng cách gọi hàm selection_sort. Khi cho một mảng n phần tử, selection_sort phải thực hiện những thao tác sau:
a) Tìm kiếm phần tử lớn nhất trong mảng và chuyển nó về vị trí cuối trong mảng.
b) Gọi đệ quy để sắp xếp n - 1 phần tử còn lại trong mảng.

2. Điều chỉnh chương trình bài 5 chương 5 sao cho nó sử dụng hàm để tính khoản thuế thu nhập. Khi chuyền vào một khoản thu nhập chịu thuế, chương trình trả về thuế phải nộp.

3. Điều chỉnh bài 9 chương 8 sao cho nó có các hàm sau:
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
Đầu tiên hàm main gọi generate_random_walk để khởi tạo mảng chỉ chứa các ký tự '.' và sau đó thay đổi giá trị trong một số ô bằng các ký tự từ A tới Z, như trong bài gốc. Hàm main sau đó gọi print_array để hiển thị mảng lên màn hình.

4. Điều chỉnh chương trình bài 16 chương 8 sao cho nó có các hàm sau:
void read_word(int counts[256]);
bool equal_array(int counts1[256], int counts2[256]);
main sẽ gọi read_word 2 lần, mỗi lần đọc 1 từ do người dùng nhập vào. Hàm read_word sẽ sử dụng các ký tự trong từ được nhập vào để cập nhật mảng counts, như trong bài tập gốc. Sau đó main sẽ gọi hàm equal_array để kiểm tra xem tất cả các phần tử có cùng chỉ số trong hai mảng có bằng nhau hay không. Nếu đúng, thì 2 từ nhập vào là các hoán vị, hoặc nếu ngược lại thì các từ không phải là các hoán vị.

5. Điều chỉnh chương trình bài 17 chương 8 sao cho nó bao gồm các hàm sau:
void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);
Sau khi đọc số n, hàm main gọi create_magic_square, truyền cho nó một mảng n x n được khai báo trong hàm main. create_magic_square sẽ điền các giá trị 1, 2, ..., n^2 vào ma trận như trong bài tập gốc. Hàm main sau đó gọi print_magic_square để hiển thị mảng theo định dạng như trong bài tập gốc.
Ghi chú: Nếu trình biên dịch không hỗ trợ mảng kích thước linh hoạt, thì có thể khai bảo kích thước mảng là 99 x 99 thay vì n x n, và sử dụng các nguyên mẫu hàm như sau:
void create_magic_square(int n, int magic_square[99][99]);
void print_magic_square(int n, int magic_square[99][99]);

6. Viết hàm tính giá trị của đa thức sau:
3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
Viết chương trình hỏi người dùng nhập vào giá trị x, gọi hàm tính giá trị đa thức, và sau đó hiển thị giá trị được trả về.

7. Có thể điều chỉnh hàm power (xem power.c) để tính x^n với ít phép nhân hơn. Như chúng ta thấy rằng với n là lũy thừa của 2, thì có thể tính x^n bằng các bình phương. Ví dụ, x^4 là (x^2)^2, như vậy để tính x^4 chúng ta chỉ cần thực hiện 2 phép nhân thay vì 3 phép nhân. Kỹ thuật này có thể sử dụng được cho cả trường hợp n không phải là lũy thừa của 2. Nếu n chẵn, chúng ta sử dụng công thức x^n = (x^(n/2))^2. Nếu n lẻ, thì x^n = x*x^(n-1). Hãy viết một hàm đệ quy để tính x^n. (Tiến trình đệ quy kết thúc khi n = 0, trong trường hợp đó hàm trả về 1) Để kiểm tra, hãy viết một chương trình nhập vào các giá trị x và n, sau đó gọi hàm power để tính x^n và in ra kết quả trả về.

8. Viết chương trình mô phỏng trò chơi súc sắc với 2 con súc sắc. Trong lượt mở thứ nhất, người chơi thắng nếu tổng của các con súc sắc là 7 hoặc 11. Người chơi thua nếu tổng là 2, 3, hoặc 12. Các kết quả khác được gọi là "chốt" và trò chơi được tiếp diễn. Trong mỗi lần mở tiếp theo, người chơi thắng nếu kết quả mở bằng chốt. Người chơi thua nếu kết qủa mở bằng 7. Bất kỳ kết quả nào khác đều bị bỏ qua và trò chơi được tiếp diễn. Khi lượt chơi kết thúc, chương trình hỏi người dùng có muốn chơi lại hay không. Nếu người dùng nhập lựa chọn khác y và khác Y thì chương trình hiển thị số lần thắng và thua, sau đó kết thúc.
Ví dụ:
Kết quả mở của bạn: 8
Chốt của bạn là 8
Kết quả mở của bạn: 3
Kết quả mở của bạn: 10
Kết quả mở của bạn: 8
Bạn đã thắng!

Chơi lại? [y, n]: y

Kết quả mở của bạn: 6
Chốt của bạn là 6
Kết quả mở của bạn: 12
Kết quả mở của bạn: 3
Kết quả mở của bạn: 7
Bạn đã thua!

Chơi lại? [y, n]: y

Kết quả mở của bạn: 11
Bạn đã thắng!

Chơi lại? [y, n]: n

Thắng: 2   Thua: 1

Viết chương trình bao gồm 3 hàm: main, roll_dice, và play_game. Đây là các nguyên mẫu cho 2 hàm cuối:
int roll_dice(void);
int play_game(void);
roll_dice cần sinh 2 số ngẫu nhiên, các số đều nằm trong khoảng [1, 6], và trả về tổng của chúng; play_game thực hiện một lượt chơi (lặp gọi hàm roll_dice để lấy kết quả cho các lượt mở súc sắc), nó trả về 1 nếu người chơi thắng, và trả về 0 nếu người chơi thua. Hàm play_game cũng hiển thị các thông báo trong mỗi lượt chơi. Hàm main lặp gọi play_game, ghi nhớ số lần thắng và số lần thua, và hiển thị các thông báo "Bạn đã thắng!", "Bạn đã thua!".
Gợi ý: Sử dụng hàm rand để sinh số ngẫu nhiên. Xem ví dụ cách sinh số ngẫu nhiên trong deal.c.
