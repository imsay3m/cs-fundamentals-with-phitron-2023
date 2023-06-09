#include <stdio.h>

int main()
{
    // String Lexicographical Comparison
    // 4 case
    char a[100], b[100];
    scanf("%s %s", a, b);
    for (size_t i = 0;; i++)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("same\n");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("a is minimum\n");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("b is minimum\n");
            break;
        }
        else if (a[i] < b[i])
        {
            printf("a is minimum\n");
            break;
        }
        else if (a[i] > b[i])
        {
            printf("b is minimum\n");
            break;
        }
    }

    return 0;
}