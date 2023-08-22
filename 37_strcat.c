#include<stdio.h>
#include <string.h>

int main(){
    char st1[45] = "Hello";
    char *st2 = "Harry";

    strcat(st1, st2); // st1 ar vitor st2 add hoa gecge.. 

    printf("Now the st1 is %s", st1);
    return 0;
}