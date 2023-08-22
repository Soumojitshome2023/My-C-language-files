/* Bitwise XOR 
_________________________________________________
12 = 00001100 (In Binary)
25 = 00011001 (In Binary)

Bitwise XOR Operation of 12 and 25
  00001100
^ 00011001
  ________
  00010101  = 21 (In decimal)
_________________________________________________*/

#include <stdio.h>

int main() {

    int a = 12, b = 25;
    printf("Output = %d", a ^ b);

    return 0;
}

//Output = 21