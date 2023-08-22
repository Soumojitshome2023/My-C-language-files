#include<stdio.h>

int main(){
    FILE *fptr;
    int number = 45;

    fptr = fopen("generate.txt", "w");     // open file

    fprintf(fptr, "The number is %d\n", number);
    fprintf(fptr, "Thanks for using fprintf");
    
    fclose(fptr);                // close file

    return 0;
}