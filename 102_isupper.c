#include <stdio.h>
#include <ctype.h>

int main()
{

    int var1 = 'D';
    int var2 = 65;
    int var3 = 'a';
    int var4 = 98;

    printf("Range of ASCII values of upper-case characters is 65 to 90\n\n");
    printf("\n\nintegers and characters are interconvertible using the ASCII values.\n\n\nThe only condition is that correct format specifier shall be used \nas per what is desired to be printed.\n\n\nThe characters must be initialized in between single quotes. \' \'\n\n");

    if (isupper(var1))
    {
        printf("\n var1 = |%c| is a upper-case character\n", var1);
    }
    else
    {
        printf("\n var1 =|%c| is not a upper-case character\n", var1);
    }

    if (isupper(var2))
    {
        printf("\n var2 = |%c| is a upper-case character\n", var2);
    }
    else
    {
        printf("\n var2 =|%c| is not a upper-case character\n", var2);
    }

    if (isupper(var3))
    {
        printf("\n var3 = |%c| is a upper-case character\n", var3);
    }
    else
    {
        printf("\n var3 =|%c| is not a upper-case character\n", var3);
    }

    if (isupper(var4))
    {
        printf("\n var4 = |%c| is a upper-case character\n", var4);
    }
    else
    {
        printf("\n var4 =|%c| is not a upper-case character\n", var4);
    }

    return 0;
}