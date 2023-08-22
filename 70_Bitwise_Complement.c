/* Bitwise Complement
____________________________________________

35 = 00100011 (In Binary)

Bitwise complement Operation of 35
~ 00100011 
  ________
  11011100  = 220 (In decimal)



2's Complement

 Decimal         Binary           2's complement 
   0            00000000           -(11111111+1) = -00000000 = -0(decimal)
   1            00000001           -(11111110+1) = -11111111 = -256(decimal)
   12           00001100           -(11110011+1) = -11110100 = -244(decimal)
   220          11011100           -(00100011+1) = -00100100 = -36(decimal)


___________________________________________*/

#include <stdio.h>

int main() {

    printf("Output = %d\n", ~35);
    printf("Output = %d\n", ~-12);

    return 0;
}

// Output = -36
// Output = 11
