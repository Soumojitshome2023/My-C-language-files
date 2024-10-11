#include <stdio.h>
int main()
{
    char string[10];
    printf("Enter the String: ");
    gets(string);

    printf("\n%s", string);
    return 0;
}