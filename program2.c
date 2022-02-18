//swap using three variable
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("The numbers before swapping are: %d and %d\n",a,b);
    c=a;
    printf("\nThe numbers after swapping are: %d and %d",a,b,b=c,a=b);  
   return 0;
}
