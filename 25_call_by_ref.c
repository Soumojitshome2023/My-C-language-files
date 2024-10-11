#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int x = 3, y = 4;
    printf("The value of x and y before swap is %d and %d\n", x, y);

    swap(&x, &y); // will work due to call by reference

    printf("The value of x and y after swap is %d and %d\n", x, y);

    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a; // temp = x = 3
    *a = *b;   // x = y = 4
    *b = temp; // y = temp = 3
}
