#include "bkc.h"

int main() {
  bkint a;
  bkreal b;
  bkchar c;
  bkstr s;
  bkstr w;
  bkscan(a, b, c);
  bkword(w);
  bkline_clean();
  bkline(s);
  bkprint("a = ", a, " b = ", b, "\n");
  bkprintn("c = ", c);
  bkprintn("word: ", w);
  bkprintn("line: ", s);
}