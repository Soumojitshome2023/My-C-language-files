// swap without 3rd variable
#include <stdio.h>
int main()
{
    int a = 10, b = 15;
    
    a = a+b-(b=a);

    printf("a = %d and b = %d", a, b);
    
    return 0;
}