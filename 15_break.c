#include <stdio.h>

int main()
{
    int a = 0;
    while (a < 10)
    {
        if (a == 6)
        {
            break;
        }

        printf("%d\n", a);

        a++;
    }

    return 0;
}