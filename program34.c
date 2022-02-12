#include <stdio.h>
int main()
{
    int arr[50][50],n,m,i,j,larg;
    printf("Enter row and column size:\n");
    scanf("%d %d",&n,&m);
    printf("Enter %d elements in array\n",n*m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe requested %d * %d matrix is:\n",n,m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf(" %d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nThe largest number is:");
     larg=arr[0][0];
    for(i=0;i<n;i++)
    {
        for(j=1;j<m;j++)
        {
           if(larg<arr[i][j])
           larg=arr[i][j];
        }
    }
    printf("%d",larg);
    return 0;
}