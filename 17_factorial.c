#include<stdio.h>

int main(){

    int n = 4, factorial=1;     // factorial of  4 

    for(int i=1; i<=n; i++){
        factorial *=i;
    }
    printf("The value of factorial %d is %d", n, factorial);

    return 0;
}