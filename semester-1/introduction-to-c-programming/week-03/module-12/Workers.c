#include <stdio.h>

int main()
{
    int a, b, d;
    scanf("%d %d %d", &a, &b, &d);
    d = (d * a) / b;
    printf("%d", d);
    return 0;
}