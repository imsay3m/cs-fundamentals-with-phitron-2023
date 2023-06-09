#include <stdio.h>

int main()
{
    int row, col, flag = 1;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    if (row != col)
    {
        flag = 0;
    }
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != arr[0][0])
                {
                    flag = 0;
                }
                continue;
            }
            if (arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    if (flag)
    {
        printf("Scaler matrix\n");
    }
    else
    {
        printf("Not Scaler matrix\n");
    }

    return 0;
}