#include <stdio.h>

int main()
{
    int b = 4;

    printf("%d \n", b);     // print the value of b
    printf("%u \n", &b);    // print the address of b
    printf("%d \n", *(&b)); // print the value of b

    return 0;
}
