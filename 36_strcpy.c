#include<stdio.h>
#include <string.h>

int main(){
    char *st = "This";

    char st2[45];

    strcpy(st2, st);        // st2 ar modhe st copy hoa jabe.

    printf("Now the st2 is %s", st2);
    return 0;
}