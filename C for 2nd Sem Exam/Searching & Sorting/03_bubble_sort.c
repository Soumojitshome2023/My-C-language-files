#include<stdio.h>
void bubble(int arr[],int size){

    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
    

}
int main(){
    int arr[10]={10,5,3,8,1,6,3,6,2};

    int size = sizeof(arr)/sizeof(int);

    bubble(arr,size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    

    return 0;
}