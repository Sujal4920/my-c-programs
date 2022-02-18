#include<stdio.h>
int main()
{
    int n;
    for(n=1;n<=100;n++)
    {
        if(n%15==0)
        {
            printf("FizzBuzz\t");
        }
        else if(n%3==0)
        {
            printf("Fizz\t");
        }
        else if(n%5==0)
        {
            printf("Buzz\t");
        }
        else
            printf("%d\t",n);
    }
    return 0;
}