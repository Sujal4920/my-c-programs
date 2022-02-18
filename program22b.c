#include <stdio.h>
void halfnum1(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j < i + 1)
                printf("%d", i);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void halfnum2(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j >= (n + 1) - i)
                printf("%d", i);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void halfnum3(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= n + 1 - i)
                printf("%d",i);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void halfnum4(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j >= i)
                printf("%d",i);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void pyramidnum(int n)
{
    int i, j, k;
    for (i = 1; i <= n; i++)
    {
        k = 1;
        for (j = 1; j <= (2 * n) - 1; j++)
        {
            if (j >= (n - i) + 1 && j <= (n + i) - 1)
            {
                printf("%d", k);
                j < n + 1 / 2 ? k++ : k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    halfnum1(n);
    printf("\n");
    halfnum2(n);
    printf("\n");
    halfnum3(n);
    printf("\n");
    halfnum4(n);
    printf("\n");
    pyramidnum(n);
    return 0;
}
