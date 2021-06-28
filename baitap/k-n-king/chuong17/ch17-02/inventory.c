/* Duy trì một CSDL linh kiện (sử dụng mảng) */
#include <stdio.h>
#include <stdlib.h>

#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
  int number;
  char name[NAME_LEN + 1];
  int on_hand;
} inventory [ MAX_PARTS ];

int num_parts = 0;  // Số lượng linh kiện đang được lưu

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

/******************************************************
 * main: Hỏi người dùng nhập một mã lệnh, sau đó      *
 *       gọi hàm để xử lý yêu cầu. Lặp cho tới khi    *
 *       người dùng nhập lệnh q. In thông báo lỗi nếu *
 *       người dùng nhập một mã không hợp lệ.         *
 ******************************************************/

int main(void) {
  char code;
  for (;;) {
    printf("Nhập một mã lệnh: ");
    scanf(" %c", &code);
    while (getchar() != '\n') {}
    switch (code) {
      case 'i': insert();
                break;
      case 's': search();
                break;
      case 'u': update();
                break;
      case 'p': print();
                break;
      case 'q': return 0;
      default : printf("Mã lệnh không hợp lệ.\n");
                break;
    }
    printf("\n");
  }
  return 0;
}

/**********************************************************
 * find_part: Tìm kiếm mã linh kiện trong mảng inventory. *
 *            Trả về chỉ số mảng nếu mã linh kiện được     *
 *            tìm thấy; nếu ngược lại trả về -1.          *
 **********************************************************/
int find_part(int number)
{
  int i;

  for (i = 0; i < num_parts; i++)
    if (inventory[i].number == number)
      return i;
  return -1;
}

/**********************************************************
 * insert: Hỏi người dùng thông tin về linh kiện mới và   *
 *         thêm linh kiện vào CSDL. In một thông báo lỗi  *
 *         và kết thúc thao tác nếu mã linh kiện đã có    *
 *         trong CSDL hoặc CSDL đã đầy.                   *
 **********************************************************/
void insert(void)
{
  int part_number;

  if (num_parts == MAX_PARTS) {
    printf("CSDL đã đầy. Không thể thêm linh kiện mới.\n");
    return;
  }

  printf("Nhập mã linh kiện: ");
  scanf("%d", &part_number);
  if (find_part(part_number) >= 0) {
    printf("Mã linh kiện đã tồn tại.\n");
    return;
  }

  inventory[num_parts].number = part_number;
  printf("Nhập tên linh kiện: ");
  read_line(inventory[num_parts].name, NAME_LEN);
  printf("Nhập số lượng tồn kho: ");
  scanf("%d", &inventory[num_parts].on_hand);
  num_parts++;
}

/***********************************************************
 * search: Hỏi người dùng nhập mã linh kiện, sau đó tìm    *
 *         kiếm mã linh kiện trong CSDL. Nếu linh kiện tồn *
 *         tại, in tên và số lượng tồn kho;                *
 *         nếu không, in một thông báo lỗi.                *
 ***********************************************************/
void search(void)
{
  int i, number;

  printf("Nhập mã linh kiện: ");
  scanf("%d", &number);
  i = find_part(number);
  if (i >= 0) {
    printf("Tên linh kiện: %s\n", inventory[i].name);
    printf("Số lượng tồn kho: %d\n", inventory[i].on_hand);
  } else
    printf("Không tìm thấy linh kiện.\n");
}

/***********************************************************
 * update: Hỏi người dùng nhập mã linh kiện.               *
 *         In ra một thông báo lỗi nếu linh kiện không     *
 *         tồn tại; nếu ngược lại, hỏi người dùng nhập vào *
 *         giá trị thay đổi số tồn kho và cập nhật CSDL.   *
 **********************************************************/
void update(void)
{
  int i, number, change;

  printf("Nhập mã linh kiện: ");
  scanf("%d", &number);
  i = find_part(number);
  if (i >= 0) {
    printf("Nhập thay đổi số lượng tồn kho: ");
    scanf("%d", &change);
    inventory[i].on_hand += change;
  } else
    printf("Không tìm thấy linh kiện.\n");
}

int part_compare(const void *p1, const void *p2) {
  return ((struct part *)p1)->number - ((struct part *)p2)->number;
}

/**********************************************************
 * print: In một danh sách các linh kiện trong CSDL,      *
 *        hiển thị mã linh kiện, tên linh kiện, và        *
 *        số lượng tồn kho. Các linh kiện được xuất theo  *
 *        thứ tự được nhập vào trong CSDL.                *
 **********************************************************/
void print(void)
{
  int i;
  //      1234567890123456789012345678901234567890123

  qsort(inventory, num_parts, sizeof(struct part), part_compare);
  printf("Mã linh kiện   Tên linh kiện               "
         "Số lượng tồn kho\n");
  for (i = 0; i < num_parts; i++)
    printf("%7d        %-27s%11d\n", inventory[i].number,
           inventory[i].name, inventory[i].on_hand);
}
