//INSERTION SORT
#include <stdio.h>
void printarray(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void insertsort(int *arr, int n)
{
    int k, i, j;
    for (i = 1; i <= n - 1; i++)
    {
        k = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > k; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = k;
    }
}
int main()
{
    int arr[50], n, i;
    printf("Insertion sort\n");
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("Enter %d elements in array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements before sort:\n");
    printarray(arr, n);
    insertsort(arr, n);
    printf("The elements after sorting:\n");
    printarray(arr, n);
    return 0;
}