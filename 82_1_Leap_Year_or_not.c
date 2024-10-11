// Leap Year Checker
#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year to check if it is a leap year: ");
    scanf("%d", &year);

    /*
     A year is a leap year if:
     1. It is divisible by 4.
     2. If it is divisible by 100, it must also be divisible by 400 to be a leap year.
    */

    // Check if the year is divisible by 4
    if (year % 4 == 0)
    {
        // If the year is divisible by 100, check if it is also divisible by 400
        if (year % 100 == 0)
        {
            // Divisible by 400 means it's a leap year
            if (year % 400 == 0)
                printf("%d is a leap year.\n", year);
            // Not divisible by 400 means it's not a leap year
            else
                printf("%d is not a leap year.\n", year);
        }
        // If not divisible by 100, it's a leap year
        else
            printf("%d is a leap year.\n", year);
    }
    // If not divisible by 4, it's not a leap year
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}
