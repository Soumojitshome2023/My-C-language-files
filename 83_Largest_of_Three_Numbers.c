// Largest of Three Numbers
#include <stdio.h>

int main()
{

    float a, b, c;

    printf("Enter 3 numbers: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a >= b && a >= c)
    {

        printf("Largest number = %.3f ", a);
    }
    else if (b >= a && b >= c)
    {
        printf("Largest number is = %.3f", b);
    }
    else
    {
        printf("Largest number is = %.3f", c);
    }

    return 0;
}