#include <stdio.h>
// Sum of Positive and negative numbers of an array (separately stored in different variables)

int main()
{
    int n, i, sum_neg = 0,sum_posi=0;
    ;
    printf("Enter size of array : ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter number for index %d :", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            sum_neg += arr[i];
        
        else if (arr[i] > 0)
            sum_posi += arr[i];
        
    }

printf("Sum of positive num = %d\n", sum_posi);
printf("Sum of negetive num = %d\n", sum_neg);


    return 0;
}