/*
  @bangoc 2020
  Ý tưởng của mã nguồn này là để trình biên dịch tự cho biết các đặc
  điểm của các kiểu dữ liệu cơ bản
*/

#include <float.h>
#include <limits.h>
#include <stdio.h>

#define PRI_FLT PRI_FLT_(FLT_DIG)
#define PRI_FLT_(FLT_DIG) PRI_NF(FLT_DIG, "g")
#define PRI_DBL PRI_DBL_(DBL_DIG)
#define PRI_DBL_(DBL_DIG) PRI_NF(DBL_DIG, "lg")
#define PRI_LDBL PRI_LDBL_(LDBL_DIG)
#define PRI_LDBL_(LDBL_DIG) PRI_NF(LDBL_DIG, "Lg")
#define PRI_NF(n, f) "%." #n f

int main() {
  printf("------Các kiểu số nguyên-------\n");
#ifdef __CHAR_UNSIGNED__
  printf("Mặc định không dấu: char = unsigned char\n");
#else
  printf ("Mặc định có dấu: char = signed char\n");
#endif  // __CHAR_UNSIGNED__
  printf("Các đặc điểm - min, max: \n");
  printf("char      %d, %d\n", CHAR_MIN, CHAR_MAX);
  printf("short     %d, %d\n", SHRT_MIN, SHRT_MAX);
  printf("int       %d, %d\n", INT_MIN, INT_MAX);
  printf("long      %ld, %ld\n", LONG_MIN, LONG_MAX);
  printf("long long %lld, %lld\n", LLONG_MIN, LLONG_MAX);

  printf("-------Các kiểu số thực--------\n");
  printf("Cơ số trong biểu diễn số thực = %d\n", FLT_RADIX);
  printf("Số chữ số của phần mantissa (M):\n");
  printf("float        - %d\n", FLT_MANT_DIG);
  printf("double       - %d\n", DBL_MANT_DIG);
  printf("long double  - %d\n", LDBL_MANT_DIG);

  printf("Phần mũ - min, max:\n");
  printf("float         - %d, %d \n", FLT_MIN_EXP, FLT_MAX_EXP);
  printf("double        - %d, %d \n", DBL_MIN_EXP, DBL_MAX_EXP);
  printf("long double   - %d, %d \n", LDBL_MIN_EXP, LDBL_MAX_EXP);

  printf("Các đặc điểm - min, max, số chữ số dec, epsilon \n");
  printf("float       - " PRI_FLT ", "
      PRI_FLT ", %d, " PRI_FLT "\n", FLT_MIN, FLT_MAX, FLT_DIG, FLT_EPSILON);
  printf("double      - " PRI_DBL ", "
      PRI_DBL ", %d, " PRI_DBL "\n", DBL_MIN, DBL_MAX, DBL_DIG, DBL_EPSILON);
  printf("long double - " PRI_LDBL ", "
      PRI_LDBL ", %d, " PRI_LDBL "\n", LDBL_MIN, LDBL_MAX, LDBL_DIG, LDBL_EPSILON);
  return 0;
}
