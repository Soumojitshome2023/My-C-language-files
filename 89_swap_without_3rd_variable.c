// swap without 3rd variable
#include <stdio.h>
int main()
{
    int a = 10, b = 15;

    // Swap logic
    // a = a + b - (b = a);
    // or
    a = a + b; // Step 1: a now contains the sum of a and b
    b = a - b; // Step 2: b gets the original value of a
    a = a - b; // Step 3: a gets the original value of b

    printf("a = %d and b = %d", a, b);

    return 0;
}