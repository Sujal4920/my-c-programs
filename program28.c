#include <stdio.h>
#define N 5
int main()
{
    int a[N], i, item, count = 0, yes = 0;
    printf("Enter %d Elements in an array:\n", N);
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    printf("The entered elements are:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\nEnter element you want to search:");
    scanf("%d", &item);
    printf("\n");
    for (i = 0; i < N; i++)

        if (a[i] == item)
        {
            yes = 1;
            count++;
        }
    if (yes == 1)
    {

        printf("YES element %d is present in an array.\n\n", item);
        printf("The element %d appeared %d time in an array.", item, count);
    }
    else
        printf("NO not present");

    return 0;
}