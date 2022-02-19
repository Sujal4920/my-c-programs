#include <stdio.h>
void primerec(int n,int c)
{
    if(n<1)
    return;
    else if(n%c==0)
    {
        printf("%d ",c);
        primerec(n/c,c);
    }
    else
    primerec(n,c+1);
}
void primefactors(int num)
{
    int i;

    printf("\nUsing non-recursive Prime Factors of %d are:\n", num);
    for (i = 2; num > 1; i++)
    {
        while (num % i == 0)
        {
            printf("%d ", i);
            num = num / i;
        }
    }
    printf("\n");
}

int main()
{
    int n, m;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    m = n;
    primefactors(n);
    printf("Using recursive the Prime Factrors of %d are:\n",m);
    primerec(m,2);
    return 0;
}