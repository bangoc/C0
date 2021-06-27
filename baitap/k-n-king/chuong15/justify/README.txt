Thư mục này chứa mã nguồn của chương trình justify có trong chương 15. Có thể biên dịch chương trình này theo một số cách như sau:

Cách 1. Sử dụng lệnh
{tên trình biên dịch} -o justify justify.c word.c line.c
Trong đó: {tên trình biên dịch} là trình biên dịch bạn đang sử dụng. Nếu sử dụng gcc thì câu lệnh cụ thể sẽ là:
gcc -o  justify justify.c word.c line.c
Nếu sử dụng clang thì
clang -o  justify justify.c word.c line.c
...
Cách 2. Sử dụng make và Makefile (các công cụ bản địa của môi trường Linux)
Thực hiện lệnh: make justify hoặc chỉ đơn giản là make (mặc định mục tiêu justify)

Cách 3. Sử dụng cmake - một hệ thống biên dịch trừu tượng, cmake có khả năng biên dịch các mô tả trong CMakeLists.txt thành các mô tả biên dịch bản địa trong các môi trường khác nhau. Vì vậy có thể viết mô tả biên dịch 1 lần rồi biên dịch khắp nơi (trên các nền tảng khác nhau).
Ví dụ: Nếu sử dụng cmake và ninja (có trên nhiều nền tảng) thì thực hiện các bước sau:
a) Đầu tiên tạo thư mục chứa kết quả biên dịch
ví dụ, thực hiện biên dịch trong thư mục b (build) nằm trong thư mục chứa tệp này:
mkdir b; cd b
b) Sinh mô tả biên dịch cho ninja
cmake .. -G Ninja
b) Thực hiện biên dịch
ninja justify hoặc đơn giản là ninja (mặc định mục tiêu justify)
