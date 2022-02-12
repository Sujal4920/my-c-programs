#include<stdio.h>
int main()
{
    int a,b,x=0;
    printf("Enter a Four digit number: ");
    scanf("%d",&a);
    while(a!=0) 
    { 
      b=a%10;
      x=(x*10)+b;
      a=a/10;
    };
    printf("The reverse of number is : %d",x);
    return 0;
}
