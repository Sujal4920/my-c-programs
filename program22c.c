//program for patterns with alphabets
#include <stdio.h>
void halfalpha1(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j < i + 1)
                printf("%c", 64 + i);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void halfalpha2(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j >= (n + 1) - i)
                printf("%c", 64 + i);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void halfalpha3(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= n + 1 - i)
                printf("%c", 64 + i);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void halfalpha4(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j >= i)
                printf("%c", 64 + i);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void pyramidalpha(int n)
{
    int i, j, k;
    for (i = 1; i <= n; i++)
    {
        k = 1;
        for (j = 1; j <= (2 * n) - 1; j++)
        {
            if (j >= (n - i) + 1 && j <= (n + i) - 1)
            {
                printf("%c", 64 + k);
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
    halfalpha1(n);
    printf("\n");
    halfalpha2(n);
    printf("\n");
    halfalpha3(n);
    printf("\n");
    halfalpha4(n);
    printf("\n");
    pyramidalpha(n);
    return 0;
}
