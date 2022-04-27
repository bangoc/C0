1. Điều chỉnh chương trình inventory.c có trong chương 16 sao cho mảng inventory được cấp phát động và sau đó được cấp phát lại mỗi khi nó bị đầy. Sử dụng malloc để cấp phát bộ nhớ ban đầu đủ cho 10 linh kiện. Khi mảng không còn chỗ cho các linh kiện mới, sử dụng realloc để nhân đôi kích thước của nó. Lặp lại thao tác nhân đôi mỗi khi mảng bị đầy.

2. Điều chỉnh chương trình inventory.c có trong chương 16 sao cho lệnh p (in) gọi qsort để sắp xếp mảng inventory theo mã linh kiện trước khi xuất ra các linh kiện.

3. Điều chỉnh chương trình inventory2.c bằng cách bổ xung lệnh e (xóa-erase) để người dùng có thể xóa một linh kiện khỏi CSDL.

4. Điều chỉnh chương trình justify có trong chương 15: Viết lại tệp line.c sao cho nó lưu dòng hiện tại trong một danh sách liên kết. Mỗi nút trong danh sách sẽ lưu một từ. Mảng line sẽ bị thay thế bởi một biến trỏ tới nút đầu tiên trong danh sách. Biến này bằng NULL khi dòng rỗng.

5. Viết chương trình sắp xếp một dãy các từ được nhập bởi người dùng.
Ví dụ:
Nhập từ: foo
Nhập từ: bar
Nhập từ: baz
Nhập từ: quux
Nhập từ:

Theo thứ  tự chữ cái: bar baz foo quux

Giả sử mỗi từ có không quá 20 ký tự. Dừng đọc khi người dùng nhập một từ rỗng (ví dụ, nhấn Enter mà không nhập từ). Lưu mỗi từ trong một chuỗi được cấp phát động, sử dụng một mảng con trỏ để lưu các chuỗi, như trong chương trình remind2.c. Sau khi tất cả các từ đã được đọc, sắp xếp mảng (sử dụng bất kỳ kỹ thuật sắp xếp nào) và sau đó sử dụng vòng lặp để in ra các từ theo trật tự sắp xếp.
Gợi ý: Sử dụng hàm read_line để đọc từng từ, như trong remind2.c

6. Điều chỉnh chương trình trong bài 5 sao cho nó sử dụng hàm qsort để sắp xếp mảng các con trỏ.

7. (C99) điều chỉnh chương trình remind2.c sao cho mỗi phần tử của mảng reminders là một con trỏ tới cấu trúc vstring (xem vstring.h) thay vì trỏ tới chuỗi thông thường.
