#include <stdio.h>
int d(int sum, int x, int y, int z)
{
    int d = (sum - (x + y + z));
    return d;
}

int main()
{
    int t, sum, a, b, c;
    scanf("%d", &t);
    for (size_t i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &sum, &a, &b, &c);
        int result = d(sum, a, b, c);
        printf("%d\n", result);
    }

    return 0;
}