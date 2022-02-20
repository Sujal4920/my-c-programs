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
    int arr[50][50], brr[50][50], add[50][50], n, m, i, j, o, p;
    printf("Enter size of row and column for matrix 1:\n");
    scanf("%d%d", &n, &m);
    printf("Enter %d elements in matrix 1:\n", n * m);
    matrixscan(arr, n, m);
    printf("Enter size of row and column in matrix 2:\n");
    scanf("%d %d", &o, &p);
    printf("Enter %d elements in mattrix 2:\n", o * p);
    matrixscan(brr, o, p);
    printf("\nThe requested %d * %d matrix 1 is:\n", n, m);
    printmatrix(arr, n, m);
    printf("\nThe requested %d * %d matrix 2 is:\n", o, p);
    printmatrix(brr, o, p);
    printf("\nThe adition of these two %d * %d matrix is:\n", n, m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            add[i][j] = arr[i][j] * brr[i][j];
            printf(" %d\t", add[i][j]);
        }
        printf("\n");
    }

    return 0;
}