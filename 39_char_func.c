#include<stdio.h>
void abc(char *st){

    printf("2: %u\n", st); // char ar 1st valu-r address print hobe
    
    printf("3: %c \n", *st);   // char ar 1st value ta print hobe
}

int main(){
    char st[] = "soumojit";

    printf("1: %u\n", st);  // char ar 1st valu-r address print hobe
    
    abc(st);        // Function Call  important line

    return 0;
}