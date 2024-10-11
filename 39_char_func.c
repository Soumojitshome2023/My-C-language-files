#include <stdio.h>
void abc(char *st)
{

    printf("2: %u\n", st);

    printf("3: %c \n", *st);
}

int main()
{
    char st[] = "soumojit";

    printf("1: %u\n", st);

    abc(st);

    return 0;
}