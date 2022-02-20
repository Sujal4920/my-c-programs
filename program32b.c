// bubble sort
#include <stdio.h>
int printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void bubblesort(int *arr, int n)
{
    int temp, i, j,phase=0;
    for (i = 0; i < n - 1; i++)
    {
        //printf("\nIn phase %d",i+1);
        //phase=1;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
               // phase=0;
            }
        }
        if(phase){
            return;
        }
    }
    //return 0;
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
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("Enter %d elements in array:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Entered elements before sorting are:\n");
    printarray(arr, n);
    bubblesort(arr, n);
    printf("\nEntered elements after bubble sorting are:\n");
    printarray(arr, n);
    insertsort(arr, n);
    printf("\nThe elements after insertion sorting:\n");
    printarray(arr, n);
    return 0;
}