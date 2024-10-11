#include <stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("putcdemo.txt", "w");

    putc('H', ptr);
    putc('I', ptr);
    putc('I', ptr);

    fclose(ptr);
    return 0;
}