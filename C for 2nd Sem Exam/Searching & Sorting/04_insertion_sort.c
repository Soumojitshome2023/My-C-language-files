#include<stdio.h>
void insertion(int arr[],int size){
    for (int i = 1; i <= size-1; i++)
    {
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;   
        }
        arr[j+1]=key;

        
    }
    
}
int main(){
    int arr[10]={10,5,3,8,1,6,3,6,2};

    int size = sizeof(arr)/sizeof(int);

    insertion(arr,size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}