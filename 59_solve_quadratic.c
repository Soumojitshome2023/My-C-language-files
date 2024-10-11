#include <math.h>
#include <stdio.h>

int main()
{
    float a, b, c, discriminant, realPart, imaginaryPart, root1, root2;

    // Input coefficients
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = (b * b) - (4 * a * c);

    // Condition for real and distinct roots
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2f and root2 = %.2f\n", root1, root2);
    }
    // Condition for real and equal roots
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2f\n", root1);
    }
    // Condition for complex roots
    else
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2f + %.2fi and root2 = %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
