//sum of digits
#include<stdio.h>
int main()
{
    int a,sum=0,rem;
    printf("Enter a number : ");
    scanf("%d",&a);
    while(a!=0)
    {
     rem=a%10;
     sum=sum+rem;
     a=a/10;
    }
    printf("The sum of digits is : %d",sum);
    return 0;
}
