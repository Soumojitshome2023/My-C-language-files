#include<stdio.h>
void selection(int arr[],int size){
    int i,j;
    for (i = 0; i < size-1; i++)
    {
        int min_index = i;
        for (j = i+1; j <size; j++)
        {
            if(arr[min_index]>arr[j])
                min_index=j;
        }

        if(min_index!=i){
            int temp = arr[min_index];
            arr[min_index] = arr[i];
            arr[i]=temp;
        }
    }
    
}
int main(){
    int arr[10]={10,5,3,8,1,6,3,6,2};

    int size = sizeof(arr)/sizeof(int);

    selection(arr,size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}