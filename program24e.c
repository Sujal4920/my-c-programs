//Recursive and non-Recursive program for finding sum of digits
#include <stdio.h>
//int sum = 0;
void sumf(int m)
{
    int sum=0;
    while (m != 0)
    {
        sum = sum + (m % 10);
        m = m / 10;
    }
    printf("Using Non-recursive the sum of digits is: %d", sum);
}
int sumrec(int m)
{
    int sum=0;
    if (m == 0)
        return (sum);
    else
    {
        sum = sum + (m % 10);
        sumrec(m / 10);
        return (sum);
    }
}
int main()
{
    int n,m,s;
    m=n;
    printf("Enter a number: ");
    scanf("%d", &n);
    sumf(n);
    printf("\n");
    s = sumrec(m);
    printf("Using recursion the sum of digit is: %d", s);
    return 0;
}