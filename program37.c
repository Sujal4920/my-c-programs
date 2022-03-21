//program to multiply two 3x3 matrix
#include <stdio.h>
void matrixscan(int A[50][50], int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
}
void printmatrix(int A[50][50], int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf(" %d\t", A[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[50][50],mul[50][50],brr[50][50], i, j, k,n, m, o, p,sum=0;
    printf("Enter size of row and column of matrix 1:\n");
    scanf("%d%d", &n, &m);
    printf("Enter %d elements in matrix 1:\n", n * m);
    matrixscan(arr, n, m);
    printf("Enter size of row and column of matrix 2:\n");
    scanf("%d%d", &o, &p);
    printf("Enter %d elements in matrix 2:\n", o * p);
    matrixscan(brr, o, p);
    printf("The required %d * %d matrix 1 is:\n", n, m);
    printmatrix(arr, n, m);
    printf("The required %d * %d matrix 2 is:\n", o, p);
    printmatrix(brr, o, p);
    printf("The multiplication of these matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            for(k=0;k<o;k++)
            {
              sum+=arr[i][k] * brr[k][j];
            }
            mul[i][j]=sum;
            sum=0;
        }
    }
    printmatrix(mul, n, p);
    return 0;
}