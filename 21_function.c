#include<stdio.h>

void display(); // Function prototype

int main(){

    printf("Line 1\n");

    display(); // Function Call

    printf("Line 3\n");
    return 0;
}

// Function definition
void display(){

    printf("Line 2\n"); 
}