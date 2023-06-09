#include <stdio.h>

int main()
{
    char a[6];
    // windows allocate extra memory for the string size thats why it doesn't show runtime errors or segmentation fault
    // you have to take extra 1 size for the null character
    scanf("%s", &a);
    printf("%s\n", a);
    return 0;
}