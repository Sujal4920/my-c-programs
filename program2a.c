#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    printf("Numbers before swap: %d and %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Number after swap are: %d and %d",a,b);
    return 0;
}