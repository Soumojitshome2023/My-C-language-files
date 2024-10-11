#include <stdio.h>

int main()
{

abc:
    printf("Hello 1 \n");
    goto pqr;

    printf("Hello 2 \n");

pqr:
    printf("Hello 3 \n");

    return 0;
}