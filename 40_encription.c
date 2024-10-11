#include <stdio.h>

int main()
{
    char c[] = "Raj";

    *c = *c + 1;

    printf("Encrypted string is: %s", c);
    return 0;
}