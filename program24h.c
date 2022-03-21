//Recursive and non-Recursive program for finding sum of first 25 natural number
#include <stdio.h>
void sumf(int n)
{
    int i,sum=0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Using Non-recursive the sum is: %d\n", sum);
}
int sumrec(int num)
{
    if (num == 0)
        return (num);
    else
        return num + sumrec(num - 1);
}
int main()
{
    int n = 25,m,s;
    m=25;
    sumf(n);
    s=sumrec(m);
    printf("Using recursion the sum is: %d",s);
    return 0;
}