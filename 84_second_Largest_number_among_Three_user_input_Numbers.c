// The second Largest number among Three user input Numbers
#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter 3 numbers:\n");
    scanf("%f %f %f", &a, &b, &c);

    // a is the largest
    if (a >= b && a >= c)
    {
        if (b >= c)
        {

            printf("%.2f is the 2nd largest number\n", b);
        }
        else
        {
            printf("%.2f is the 2nd largest number\n", c);
        }
    }
    else if (b >= a && b >= c)
    {
        if (a >= c)
        {
            printf("%.2f is the 2nd largest number\n", a);
        }
        else
        {
            printf("%.2f is the 2nd largest number\n", c);
        }
    }

    // c is the largest number of the three
    else if (c >= a && c >= b)
    {
        if (a >= b)
            printf("%.2lf is the 2nd largest number\n", a);
        else
        {
            printf("%.2lf is the 2nd largest number\n", b);
        }
    }

    return 0;
}