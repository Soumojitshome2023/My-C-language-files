#include <stdio.h>
int linear(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
            return i;
    }
}
int main()
{
    int arr[10] = {10, 5, 3, 8, 1, 6, 3, 6, 2};

    int size = sizeof(arr) / sizeof(int);
    int element = 8;
    int result = linear(arr, size, element);

    printf("%d ", result);

    return 0;
}