#include <stdio.h>
int main()
{
    char c[] = "come to this room";

    char *ptr = c;

    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }

    printf("Encrypted string is: %s", c);
    return 0;
}