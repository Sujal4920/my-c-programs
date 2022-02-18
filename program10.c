#include<stdio.h>
#include <math.h>
int main()
{
    int n,arm,temp,x,o,y=0,count=0,z;
    printf("Enter any number : ");
    scanf("%d",&n);
    arm=n;
    temp=n;
    while(n>0)
    {
      x=n%10;
      count=count+1;
      n=n/10;
    }
    while(temp>0)
    {
        z=temp%10;
        y=y+pow(z,count);
        temp=temp/10;
    }
    if(arm==y)
    {
        printf("The number %d is an armstrong number ",y);
    }
    else
       printf("The entered number is not an armstrong number.");

    return 0;
}
