#include<stdio.h> 
#include<stdlib.h> 

int main(){
    int *ptr; 
    ptr = (int *) calloc(6, sizeof(int)); 
    
    for(int i=0; i<6;i++){
        printf("The value of %d element is: %d\n", i, ptr[i]); 
    }

    free(ptr); 

    ptr = (int *) calloc(2, sizeof(int)); 
    for(int i=0; i<2;i++){
        printf("The value of %d element is: %d\n", i, ptr[i]); 
    }

    return 0;
}