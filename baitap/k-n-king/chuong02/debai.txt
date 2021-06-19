1. Viết chương trình sử dụng printf để hiển thị hình vẽ sau lên màn hình:
       *
      *
     *
*   *
 * *
  *

2. Viết chương trình tính thể tích hình cầu có bán kính 10 m, sử dụng công thức v = 4/3Pi*r^3. Viết tỉ số 4/3 là 4.0f/3.0f (thử viết là 4/3 và phân tích kết quả).
Gợi ý: C không có toán tử tính lũy thừa, bạn có thể nhân r với chính nó nhiều lần để tính r^3 (r mũ 3).

3. Điều chỉnh chương trình trong bài 2 sao cho nó hỏi người dùng nhập vào bán kính của hình cầu.

4. Viết chương trình hỏi người dùng nhập vào số tiền tính bằng ngàn đồng, sau đó hiển thị số tiền với 5% thuế được thêm vào tính bằng VNĐ, không có phần thập phân.
Ví dụ:
Nhập số tiền (x 1000 VNĐ): 100
Đã tính thuế: 105000 VNĐ

5. Viết chương trình hỏi người dùng nhập vào giá trị của biến x, sau đó tính và hiển thị giá trị của đa thức :
3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
Gợi ý: C không có toán tử tính lũy thừa, bạn có thể nhân x với chính nó nhiều lần để tính các lũy thừa của x.

6. Điều chỉnh chương trình trong bài 5 sao cho giá trị của đa thức được tính bằng công thức sau:
((((3x+2)x - 5)x - 1)x + 7)x - 6
Ghi chú: Chương trình sau khi điều chỉnh thực hiện ít phép nhân hơn. Kỹ thuật này để tính giá trị đa thức được biết đến là phương pháp Horner.

7. Viết chương trình hỏi người dùng nhập vào số tiền tính bằng ngàn đồng và sau đó hiển thị cách thanh toán số tiền đó với tổng số tờ tiền với các mệnh giá 20000, 10000, 5000, 2000, 1000 nhỏ nhất:
Nhập số tiền (x 1000 VNĐ): 30
số tờ 20000: 1
số tờ 10000: 1
số tờ  5000: 0
số tờ  2000: 0
số tờ  1000: 0
tổng số tờ : 2
Gợi ý: Chia số tiền cho 20 để xác định số tờ 20000, xác định số tiền còn lại và lặp thao tác chia với các mệnh giá nhỏ hơn theo thứ tự giảm dần mệnh giá.

8. Viết chương trình tính dư nợ khoản vay sau lần trả góp hàng tháng đầu tiên, thứ 2, và thứ 3.
Ví dụ:
Nhập khoản vay (x 1000 VNĐ): 2000
Nhập lãi suất theo năm (%): 24
Khoản góp hàng tháng (x 1000 VNĐ): 100

Dư nợ còn lại sau trả góp tháng đầu tiên: 1940000.00
Dư nợ còn lại sau trả góp tháng thứ 2: 1878800.00
Dư nợ còn lại sau trả góp tháng thứ 3: 1816376.00

Đơn vị khoản vay và khoản góp hàng tháng là 1000 VNĐ, lãi suất được tính bằng (%), dư nợ còn lại được hiển thị bằng VNĐ. Hiển thị dư nợ làm tròn đến 2 chữ số sau dấu phẩy.
Gợi ý: Hàng tháng dư nợ được cộng thêm phần lãi hàng tháng và giảm đi một lượng bằng khoản góp. Lãi suất hàng tháng bằng lãi suất theo năm chia 12.
