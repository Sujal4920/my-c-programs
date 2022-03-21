//program to reverse every word in a string
#include <stdio.h>
#include<string.h>
int main()
{
    char str[50],str1;
    printf("Enter a string:\n");
    scanf("%[^\n]s",str);
    printf("Reverse of the string :\n%s",strrev(str));
    return 0;
}