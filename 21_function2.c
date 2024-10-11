#include <stdio.h>

void pqr(int *a);

int main()
{
    int x = 3;

    pqr(&x);

    return 0;
}

void pqr(int *a)
{
    printf("%u", a);
}