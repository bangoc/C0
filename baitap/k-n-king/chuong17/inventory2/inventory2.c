/* Quản lý một CSDL linh kiện (Phiên bản sử dụng danh sách móc nối đơn) */

#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define NAME_LEN 25

struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
  struct part *next;
};

struct part *inventory = NULL;   /* Con trỏ tới linh kiện đầu tiên */

struct part *find_part(int number);
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

int main(void)
{
  char code;

  for (;;) {
    printf("Nhập mã lệnh: ");
    scanf(" %c", &code);
    while (getchar() != '\n')   /* skips to end of line */
      ;
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
      default:  printf("Mã lệnh không hợp lệ\n");
                break;
    }
    printf("\n");
  }
}

/**********************************************************
 * find_part: Tìm kiếm mã linh kiện trong mảng inventory. *
 *            Trả về chỉ số mảng nếu mã linh kiện được     *
 *            tìm thấy; nếu ngược lại trả về NULL.          *
 **********************************************************/
struct part *find_part(int number)
{
  struct part *p;

  for (p = inventory;
       p != NULL && number > p->number;
       p = p->next)
    ;
  if (p != NULL && number == p->number)
    return p;
  return NULL;
}

/**********************************************************
 * insert: Hỏi người dùng thông tin về linh kiện mới và   *
 *         thêm linh kiện vào CSDL. In một thông báo lỗi  *
 *         và kết thúc thao tác nếu mã linh kiện đã có    *
 *         trong CSDL hoặc không thể cấp phát bộ nhớ cho  *
 *         linh kiện mới .                                *
 **********************************************************/
void insert(void)
{
  struct part *cur, *prev, *new_node;

  new_node = malloc(sizeof(struct part));
  if (new_node == NULL) {
    printf("CSDL đã đầy; Không thể lưu thêm link kiện mới.\n");
    return;
  }

  printf("Nhập mã số linh kiện: ");
  scanf("%d", &new_node->number);

  for (cur = inventory, prev = NULL;
       cur != NULL && new_node->number > cur->number;
       prev = cur, cur = cur->next)
    ;
  if (cur != NULL && new_node->number == cur->number) {
    printf("Linh kiện đã tồn tại.\n");
    free(new_node);
    return;
  }

  printf("Nhập tên linh kiện: ");
  read_line(new_node->name, NAME_LEN);
  printf("Nhập số lượng tồn kho: ");
  scanf("%d", &new_node->on_hand);

  new_node->next = cur;
  if (prev == NULL)
    inventory = new_node;
  else
    prev->next = new_node;
}

/***********************************************************
 * search: Hỏi người dùng nhập mã linh kiện, sau đó tìm    *
 *         kiếm mã linh kiện trong CSDL. Nếu linh kiện tồn *
 *         tại, in tên và số lượng tồn kho;                *
 *         nếu không, in một thông báo lỗi.                *
 ***********************************************************/
void search(void)
{
  int number;
  struct part *p;

  printf("Nhập mã số linh kiện: ");
  scanf("%d", &number);
  p = find_part(number);
  if (p != NULL) {
    printf("Tên linh kiện: %s\n", p->name);
    printf("Số lượng tồn kho: %d\n", p->on_hand);
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
  int number, change;
  struct part *p;

  printf("Nhập mã linh kiện: ");
  scanf("%d", &number);
  p = find_part(number);
  if (p != NULL) {
    printf("Nhập thay đổi tồn kho: ");
    scanf("%d", &change);
    p->on_hand += change;
  } else
    printf("Không tìm thấy linh kiện.\n");
}

/**********************************************************
 * print: In một danh sách các linh kiện trong CSDL,      *
 *        hiển thị mã linh kiện, tên linh kiện, và        *
 *        số lượng tồn kho. Các linh kiện được xuất theo  *
 *        thứ tự tăng dần mã sản phẩm    .                *
 **********************************************************/
void print(void)
{
  struct part *p;

  printf("Mã linh kiện   Tên linh kiện               "
         "Số lượng tồn kho\n");
  for (p = inventory; p != NULL; p = p->next)
    printf("%7d        %-27s%11d\n", p->number, p->name,
           p->on_hand);
}
