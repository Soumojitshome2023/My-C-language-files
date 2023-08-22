#include<stdio.h>

int main(){
    
    int row = 6;

    for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j <=row-i; j++)
        {
            printf("\t");
        }
        int num =i;
        for (int k = 1; k <=i; k++)
        {
            printf("%d\t",num);
            num++;
        }
        num--;
        for (int k = 1; k <=i-1; k++)
        {
            num--;
            printf("%d\t",num);
        }
        printf("\n");
        
        
    }
    
    return 0;
}