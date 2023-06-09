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
    int i = row - 1;

    for (size_t j = 0; j < col; j++)
    {
        printf("%d ", arr[i][j]);
    }
    printf("\n");
    int j = col - 1;
    for (size_t i = 0; i < row; i++)
    {
        printf("%d ", arr[i][j]);
    }
    printf("\n");

    return 0;
}