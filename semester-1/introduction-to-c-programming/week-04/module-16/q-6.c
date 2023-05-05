// #include <stdio.h>

// void increment(int x)
// {
//     x++;
// }

// int main()
// {
//     int num = 20;
//     increment(num);
//     printf("num = %d\n", num); // Output: num = 20
//     return 0;
// }

#include <stdio.h>

void increment(int *x)
{
    (*x)++;
}

int main()
{
    int num = 20;
    increment_(&num);
    printf("num = %d\n", num); // Output: num = 21
    return 0;
}