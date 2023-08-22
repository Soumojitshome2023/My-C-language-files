#include<stdio.h>

int main(){
    int i = 34;

    int *j = &i;  //   j will now store the address of i, *j store value of i 
                 //   &i mane address of i (i ar address)
                //   *j use kora hoi &i address a ja value(memorie) aache seta obtain korte
    printf("The value of i is %d\n", i); // i ar value print hobe. (34)
    printf("The value of i is %d\n", *j);// i ar value print hobe. (34)

    printf("The address of i is %u\n", &i); // i ar address print hobe.
    printf("The address of i is %u\n", j); //  i ar address print hobe.

    printf("The address of j is %u\n", &j); // j ar address print hobe.
    printf("The value of j is %u\n", *(&j)); // j ar value print hobe.

    return 0;
}

//Note:
// &i mane address of i (i ar address)
// &j mane address of j (j ar address)
// *(&j) mane &j ar address a je value ta aache seta obtain korte chai. 
// address ar value pete * use hoi