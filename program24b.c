#include <stdio.h>
void prime(int n)
{
    int i;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
            break;
    }
      if (i==n)
    {
        printf("Using Non-Recursive the number %d is prime", n);
    }
    else
    {
        printf("Using Non-Recursive the number %d is Not prime",n);
    }
}
int primerec(int n,int i)
{
   if(i == 1)
        return 1;   
    else
    {
        if(n%i == 0)
            return 0;
        else
         return (primerec(n, i-1));    
    }

}
int main()
{
    int n,r,m;
    printf("Enter a number: ");
    scanf("%d", &n);
    m=n;
    prime(n);
    r = primerec(m, m/2);
    if(r == 1)
    {
        printf("\nUsing recursive the number %d is prime\n", m);
    }
    else
    {
        printf("\nUsing recursive the number %d is not prime\n", m);
    }
    return 0;
}