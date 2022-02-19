#include <stdio.h>
#define N 25
int main()
{
    int a[N], i, pos = 0, neg = 0, even = 0, odd = 0, zero = 0;
    printf("Enter %d values in an array:\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The entered values are:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d \n", a[i]);
    }
    for (i = 0; i < N; i++)
    {
        if (a[i] == 0)
        {
        }
        else if (a[i] > 0)
            pos++;
        else
            neg++;

        if (a[i] == 0)
        {
            zero++;
        }
        else if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("positive values are: %d\n", pos);
    printf("negative values are: %d\n", neg);
    printf("even values are: %d\n", even);
    printf("odd values are: %d\n", odd);
    printf("No of Zero values are: %d", zero);
    return 0;
}