#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);
    int a[size], sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    if (sum < 0)
    {
        sum = sum * -1;
    }
    printf("%d\n", sum);

    return 0;
}