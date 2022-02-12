#include <stdio.h>
int main()
{
    int n,i,pos=0,neg=0,zero=0;
    printf("Enter how many numbers you want to enter: ");
    scanf("%d",&n);
    printf("Now enter number:\n");
    while(n)
    {
        scanf("%d",&i);
        if(i>0)
        {
            pos++;
        }
        else if(i<0)
        {
           neg++;
        }
        else
        {
            zero++;
        }    
        n--;
    }
    printf("The positive numbers are:%d\n",pos);
    printf("The negatiive number are:%d\n",neg);
    printf("The number of zeroe's are:%d\n",zero);
    return 0;
}