#include<stdio.h>

int main(){
    int row = 3;

    for (int i = 0; i < row; i++)
    {
        int s = 65;
        for (int j = 0; j <=i; j++)
        {
            
            printf("%c ",s);
            s++;
        }
        printf("\n");
        
    }
    
    return 0;
}