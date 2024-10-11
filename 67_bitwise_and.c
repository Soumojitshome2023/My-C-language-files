/* Bitwise AND
______________________________________________
12 = 00001100 (In Binary)
25 = 00011001 (In Binary)

Bit Operation of 12 and 25
  00001100
& 00011001
  ________
  00001000  = 8 (In decimal)
______________________________________________*/

#include <stdio.h>

int main()
{

  int a = 12, b = 25;
  printf("Output = %d", a & b);

  return 0;
}

// Output = 8