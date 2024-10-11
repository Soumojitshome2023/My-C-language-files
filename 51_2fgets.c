#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("getcdemo.txt", "r+");

    char str[20];

    fgets(str, 20, ptr);
    printf("The string is : %s\n", str);

    fclose(ptr);
    return 0;
}
