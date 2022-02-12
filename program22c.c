#include <stdio.h>

int main()
{
    int n, i, j, k;
    printf("Enter a number: ");
    scanf("%d", &n);
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
    return 0;
}
