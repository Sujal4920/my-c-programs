//program to move positive to one side and negative to other side in an array
#include <stdio.h>
#define N 6
int main()
{
    int a[N],i,j,temp;
    printf("Enter %d values in an array:\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<N;i++)
    {
       temp=a[i];
       if(temp<0)
       {
           j=i-1;

           while(j>=0 && a[j]>=0)
           {
               a[j+1] = a[j];
               j--;
           }
           a[j+1]=temp;
       }

    }
    printf("The entered values are:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d  ", a[i]);
    }
    return 0;
}