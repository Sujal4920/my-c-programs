// Recursive and non-Recursive program for finding a number is armstrong or not
#include <stdio.h>
#include <math.h>
int y = 0;
void armf(int n, int c)
{
    int x = 0, arm;
    arm = n;
    while (n != 0)
    {
        x = x + pow(n % 10, c);
        n = n / 10;
    }
    if (arm == x)
    {
        printf("Using Non-recursive fun The number %d is armstrong\n", x);
    }
    else
        printf("Using Non-recursive fun Not an armstrong\n");
}
int armrec(int n, int c)
{

    if (n == 0)
        return (n);
    else
        y = y + pow(n % 10, c);
    armrec(n / 10, c);
    return (y);
}
int main()
{
    int n, m, o, count = 0, rev, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    m = n;
    o = n;
    while (n != 0)
    {
        rev = n % 10;
        count++;
        n = n / 10;
    }
    armf(o, count);
    r = armrec(m, count);
    if (m == r)
    {
        printf("Using recursive fun the number %d is armstrong", r);
    }
    else
        printf("Using recursive fun the number is not armstrong");

    return 0;
}