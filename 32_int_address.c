#include<stdio.h>

int main(){
    int b = 4;

    printf("%d \n", b);         // b ar value print hobe
    printf("%u \n", &b);       // b ar address print hobe
    printf("%d \n", *(&b));    // b ar value print hobe. 

    return 0;
}
// Note:

// &b mane address of b (b ar address)
// *(&b) mane &b address a je value ta aache seta obtain korte chai. 

// & ---> address pete & use hoi (& mane address of)
// * ---> address ar value pete * use hoi