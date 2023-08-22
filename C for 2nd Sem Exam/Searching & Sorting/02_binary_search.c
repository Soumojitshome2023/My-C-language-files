#include<stdio.h>
int binary(int arr[],int size,int element){
    int low=0, high =size-1,mid;

    while (high>=low)  
    {
        mid = (low+high)/2;

        if (arr[mid]==element)
            return mid;
        if(element>arr[mid])
            low = mid+1;
        else
            high=mid-1;

        
    }
    
}
int main(){
    int arr[10]={1,4,7,9,11,22,25,33,40};

    int size = sizeof(arr)/sizeof(int);
    int element = 33;
    int result = binary(arr,size,element);

    printf("%d ",result);
 
    

    return 0;
}