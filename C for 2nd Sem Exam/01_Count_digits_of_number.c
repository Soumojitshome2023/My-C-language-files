#include<stdio.h>
// Count the digits of a number.

int main(){
    long long int num,count=0;

    printf("Enter num : ");
    scanf("%lld", &num);

    while(num !=0)
    {
        num = num/10;
        count ++;

    }
    printf("Number of digit : %d", count);
    
    return 0;
}