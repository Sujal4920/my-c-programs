//Program to count positive,Negative and zeroe's in a series of number 
#include <stdio.h>
int main()
{
    int n,i,j=1,pos=0,neg=0,zero=0;
    printf("Enter how many numbers you want to enter: ");
    scanf("%d",&n);
    printf("Now enter number:\n");
    while(j<=n)
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
        j++;
    }
    printf("The positive numbers are:%d\n",pos);
    printf("The negatiive number are:%d\n",neg);
    printf("The number of zero's are:%d\n",zero);
    return 0;
}