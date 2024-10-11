#include <stdio.h>
// Count the number of digits and alphabets in an String.

int main()
{
    char str[20];
    int num = 0, char_number = 0;
    printf("Enter any string : ");
    scanf("%s", &str);
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] <= '9' && str[i] >= '0')
            num++;
        else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            char_number++;

        i++;
    }

    printf("Number of digit %d\n", num);
    printf("Number of char %d\n", char_number);

    return 0;
}