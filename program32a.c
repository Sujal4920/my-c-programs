//SELECTION SORT
#include <stdio.h>
void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void selectsort(int *arr, int n)
{
    int i, j, min, temp;
    for (i = 0; i < n ; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
int main()
{
    int arr[50], i, n;
    printf("Selection sort\n");
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("Enter %d elements in array\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nBefore sorting\n");
    printarray(arr, n);
    selectsort(arr, n);
    printf("\nAfter sorting:\n");
    printarray(arr, n);
    return 0;
}