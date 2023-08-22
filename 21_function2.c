#include<stdio.h>

void pqr(int *a);

int main(){
    int x=3;
       
    pqr(&x); // x ar address ta k function-a send kore debe

    return 0;
}

void pqr(int *a){      // akhane a mane x ar address..  *a mane x ar address ar value 
                        // &x = a
    printf("%u", a); 
}