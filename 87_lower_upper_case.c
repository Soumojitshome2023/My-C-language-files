#include <stdio.h>
#include <ctype.h>

int main()
{
    char alphabet;
    printf("Enter an alphabet : ");
    scanf("%c", &alphabet);

    if (islower(alphabet))
        printf("Reverse case of %c is : %c ", alphabet, toupper(alphabet));

    else if (isupper(alphabet))
        printf("Reverse case of %c is : %c ", alphabet, tolower(alphabet));

    return 0;
}