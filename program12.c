#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     {
         fact=fact*i;
     }
    printf("The factorial of the enterde number is:%d",fact);
    return 0;
}