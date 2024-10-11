/*
An Armstrong number is a number that is equal to the sum of its digits, each raised to the power of the number of digits in the number:

For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.

*/

#include <stdio.h>

int main()
{
    int n, sum, i, t, a;
    printf("The Armstrong numbers in between 1 to 500 are : ");

    for (i = 1; i <= 500; i++)
    {
        t = i;
        sum = 0;
        while (t != 0)
        {
            a = t % 10;
            sum += a * a * a;
            t = t / 10;
        }

        if (sum == i)
            printf("\t%d", i);
    }

    return 0;
}