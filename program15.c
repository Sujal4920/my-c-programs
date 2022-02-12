#include<stdio.h>
int main()
{
    int i,x,r,y;
    printf("The armstrong numbers between 1 and 500 are:\n ");
    for(i=1;i<=500;i++)
    {   
       y=0;
       x=i;
      while(x>0)
      {
        r=x%10;
        y=y+r*r*r;
        x=x/10;
      }
      if(y==i)
      printf("%d\n",i);
    }
    return 0;
}