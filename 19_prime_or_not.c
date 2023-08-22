#include<stdio.h>

int main(){
    // Prime Num = Some whole numbers can only be divided by 1 or the number itself ....
    // Disclaimer: This is not the best method to solve this problem
    int n = 45, prime=1;

    for(int i=2; i<n; i++){

        if (n%i==0 ){
            prime = 0;      // 0 mane false, 1 mane True
            break;
        }
    }
    if (prime==0){
        printf("This is not a prime number");
    }
    else{
        printf("This is a prime number");
    }
    return 0;
}