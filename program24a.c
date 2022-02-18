#include <stdio.h>
void factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++){
      fact=fact*i;  
    }
    printf("The Factorial of %d by non-recursive : %d\n",n,fact);
}
int factorialrec(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * (factorialrec(n - 1));
    }
    
}
int main()
{
    int n,f;
    printf("Enter a number: ");
    scanf("%d", &n);
    factorial(n);
    f=factorialrec(n);
    printf("The factorial of %d using recursion: %d",n,f);
    return 0;
}