#include<stdio.h>

int main(){
    int frequency=0,a,count=0;
    long long num;

    printf("Enter numbers : ");
    scanf("%lld", &num);
    int number = num;

    while (num>0){   
        num = num/10;
        count ++;

    }


    int arr[count];
    int i =0;
    
    while (number>0){
        a = number%10;
        number=number/10;
        arr[i] = a;
        i++;
    }
    
    for ( i = 0; i < count; i++){   
        frequency = 0;
        int flag = 0;
        for (int j = 0; j < count; j++){
            if (arr[i]==arr[j])
                frequency++;
            

            for (int k = 0; k < i; k++){
                    if(arr[i]==arr[k])
                        flag=1;            
                }  
        }
        if(flag==0)
                printf("frequencyquency of %d is  : %d\n",arr[i],frequency);    
    }  
    
    return 0;
}