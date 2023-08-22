#include<stdio.h>

void swap(int *a, int *b);

int main(){
    int x=3, y=4;
    printf("The value of x and y before swap is %d and %d\n", x, y);
   
    swap(&x, &y); // will work due to call by reference
                    // &x mane address of x, .....(1)
    printf("The value of x and y after swap is %d and %d\n", x, y);

    return 0;
}

void swap(int *a, int *b){      // akhane a mane address of x.  ..(1) no ar jonno ai line e a ar jaigai x ar address aseche  
    int temp;
    temp = *a;      // temp = x = 3
    *a = *b;        // x = y = 4
    *b = temp;      // y = temp = 3
}

//Note:
// &x mane address of x (x ar address)
// &y mane address of y (y ar address)

// address ar value pete * use hoi