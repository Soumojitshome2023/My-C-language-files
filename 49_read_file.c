#include<stdio.h>

int main(){
    FILE *fptr;
    int num;

    fptr = fopen("raj.txt", "r");        // open file
  
    fscanf(fptr, "%d", &num);        // raj.txt ar data ta num a copy holo

    fclose(fptr);                // close file

    printf("The value of num is %d\n", num);

    return 0;
}