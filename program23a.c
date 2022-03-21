//program for call by value
#include <stdio.h>

int swap(int a, int b)
{
    a = a + b;
    printf("The values after swap are: A = %d and B = %d\n", a,b,a=a-b,b=a-b);
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
    printf("\nThe values before swap are: A = %d and b = %d\n\n",n,m);
    swap(n, m);
    printf("\nThe Previously entered values are: A = %d and B = %d\n\n",n,m);
    return 0;
}