#include<stdio.h>

int main(){
    int i = 345;
    int *ptr;
    int **ptr_ptr;

    ptr = &i;           // ptr ar modhe i ar address aaachee
    ptr_ptr= &ptr;      // ptr_ptr ar modhe ptr ar address aache

    printf("The value of i is %d", **ptr_ptr);    //......(1)
    return 0;
}

// ....(1) no line 
//  **ptr_ptr = **(&ptr) = *(&i) = 345