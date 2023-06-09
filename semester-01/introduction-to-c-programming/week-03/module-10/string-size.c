#include <stdio.h>

int main()
{
    char a[5];
    int b[3];
    int asize = sizeof(a) / sizeof(char);
    // sizeof(char)=1byte
    int bsize = sizeof(b) / sizeof(int);
    // sizeof(int)=4byte
    printf("%d\n", asize);
    printf("%d\n", bsize);
    return 0;
}