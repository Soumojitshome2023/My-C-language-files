#include <stdio.h>

int main()
{
    int a = 4;
    float b = 8.5;
    char c = 'u';
    int d = 45;
    int e = 45 + 4;

    float f = 9.365897;

    printf("The value of a is %d \n", a);
    printf("The value of b is %f \n", b);
    printf("The value of c is %c \n", c);
    printf("Sum of a and d is %d \n", a - d);
    printf("Sum of a and d is %d \n", e);

    printf("The value of f is %f \n", f);
    printf("The value of f is %0.2f \n", f);

    return 0;
}