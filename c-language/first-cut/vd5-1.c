#include <stdio.h>
int main()
{
  int s = 0;
  {
    int s = 100;
    {
      int s = 202;
      printf("s = %d\n", s);
    }
    printf("s = %d\n", s);
  }
  printf("s = %d\n", s);
  return 0;
}