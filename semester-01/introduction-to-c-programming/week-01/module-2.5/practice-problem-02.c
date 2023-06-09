#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int add = a + b;
    int sub = a - b;
    int mlt = a * b;
    float dvd = 1.0 * a / b;
    printf("%d + %d = %d\n%d - %d = %d\n", a, b, add, a, b, sub);
    printf("%d * %d = %d\n%d / %d = %0.2f\n", a, b, mlt, a, b, dvd);
    return 0;
}