#include <stdio.h>
// input string without gets
int main()
{
    char str[100];
    printf("enter : ");

    scanf("%[^\n]s", str);
    // or,
    // scanf("%[^\n]%*c", str);

    printf("%s", str);
    return 0;
}

