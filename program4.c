#include<stdio.h>
int main()
{
    int a,sum=0,x;
    printf("Enter a number : ");
    scanf("%d",&a);
    while(a!=0)
    {
     x=a%10;
     sum=sum+x;
     a=a/10;
     
    }
    printf("The sum of digits is : %d",sum);
    return 0;
}
