#include <stdio.h>

int main()
{
    // char str[] = "Harry";
    char str[] = {'H', 'a', 'r', 'r', 'y', '\0'};

    printf("%s \n", str);  // char sob kota value print korbeee..

    printf("%u \n", str);  // char ar 1st valu-r address print hobe (& use korte hoi na)...(2)
    printf("%c \n", *str); // char ar 1st value ta print hobe

    printf("%u \n", str + 1);   // char ar 2nd valu-r address print hobe (& use korte hoi na)    
    printf("%c \n", *(str + 1)); // char ar 2nd value ta print hobe

    return 0;
}

// Note:

// * ---> address ar value pete * use hoi
// ...(2) no line a 
//    &str likte hobena ,because char ar khet-re str dia address bojhano hoi 