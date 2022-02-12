#include <stdio.h>
int main()
{
    int arr[50][50],n,m,i,j;
    printf("Enter size of row and colums:\n");
    scanf("%d%d",&n,&m);
    printf("Enter %d elements in an array\n",n*m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Requested %d * %d matrix is\n",n,m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf(" %d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of this  %d * %d matrix is\n",n,m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           printf(" %d\t",arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}