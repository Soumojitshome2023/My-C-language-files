#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("getcdemo.txt", "r+");

    fputs("Hello Guys",ptr);



    fclose(ptr);
    return 0;
}
