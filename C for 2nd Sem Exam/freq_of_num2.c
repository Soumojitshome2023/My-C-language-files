#include <stdio.h>

int main()
{
    int frequency = 0, imp_num, b, c = 0, count = 0, flag = 0, i = 0;
    long long num;

    printf("Enter number : ");
    scanf("%lld", &num);

    long long number;
    long long save = num;
    while (num > 0)
    {
        imp_num = num % 10;
        num = num / 10;
        i = i + 1;
        number = save;
        frequency = 0;
        flag = 0;
        while (number > 0)
        {
            b = number % 10;
            number = number / 10;
            if (imp_num == b)
                frequency++;
        }
        number = save;
        for (int j = 1; j < i; j++)
        {

            c = number % 10;
            number = number / 10;
            if (imp_num == c)
                flag = 1;
        }
        if (flag == 0)
            printf("frequency of %d is  : %d\n", imp_num, frequency);
    }

    return 0;
}
