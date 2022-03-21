//program to find range between numbers 
#include<stdio.h>
int main()
{
    int n,x,i=1,big,small;
    printf("Enter how many numbers you want to enter:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    scanf("%d",&x);
    big=x;
    small=x;
    while(i!=n)
    { 
        scanf("%d",&x);
        if(big<x)
         big=x;
        if(small>x)
        small=x;
        i++;
    }
    printf("The biggest element is:%d\n",big);
    printf("The smallest element is:%d\n",small);
    printf("The range between the smallest and the biggest number is :%d\n",big-small);  
    return 0;
}