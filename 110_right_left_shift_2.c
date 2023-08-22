/*
___________________________________________________________________
Right Shift Operator:

212 = 11010100 (In binary)
212 >> 2 = 00110101 (In binary) [Right shift by two bits]
212 >> 7 = 00000001 (In binary)
212 >> 8 = 00000000
212 >> 0 = 11010100 (No Shift)


Left Shift Operator:

212 = 11010100 (In binary)
212<<1 = 110101000 (In binary) [Left shift by one bit]
212<<0 = 11010100 (Shift by 0)
212<<4 = 110101000000 (In binary) =3392(In decimal)

______________________________________________________________________*/

#include <stdio.h>

int main()
{

    printf("Right shift by %d: %d\n", 1, 8 >> 1);
    // 8 ÷ (2 to the power 1) = 4

    printf("Right shift by %d: %d\n", 2, 8 >> 2);
    // 8 ÷ (2 to the power 2) = 2

    printf("Left shift by %d: %d\n", 1, 8 << 1);
    // 8 × (2 to the power 1) = 16

    printf("Left shift by %d: %d\n", 2, 8 << 2);
    // 8 × (2 to the power 2) = 32

    return 0;
}

/* Outputs:

Right shift by 1: 4
Right shift by 2: 2
Left shift by 1: 16
Left shift by 2: 32

*/