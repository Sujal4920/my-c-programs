#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
        if(n%i==0)
        break;
      if(i==n)  
       {
        printf("The number is a prime");
       }
        else
        printf("The number is not a prime.");
    
    return 0;
}