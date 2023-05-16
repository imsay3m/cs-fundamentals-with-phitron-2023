#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int exactRow, exactCol;

    printf("Enter Exact Row: ");
    scanf("%d", &exactRow);

    for (size_t j = 0; j < col; j++)
    {
        printf("%d ", arr[exactRow - 1][j]);
    }
    printf("\n");

    printf("Enter Exact Column: ");
    scanf("%d", &exactCol);

    for (size_t i = 0; i < row; i++)
    {
        printf("%d\n", arr[i][exactCol - 1]);
    }
    return 0;
}