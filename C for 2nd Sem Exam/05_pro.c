#include <stdio.h>
// Find an alphabet is vowel or consonant

int main()
{
    char alp;

    printf("Enter any alphabet : ");
    scanf("%c", &alp);

    if (alp == 'A' || alp == 'E' || alp == 'I' || alp == 'O' || alp == 'U' || alp == 'a' || alp == 'e' || alp == 'o' || alp == 'u')
    {
        printf("%c is vowel", alp);
    }

    else
    {
        printf("%c is consonant", alp);
    }

    return 0;
}