#include<stdio.h>
int main()
{
    int a,b,c,y;
    printf("Enter age of person A,B and C:\n");
    scanf("%d%d%d",&a,&b,&c);
    y=a;
    if(b<y)
    y=b;
    if(c<y)
    y=c;
    printf("The person with age %d years is youngest",y);
    return 0;
}