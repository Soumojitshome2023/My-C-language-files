#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("putcdemo.txt", "r+");

    fputs("Soumojit Shome", ptr);

    fclose(ptr);
    return 0;
}
