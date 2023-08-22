#include<stdio.h>

int main(){
    
    // int abc = 4;
    extern int abc;

    printf("%d", abc);
    
    return 0;
}
int abc = 6;