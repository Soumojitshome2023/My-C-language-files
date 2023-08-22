#include<stdio.h>
// Sum of digits of a number
int main(){
    long long int num,sum=0,lstdig;

    printf("Enter num : ");
    scanf("%lld", &num);

    while(num !=0)
    {
        lstdig = num%10;
        num /=10;
        sum += lstdig;

    }
    printf("Sum of digit : %d", sum);
    
    return 0;
}