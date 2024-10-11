#include <stdio.h>

int main()
{
    FILE *fptr;
    int number = 143;

    fptr = fopen("generate.txt", "w"); // open file

    fprintf(fptr, "The number is %d\n", number);
    fprintf(fptr, "Today : 11 Oct 2024");

    fclose(fptr); // close file

    return 0;
}