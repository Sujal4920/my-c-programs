//program to find leapyear with conditional operator
#include<stdio.h>
int main()
{
    int year;
    printf("enter any year: ");
    scanf("%d",&year);
    year%400==0 || (year%4==0&&year%100!=0)? printf("The year %d is a leap year",year) : printf("The year %d is not a leap year",year);    
    return 0;
}