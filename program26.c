//program to interchange odd-even element in an array
#include <stdio.h>
void print(int a[30],int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
int main()
{
    int a[30], n, i, j, temp;
    printf("Enter how many values you want to enter in array: ");
    scanf("%d", &n);
    printf("Enter %d elements in array:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Elements before interchange:\n");
    print(a,n);
    printf("\nElements after interchange:\n");
    for (i = 0; i < n - 1; i += 2)
    {
        {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }
    print(a,n);
    return 0;
}