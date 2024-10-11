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

    int num = 212, i;

    for (i = 0; i <= 2; ++i)
    {
        printf("Right shift by %d: %d\n", i, num >> i);
    }
    printf("\n");

    for (i = 0; i <= 2; ++i)
    {
        printf("Left shift by %d: %d\n", i, num << i);
    }

    return 0;
}

/* Outputs:

Right Shift by 0: 212
Right Shift by 1: 106
Right Shift by 2: 53

Left Shift by 0: 212
Left Shift by 1: 424
Left Shift by 2: 848

*/