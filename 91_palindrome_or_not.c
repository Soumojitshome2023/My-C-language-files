#include <stdio.h>
int main()
{
   int a, b, c, s = 0;

   printf("Enter a number: ");
   scanf("%d", &a);
   c = a;

   // the number is reversed inside the while loop.
   while (a > 0)
   {
      b = a % 10;
      s = (s * 10) + b;
      a = a / 10;
   }

   // here the reversed number is compared with the given number.
   if (s == c)
   {
      printf("The number %d is a palindrome", c);
   }
   else
   {
      printf("The number %d is not a palindrome", c);
   }
}