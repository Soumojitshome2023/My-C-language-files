#include <stdio.h>
#include <math.h>
// only for this type equations aX^3 + bX^2 + cX + d = 0
int main()
{
    float a, b, c, d, x, equ, xcube, xsqu;
    int i = 0;

    printf("Equations type : aX^3 + bX^2 + cX + d = 0 \n");
    printf("Enter coefficients a, b, c and d: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    for (x = -50; x < 50; x++)
    {
        xcube = pow(x, 3);
        xsqu = pow(x, 2);
        equ = ((a * xcube) + (b * xsqu) + (c * x) + d);

        if (equ == 0)
        {

            printf("Root %d is : %0.2f\n", ++i, x);
        }
    }
    return 0;
}