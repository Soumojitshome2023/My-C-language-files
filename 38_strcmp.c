#include <stdio.h>
#include <string.h>

int main()
{
    char *st1 = "Hel";
    char *st2 = "Helo";

    int val = strcmp(st1, st2);

    printf("Now the val is %d", val);

    if (val == 0)
        printf("\nstrings are same");
    else
        printf("\nstrings are not same");

    return 0;
}