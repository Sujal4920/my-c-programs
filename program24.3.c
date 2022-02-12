#include <stdio.h>
int prime(int n)
{
    int i;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
            break;
    }
      if (i==n)
    {
        printf("The number %d is prime", n);
    }
    else
    {
        printf("Not prime");
    }

    return 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    prime(n);
    return 0;
}