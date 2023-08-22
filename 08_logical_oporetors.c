#include<stdio.h>

int main(){

    int a = 10;
    int b = 5;
    int c = 2;
    if (b <= a && a >= c)       //  && mane and oporetor
    {
        printf("ok 1 \n");
    }

    if (b <= a || c >= a)       // || mane or oporetor
    {
        printf("ok 2 \n");
    }
    
    if ( !(a <= b))       // ! mane not oporetor
    {
        printf("ok 3 \n");
    }

    return 0;
}