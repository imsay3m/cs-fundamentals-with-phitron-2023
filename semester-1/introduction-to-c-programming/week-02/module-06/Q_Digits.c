#include <stdio.h>

int main()
{
    int num, r, temp;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        scanf("%d", &temp);
        do
        {
            r = temp % 10;
            printf("%d ", r);
            temp = temp / 10;
        } while (temp != 0);
        printf("\n");
    }
    return 0;
}