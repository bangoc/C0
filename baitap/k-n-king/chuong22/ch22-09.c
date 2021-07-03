#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
  int number;
  char name[NAME_LEN + 1];
  int on_hand;
} inventory1 [ MAX_PARTS ],
  inventory2 [ MAX_PARTS ],
  inventory [MAX_PARTS];

int num_parts1, num_parts2, num_parts;

void terminate(char *reason) {
  printf("%s\n", reason);
  exit(EXIT_FAILURE);
}

void read_parts(char *fname, struct part *inv, int *np) {
  FILE *f = fopen(fname, "rb");
  if (f == NULL) {
    printf("Không thể mở tệp %s để đọc", fname);
    terminate("Chương trình kết thúc bất thường.");
  }
  fread(np, sizeof(int), 1, f);
  fread(inv, sizeof(struct part), *np, f);
  fclose(f);
}

int main(int argc, char *argv[]) {
  if (argc != 4) {
    printf("Sử dụng: inventory-merge inventory1.dat inventory2.dat inventory.dat\n");
    return 0;
  }
  read_parts(argv[1], inventory1, &num_parts1);
  read_parts(argv[2], inventory2, &num_parts2);
  int i = 0, j = 0, cur = 0;
  for (;;) {
    if (inventory1[i].number < inventory2[j].number) {
      inventory[cur++] = inventory1[i++];
      if (i >= num_parts1) {
        break;
      }
    } else if (inventory1[i].number > inventory2[j].number) {
      inventory[cur++] = inventory2[j++];
      if (j >= num_parts2) {
        break;
      }
    } else {  // number1 == number2
      if (strcmp(inventory1[i].name, inventory2[j].name) != 0) {
        printf("Tên sản phẩm %d không khớp (%s vs. %s)\n", inventory1[i].number,
                  inventory1[i].name, inventory2[j].name);
        terminate("Lỗi dữ liệu.");
      }
      struct part tmp;
      tmp.number = inventory1[i].number;
      strcpy(tmp.name, inventory1[i].name);
      tmp.on_hand = inventory1[i].on_hand + inventory2[j].on_hand;
      inventory[cur++] = tmp;
      ++i;
      ++j;
      if (i >= num_parts1 || j >= num_parts2) {
        break;
      }
    }
  }

  // Sao chép phần còn lại nếu có
  for (;i < num_parts1; ++i) {
    inventory[cur++] = inventory1[i];
  }
  for (;j < num_parts2; ++j) {
    inventory[cur++] = inventory2[j];
  }
  num_parts = cur;

  // Viết kết quả ra tệp
  FILE *out = fopen(argv[3], "wb");
  if (out == NULL) {
    printf("Không thể mở tệp %s để lưu dữ liệu.\n", argv[3]);
    return 1;
  }
  fwrite(&num_parts, sizeof(num_parts), 1, out);
  fwrite(inventory, sizeof(struct part), num_parts, out);
  fclose(out);
  return 0;
}