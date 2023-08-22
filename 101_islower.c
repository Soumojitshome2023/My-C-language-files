#include <stdio.h>
#include <ctype.h>

int main()
{
    int var1 = 'D';
    int var2 = '2';
    int var3 = 'a';
    int var4 = ' ';

    printf("Range of ASCII values of lowercase character is 97 to 122\n\n");

    if (islower(var1))
    {
        printf("\n var1 = |%c| is lowercase character\n", var1);
    }
    else
    {
        printf("\nvar1 =|%c| is not lowercase character\n", var1);
    }

    if (islower(var2))
    {
        printf("\n var2 = |%c| is lowercase character\n", var2);
    }
    else
    {
        printf("\nvar2 =|%c| is not lowercase character\n", var2);
    }

    if (islower(var3))
    {
        printf("\n var3 = |%c| is lowercase character\n", var3);
    }
    else
    {
        printf("\nvar3 =|%c| is not lowercse character\n", var3);
    }

    if (islower(var4))
    {
        printf("\n var4 = |%c| is a lowercase character\n", var4);
    }
    else
    {
        printf("\nvar4 =|%c| is not a lowercase character\n", var4);
    }

    return 0;
}