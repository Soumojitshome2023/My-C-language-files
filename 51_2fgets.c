#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("getcdemo.txt", "r+");

    char str[4];

    fgets(str, 6, ptr);
    printf("The string is %s\n", str);


    fclose(ptr);
    return 0;
}
