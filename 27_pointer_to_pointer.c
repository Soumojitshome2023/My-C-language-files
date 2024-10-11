#include <stdio.h>

int main()
{
    int i = 345;
    int *ptr;
    int **ptr_ptr;

    ptr = &i;
    ptr_ptr = &ptr;

    printf("The value of i is %d", **ptr_ptr); //......(1)
    return 0;
}

// ....(1) no line
//  **ptr_ptr = **(&ptr) = *(&i) = 345