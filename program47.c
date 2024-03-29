//program to sort elements of a 4x4 matrix
#include <stdio.h>
void printarray(int arr[50][50],int n,int m)
{
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[50][50],n,m,i,j,k,l,temp;
    printf("Enter size of row and column:\n");
    scanf("%d%d",&n,&m);
    printf("Enter %d elements in a matrix:\n",n*m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The required %d * %d matrix is:\n",n,m);
    printarray(arr,n,m); 
    printf("The sorted %d * %d matrix is:\n",n,m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        {
            for(k=0;k<n;k++)
            {
                for(l=0;l<m;l++)
                {
                    if(arr[k][l]>arr[i][j])
                    {
                        temp=arr[k][l];
                        arr[k][l]=arr[i][j];
                        arr[i][j]=temp;
                    }
                }
            }
        }
    }
    printarray(arr,n,m); 
    return 0;
}