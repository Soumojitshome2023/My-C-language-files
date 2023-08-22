/* Bitwise OR
_____________________________________________
12 = 00001100 (In Binary)
25 = 00011001 (In Binary)

Bitwise OR Operation of 12 and 25
  00001100
| 00011001
  ________
  00011101  = 29 (In decimal)
_____________________________________________*/

#include <stdio.h>

int main() {

    int a = 12, b = 25;
    printf("Output = %d", a | b);

    return 0;
}

// Output = 29