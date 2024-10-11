#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 8;

    printf("The value of a + b is: %d\n", a + b);
    printf("The value of a - b is: %d\n", a - b);
    printf("The value of a * b is: %d\n", a * b);
    printf("The value of a / b is: %d\n", a / b);

    printf("The value of 5 / 2 is: %0.2f\n", (float)5 / 2);

    printf("5 when divided by 2 leaves a remainder of %d\n", 5 % 2);

    printf("The value of 2 to the power 5 is %f\n", pow(2, 5));

    printf("The value root 4 is %f\n", sqrt(4));

    return 0;
}