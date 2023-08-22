#include <stdio.h>

int main()
{
    int num = 0;
    printf("Enter number of terms : ");
    scanf("%d", &num);

    int a, b, c, i = 3;
    a = 0;
    b = 1;
    if (num == 1)
        printf("%d", a);

    else if (num >= 2)
        printf("%d\t%d", a, b);

    while (i <= num)
    {
        c = a + b;
        printf("\t%d", c);
        a = b;
        b = c;
        i++;
    }
    return 0;
}

/*
Ex:
Enter number of terms : 6
output:
0 	1	1	2	3	5
*/