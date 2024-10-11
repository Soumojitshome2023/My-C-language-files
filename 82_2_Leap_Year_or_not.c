#include <stdio.h>

int main()
{
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   /*
    A year is a leap year if:
    1. It is divisible by 400 (e.g., 1600, 2000 are leap years).
    2. It is divisible by 4 but not by 100 (e.g., 1996, 2004 are leap years).
    Any other year is not a leap year.
   */

   // Check if the year is divisible by 400 (leap year)
   if (year % 400 == 0)
   {
      printf("%d is a leap year.\n", year);
   }
   // If not divisible by 400, check if it is divisible by 100 (not a leap year)
   else if (year % 100 == 0)
   {
      printf("%d is not a leap year.\n", year);
   }
   // If not divisible by 100, check if it is divisible by 4 (leap year)
   else if (year % 4 == 0)
   {
      printf("%d is a leap year.\n", year);
   }
   // All other years are not leap years
   else
   {
      printf("%d is not a leap year.\n", year);
   }

   return 0;
}
