//Program to count positive,Negative and zeroe's in a series of number 
#include <stdio.h>
int main()
{
    int n,i,pos=0,neg=0,zero=0;
    printf("Enter how many numbers you want to enter: ");
    scanf("%d",&n);
    printf("Now enter number:\n");
    while(n!=0)
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
    printf("The number of zero's are:%d\n",zero);
    return 0;
}