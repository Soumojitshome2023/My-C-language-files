#include <stdio.h>

int main()
{

    extern int abc;

    printf("%d", abc);

    return 0;
}
int abc = 6;