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
        printf("Not prime");
    }
}
int primerec(int n)
{
    if(n==0)
    printf("not prime");
    

}
int main()
{
    int n,r;
    printf("Enter a number: ");
    scanf("%d", &n);
    prime(n);
    r=primerec(n);
    
    return 0;
}