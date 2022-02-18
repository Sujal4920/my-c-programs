//program to find length and breadth using area and perimeter
#include <stdio.h>
#include<math.h>
int main()
{
    float l,b,area,peri,d,n;
    printf("enter area:");
    scanf("%f",&area);
    printf("Enter perimeter:");
    scanf("%f",&peri);
    d=4;
    n=sqrt(peri*peri-16*area);
    l=(peri+n)/d;
    b=(peri-n)/d;
    printf("Length:%.2f\n",l);
    printf("Breadth:%.2f",b);
    return 0;
}