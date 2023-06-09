#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000001];
    int sum = 0;
    scanf("%s", a);
    for (size_t i = 0; i < strlen(a); i++)
    {
        sum += (a[i] - '0');
    }
    printf("%d", sum);
    return 0;
}