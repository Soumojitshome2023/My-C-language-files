#include <stdio.h>
#include <ctype.h>

int main()
{

    int var1 = 'D';
    int var2 = '2';
    int var3 = 'a';
    int var4 = ' ';

    if (isalpha(var1))
    {
        printf("\n var1 = |%c| is alphabet\n", var1);
    }
    else
    {
        printf("\n var1 =|%c| is not alphabet\n", var1);
    }

    if (isalpha(var2))
    {
        printf("\n var2 = |%c| is alphabet\n", var2);
    }
    else
    {
        printf("\n var2 =|%c| is not alphabet\n", var2);
    }

    if (isalpha(var3))
    {
        printf("\n var3 = |%c| is alphabet\n", var3);
    }
    else
    {
        printf("\n var3 =|%c| is not alphabet\n", var3);
    }

    if (isalpha(var4))
    {
        printf("\n var4 = |%c| is alphabet\n", var4);
    }
    else
    {
        printf("\n var4 =|%c| is not alphabet\n", var4);
    }
}