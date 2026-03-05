#ifndef BKC_H_
#define BKC_H_
/* (C) Nguyễn Bá Ngọc 2026 */
#include <stdio.h>

typedef long bkint;
typedef double bkreal;
typedef char bkchar;
typedef char bkstr[256];

#define BKSCAN1(var) _Generic((var), \
  bkint: bkscan_int,            \
  bkreal: bkscan_real,        \
  bkchar: bkscan_char           \
)(&var)
#define BKSCAN2(var1, ...) BKSCAN1(var1); \
                           BKSCAN1(__VA_ARGS__)
#define BKSCAN3(var1, ...) BKSCAN1(var1); \
                           BKSCAN2(__VA_ARGS__)
#define BKSCAN4(var1, ...) BKSCAN1(var1, ); \
                           BKSCAN3(__VA_ARGS__)
#define BKSCAN5(var1, ...) BKSCAN1(var1, ); \
                           BKSCAN4(v__VA_ARGS__)

#define GET_SCAN(_1, _2, _3, _4, _5, name, ...)    name
#define bkscan(...) GET_SCAN(__VA_ARGS__, \
        BKSCAN5, BKSCAN4, BKSCAN3, BKSCAN2, BKSCAN1)(__VA_ARGS__)

static inline void bkscan_int(bkint *var) {
  scanf("%ld", var);
}

static inline void bkscan_real(bkreal *var) {
  scanf("%lf", var);
}

static inline void bkscan_char(bkchar *var)  {
  scanf("%c", var);
}

#define BKPRINT1(val) _Generic((val), \
  bkint: bkprint_int,            \
  bkreal: bkprint_real,        \
  bkchar: bkprint_char,          \
  bkchar *: bkprint_string       \
)(val)

#define BKPRINT2(v1, ...) BKPRINT1(v1); \
                          BKPRINT1(__VA_ARGS__)
#define BKPRINT3(v1, ...) BKPRINT1(v1); \
                          BKPRINT2(__VA_ARGS__)
#define BKPRINT4(v1, ...) BKPRINT1(v1); \
                          BKPRINT3(__VA_ARGS__)
#define BKPRINT5(v1, ...) BKPRINT1(v1); \
                          BKPRINT4(__VA_ARGS__)
#define BKPRINT6(v1, ...) BKPRINT1(v1); \
                          BKPRINT5(__VA_ARGS__)
#define BKPRINT7(v1, ...) BKPRINT1(v1); \
                          BKPRINT6(__VA_ARGS__)
#define BKPRINT8(v1, ...) BKPRINT1(v1); \
                          BKPRINT7(__VA_ARGS__)
#define BKPRINT9(v1, ...) BKPRINT1(v1); \
                          BKPRINT8(__VA_ARGS__)
#define BKPRINT10(v1, ...) BKPRINT1(v1); \
                           BKPRINT9(__VA_ARGS__)
#define GET_PRINT(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, name, ...)    name
#define bkprint(...) GET_PRINT(__VA_ARGS__, \
        BKPRINT10, BKPRINT9, BKPRINT8, BKPRINT7, BKPRINT6, BKPRINT5, \
         BKPRINT4, BKPRINT3, BKPRINT2, BKPRINT1)(__VA_ARGS__)
#define bkprintn(...) bkprint(__VA_ARGS__, "\n")

static inline void bkprint_int(bkint val) {
  printf("%ld", val);
}

static inline void bkprint_real(bkreal val) {
  printf("%.2f", val);
}

static inline void bkprint_string(bkchar *val) {
  printf("%s", val);
}

static inline void bkprint_char(bkchar val) {
  printf("%c", val);
}

static inline void bkline(bkchar *s) {
  scanf("%[^\n]%*c", s);
}

static inline void bkword(bkchar *s) {
  scanf("%s", s);
}

static inline void bkline_clean() {
  while (getchar() != '\n') ;
}
#endif  //BKC_H_