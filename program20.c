//program to print all combination's of 1,2and 3
#include<stdio.h>
int main()
{
    int i,n,m;
    printf("The combination of 1 , 2 and 3 are:\n");
    for(i=1;i<=3;i++)
    {
        for(n=1;n<=3;n++)        
        {
            for(m=1;m<=3;m++)
            printf("%d %d %d\n",i,n,m);
        }
    }
    return 0;
}