#include <stdio.h>
int main()
{
    int r, c, a[100][100], b[100][100], difference[100][100], i, j;

    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter the element of Row %d and Column %d : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter the element of Row %d and Column %d : ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    // difference two matrices
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            difference[i][j] = a[i][j] - b[i][j];
        }

    // printing the result
    printf("\nDifference of two matrices: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("%d   ", difference[i][j]);
            if (j == c - 1)
            {
                printf("\n\n");
            }
        }

    return 0;
}
