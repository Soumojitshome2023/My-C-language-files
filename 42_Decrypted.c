#include <stdio.h>
int main()
{
    char c[] = "dpnf!up!uijt!sppn";

    char *ptr = c;

    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }

    printf("Decrypted string is: %s", c);
    return 0;
}