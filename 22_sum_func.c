#include <stdio.h>

// sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b); // function prototype declaration

int main()
{
    int k;

    k = sum(2, 15); // function call
    printf("The value of c is %d\n", k);

    return 0;
}

int sum(int a, int b)
{

    int c;

    c = a + b;

    return c;
}