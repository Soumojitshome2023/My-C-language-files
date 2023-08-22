#include <stdio.h>
#include <ctype.h> // to use isgraph() and isprint() method

int main()
{

    int var1 = 'D';
    int var2 = '2';
    int var3 = '\t';
    int var4 = 'Y';

    if (isgraph(var1))
    {
        printf("\n var1 = |%c| can be printed\n", var1);
    }
    else
    {
        printf("\n var1 =|%c| cannot be printed\n", var1);
    }

    if (isprint(var2))
    {
        printf("\n var2 = |%c| can be printed\n", var2);
    }
    else
    {
        printf("\n var2 =|%c| can't be printed\n", var2);
    }

    if (isgraph(var3))
    {
        printf("\n var3 = |%c| can be printed\n", var3);
    }
    else
    {
        printf("\n var3 =|%c| can't be printed\n", var3);
    }

    if (isprint(var4))
    {
        printf("\n var4 = |%c| can be printed\n", var4);
    }
    else
    {
        printf("\n var4 =|%c| can't be printed\n", var4);
    }

    return 0;
}