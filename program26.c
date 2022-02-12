#include <stdio.h>
#define N 100
int main()
{
    int a[N], n, i, j, temp;
    printf("Enter how many values you want to enter in array: ");
    scanf("%d", &n);
    printf("Enter %d elements in array:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Elements before interchange:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nElements after interchange:\n");
    for (i = 0; i < n - 1; i += 2)
    {
        {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}