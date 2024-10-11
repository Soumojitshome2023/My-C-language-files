// Sum_of_digits_of_3_digit_number

#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Enter three digit number : \n");
    scanf("%d", &a);

    if ((a > 99) && (a < 1000))
    {

        b = (a % 10);
        c = ((a - b) / 10);
        d = (c % 10);
        e = ((c - d) / 10);

        printf("%d", b + d + e);
    }
    else
        printf("Invalid");

    return 0;
}