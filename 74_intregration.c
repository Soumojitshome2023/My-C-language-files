#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, n;
    float e, f, g, h, final_degree, initial_degree, final_radian, initial_radian;
    char function;
    const float PI = 3.141592653589793238;

    printf("Enter function without power : ");
    scanf("%s", &function);

    if (function == 'x')
    {
        printf("Enter Power of x : ");
        scanf("%d", &n);
        printf("Enter initial limit : ");
        scanf("%d", &b);
        printf("Enter final limit : ");
        scanf("%d", &a);

        c = pow(a, n + 1);
        d = pow(b, n + 1);
        e = ((float)(c - d) / (n + 1));

        printf("value of intregration is : %0.2f \n", e);
    }

    else if (function == 's')
    {
        printf("Enter Power of sin : ");
        scanf("%d", &n);
        printf("Enter initial limit in degree : ");
        scanf("%f", &initial_degree);
        printf("Enter final limit in degree : ");
        scanf("%f", &final_degree);

        initial_radian = (initial_degree * (PI / 180.0));
        final_radian = (final_degree * (PI / 180.0));

        f = cos(final_radian);
        g = cos(initial_radian);
        e = ((-1) * (f - g));

        printf("value of intregration is : %0.2f \n", e);
    }

    else if (function == 'c')
    {
        printf("Enter Power of cos : ");
        scanf("%d", &n);
        printf("Enter initial limit in degree : ");
        scanf("%f", &initial_degree);
        printf("Enter final limit in degree : ");
        scanf("%f", &final_degree);

        initial_radian = (initial_degree * (PI / 180.0));
        final_radian = (final_degree * (PI / 180.0));

        f = sin(final_radian);
        g = sin(initial_radian);
        e = (f - g);

        printf("value of intregration is : %0.2f \n", e);
    }


    else
        printf("Enter valid function");

    return 0;
}