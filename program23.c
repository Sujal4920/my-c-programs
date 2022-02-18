#include <stdio.h>
int swap(int *a, int *b)
{
    *a = *a + *b;
    //*b = *a - *b;
    //*a = *a - *b;
    printf("The number after swap are: A = %d and B = %d\n\n", *a, *b,*a = *a - *b,*b = *a - *b);
    return 0;
}
int main()
{
    int n, m;
    printf("Enter first number A = ");
    scanf("%d", &n);
    printf("\n");
    printf("Enter second number B = ");
    scanf("%d", &m);
    printf("\n");
    printf("Numbers before swap are: A = %d and B = %d\n\n", n, m);
    swap(&n, &m);
    printf("Previously Entered numbers are: A = %d and B = %d\n\n", n, m);
    return 0;
}