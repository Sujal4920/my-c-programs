#include<stdio.h>
int main()
{
    int a,b,i;
    long int val=1;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    for(i=0;i<b;i++)
    val=val*a;    
    printf("The result %d to the power of %d is %ld",a,b,val);
    return 0;    
}
