#include <stdio.h>

int main()
{
    // char str[] = "Harry";
    char str[] = {'H', 'a', 'r', 'r', 'y', '\0'};

    printf("%s \n", str); // print complete str..

    printf("%u \n", str);  // print the address of 1st char
    printf("%c \n", *str); // print the value of 1st char

    printf("%u \n", str + 1);    // print the address of 2nd char
    printf("%c \n", *(str + 1)); // print the value of 2nd char

    return 0;
}