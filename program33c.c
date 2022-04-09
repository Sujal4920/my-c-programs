// linear and binary search using functions
#include <stdio.h>
void linearsearch(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (k == arr[i])
            printf("Using linear search Element %d found at position %d\n", k, i+1);
    }
}
void binarysearch(int arr[], int n, int k)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (k == arr[mid])
            printf("Using binary search Element %d found at position %d\n", k, mid+1);
        if (k < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
}
int main()
{
    int arr[50], i, n, k;
    printf("Size of array:");
    scanf("%d", &n);
    printf("Enter %d elements in an array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to be searched:");
    scanf("%d", &k);
    linearsearch(arr, n, k);
    binarysearch(arr, n, k);
    return 0;
}