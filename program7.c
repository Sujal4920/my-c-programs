//program to reverse a number and check whether it is same to previous or not
#include<stdio.h>
int main()
{
    int a,b,x,rev=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    x=a;
    while(a!=0)
    {
    b=a%10;
    rev=(rev*10)+b;
    a=a/10;
    }
    printf("The number after reverse is:%d\n",rev);
    if(x==rev)
    {
         printf("The number %d and %d are same.",x,rev);
    }
    else
     printf("The number %d and %d are not same.",x,rev);

    return 0;
}