#include<stdio.h>

int main(){
    int a=6;

    printf("The value of variable a is %d\n", a);  // Print the value of a

    printf("The address of variable a is %u\n", &a); //Print address of a
    
    printf("The value of variable a is %u\n", *(&a)); // Print the value of a
    return 0;
}

//Note:
// &a mean address of a

// *(&a) mean print the value which at address &a (address)

// * used to obtain the value of any addresses 