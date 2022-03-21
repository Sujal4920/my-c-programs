//Recursive and non-Recursive program for converting decimal number to binary
#include <stdio.h>
long int decimal_to_binary(int n)
{
long int bin = 0;
int rem, temp=1;
while(n!=0)
{
rem = n % 2;
n =n/2;
bin = bin + rem * temp;
temp=temp*10;
}
return bin;
}
int convert(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec % 2 + 10 * convert(dec / 2));
    }
}
int main()
{
int n,m,b;
printf("Enter a decimal number: ");
scanf("%d", &n);
m=n;
printf("Using Non-recursive the binary number is: %d\n", decimal_to_binary(n));
b=convert(m);
printf("Using recursive the binary number is: %d",b);
return 0;
}
