#include <stdio.h>
#include<string.h>
int main()
{
    char str[25];
    printf("Enter a string:\n");
    scanf("%[^\n]s",&str);
    strrev(str);
    printf("The reverse of the entered string is:\n");
    puts(str);
    return 0;
}