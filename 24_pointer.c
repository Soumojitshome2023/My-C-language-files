#include <stdio.h>

int main()
{
    int i = 34;

    int *j = &i; //   j will now store the address of i, *j store value of i

    printf("The value of i is %d\n", i);  // print the value of i (34)
    printf("The value of i is %d\n", *j); // print the value of i (34)

    printf("The address of i is %u\n", &i); // print the address of i
    printf("The address of i is %u\n", j);  // print the address of i

    printf("The address of j is %u\n", &j);  //  print the address of j
    printf("The value of j is %u\n", *(&j)); //  print the value of j, mean address of i

    return 0;
}

// Note:
//  &i mean address of i
//  &j mean address of j