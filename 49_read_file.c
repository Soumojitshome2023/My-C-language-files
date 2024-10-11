#include <stdio.h>

int main()
{
    FILE *fptr;
    int num;

    fptr = fopen("soumojit.txt", "r"); // open file

    fscanf(fptr, "%d", &num); // Copy the value of soumojit.txt to num

    fclose(fptr); // close file

    printf("The value of num is %d\n", num);

    return 0;
}