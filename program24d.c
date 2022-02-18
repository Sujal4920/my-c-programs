#include <stdio.h>
int fibrec(int m)
{
    if (m == 1)
        return (0);
    if (m == 2)
        return (1);
    else
        return (fibrec(m - 1) + fibrec(m - 2));
}
int fib(int n)
{
    int i,j=0,k=1,c;
    if(n==1)
    printf("%d",j);
    else if(n==2)
    printf("%d",k);
    else
    printf("%d\t%d\t",j,k);
    for(i=3;i<=n;i++)
    {
       printf("%d\t",c=j+k);
       j=k;
       k=c;
    }
}
int main()
{
    int n = 25, i;
    printf("Using Non-recursive:\n");
    fib(n);
    printf("\n\n");
    printf("Using Recursive:\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\t",fibrec(i));
    }
    return 0;
}