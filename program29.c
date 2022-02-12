#include <stdio.h>
#define N 5
int main()
{
    int a[N], i, j,d;
    printf("Enter %d elements in a array\n", N);
    for (i = 0; i < N; )
    {
        d=0;
        scanf("%d", &a[i]);
        for (j = 0; j < i; j++)
        {
            if (a[j] == a[i])
            {
                printf("Item already exists enter again:\n");
                d=1;
                break;
            }
          
        }
        if(d==0)
        {
            i++;
        }
       
    }
    printf("The unique elements are:\n");
    for (i = 0; i < N; i++)
        printf("%d\n", a[i]);
    return 0;
}