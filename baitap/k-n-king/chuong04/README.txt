1. Viết chương trình hỏi người dùng nhập vào một số 2 chữ số, sau đó in ra số được tạo thành bằng cách sắp xếp các chữ số của nó theo thứ tự ngược lại. Một phiên làm việc của chương trình nhìn như sau:
Nhập một số 2 chữ số: 28
Số đảo ngược là: 82
Gợi ý: Nếu n là một số nguyên thì n % 10 là chữ số cuối cùng của n và n/10 là chữ số thu được sau khi xóa chữ số cuối cùng của n.

2. Mở rộng chương trình trong bài 1 để xử lý số có 3 chữ số.

3. Viết lại chương trình trong bài 2 mà không sử dụng các phép toán để tách các chữ số.
Gợi ý: Tham khảo upc.c

4. Viết chương trình đọc một số nguyên được nhập bởi người dùng và hiển thị nó ở hệ cơ số 8:
Ví dụ:
Nhập một số trong khoảng giữa 0 và 32768: 1984
Trong hệ cơ số 8, số bạn đã nhập là: 03700
Kết quả đầu ra phải có đủ 5 chữ số dù có thể biểu diễn với ít chữ số hơn.
Gợi ý: Để chuyển đổi số sang HCS 8, đầu tiên chia nó cho 8 - phần dư trong phép chia là chữ số cuối cùng trong HCS 8, sau đó tiếp tục lặp lại thao tác này với phần nguyên trong phép chia ở bước trước để lấy chữ số tiếp theo cho tới khi phần nguyên trong phép chia bằng 0. (printf có khả năng hiển thị số ở HCS 8 vì vậy chúng ta hoàn toàn có thể viết chương trình này theo cách đơn giản hơn.).

5. Viết lại chương trình upc.c sao cho người dùng nhập 11 chữ số một lượt.
Ví dụ:
Nhập 11 chữ số đầu tiên của mã UPC: 01380015173
Chữ số kiểm tra: 5

6. Các nước Châu Âu sử dụng mã số gồm 13 chữ số - mã EAN (European Article Number) thay vì mã UPC (Universal Product Code) gồm 12 chữ số được sử dụng ở Bắc Mỹ. Mỗi mã EAN kết thúc với một chữ số kiểm tra tương tự như trong mã UPC. Đồng thời cách tính chữ số kiểm tra cũng tương tự:
  Cộng các chữ số thứ 2, thứ 4, thứ 6, thứ 8, thứ 10, và thứ 12.
  Cộng các chữ số thứ 1, thứ 3, thứ 5, thứ 7, thứ 9, và thứ 11
  Nhân tổng thứ nhất với 3 và cộng nó với tổng thứ 2.
  Lấy kết quả trừ 1.
  Tính phần dư khi chia kết quả thu được cho 10.
  Lấy 9 trừ đi phần dư thu được.
Ví dụ: Với một mã EAN bằng 8691484260008. Tổng thứ nhất là: 6 + 1 + 8 + 2 + 0 + 0 = 17, và tổng thứ 2 là 8 + 9 + 4 + 4 + 6 + 0 = 31. Nhân tổng thứ nhất với 3 và cộng với tổng thứ 2 cho kết quả là 82. Trừ đi 1 còn 81. Phần dư khi chia cho 10 là 1. Lấy 9 trừ đi 1 được 8, bằng chữ số cuối cùng của mã số ban đầu.
Bài toán đặt ra cho bạn là viết chương trình tương tự như upc.c để tính chữ số kiểm tra cho mã EAN. Người dùng sẽ nhập 12 chữ số của mã EAN như một số:
Ví dụ:
Nhập 12 chữ số đầu tiên của mã EAN: 869148426000
Chữ số kiểm tra: 8