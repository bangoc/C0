/*
 (C) Nguyen Ba Ngoc, 2021
 Chương trình này xuất bảng mã ASCII vào tệp văn bản
 có tên được cung cấp qua tham số dòng lệnh đầu tiên.
*/
#include <stdio.h>
#include <string.h>

char *names[128] = {
  [0] = "NULL",
  "SOH (Start Of Heading)",
  "STX (Start Of Text)",
  "ETX (End Of Text)",
  "EOT (End Of Transmission)",
  "ENQ (Enquiry)",
  "ACK (Acknowledge)",
  "BEL (Bell)",
  "BS  (Backspace)",
  "TAB (Horizontal Tab)",
  "LF  (Line Feed, NL-New Line)",
  "VT  (Vertical Tab)",
  "FF  (Form Feed, NP-New Page)",
  "CR  (Carriage Return)",
  "SO  (Shift Out)",
  "SI  (Shift In)",
  "DLE (Data Link Escape)",
  "DC1 (Device Control 1)",
  "DC2 (Device Control 2)",
  "DC3 (Device Control 3)",
  "DC4 (Device Control 4)",
  "NAK (Negative Acknowledge)",
  "SYN (Synchronous Idle)",
  "ETB (End of Transmission Block)",
  "CAN (Cancel)",
  "EM  (End of Medium)",
  "SUB (Substitute)",
  "ESC (Escape)",
  "FS  (File Seperator)",
  "GS  (Group Seperator)",
  "RS  (Record Seperator)",
  "US  (Unit Seperator)",
  "Space",
  [127] = "DEL"
};

void center(FILE* out, char *s, int width) {
  int pad1 = (width - strlen(s)) / 2;
  int pad2 = width - strlen(s) - pad1;
  fprintf(out, "%*s%*s", pad1 + strlen(s), s, pad2, "");
}

void header_column(FILE *out, int dec, int hex, int oct, int kt) {
  fprintf(out, "%*s%*s%*s Ký tự%*s",
               dec, "Dec", hex, "Hex", oct, "Oct", kt - 6, "");
}

void output(FILE *out, int c, int dec, int hex, int oct, int kt) {
  fprintf(out, "%*d%*X%*o", dec, c, hex, c, oct, c);
  if (names[c]) {
    fprintf(out, " %*s", -kt + 1, names[c]);
  } else {
    center(out, (char[]) {c, 0}, kt);
  }
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage example: ./kt ascii.txt\n");
    return 1;
  }
  int dec = 5, hex = 5, oct = 5,
      kt1 = 32, kt2 = 6;
  FILE *out = fopen(argv[1], "w");
  header_column(out, dec, hex, oct, kt1);
  fprintf(out, "|");
  header_column(out, dec, hex, oct, kt2);
  fprintf(out, "|");
  header_column(out, dec, hex, oct, kt2);
  fprintf(out, "|");
  header_column(out, dec, hex, oct, kt2);
  fprintf(out, "\n");
  for (int i = 0; i < 112; ++i) {
    fprintf(out, "-");
  }
  fprintf(out, "\n");
  for (int i = 0; i < 32; ++i) {
    int c = i;
    output(out, c, dec, hex, oct, kt1);
    fprintf(out, "|");
    output(out, c + 32, dec, hex, oct, kt2);
    fprintf(out, "|");
    output(out, c + 64, dec, hex, oct, kt2);
    fprintf(out, "|");
    output(out, c + 96, dec, hex, oct, kt2);
    fprintf(out, "\n");
  }
  fclose(out);
  return 0;
}