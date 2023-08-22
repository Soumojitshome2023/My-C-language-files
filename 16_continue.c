#include<stdio.h>

int main(){
    int skip=5, i=0;
    while(i<10){
        i++;
        if(i != skip){   // i ≠ 5 mane joto khun i ≠ 5 toto-khun a ta kaj korbe  
            continue;   // continue mane abar first thek start koro  / ai bar skip kore jao
        }
        else{
            printf("%d\n", i);
        }
    }
    return 0;
}