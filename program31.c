//Using pointer find smallest in an array
#include <stdio.h>
#define N 25
int main()
{
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, -2, 34, 65, 2, 3, 24, 25, 17, 18, 19, 20, 54, 37, 89, 90, 74};
    int i, *small;
    small = &a[0];
    for (i = 0; i < N; i++)
    {
        if (*small > a[i])
            *small = a[i];
    }
    printf("The element %d is smallest.", *small);
    return 0;
}