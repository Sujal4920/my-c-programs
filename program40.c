//program to check whether a string is palindrome or not
#include <stdio.h>
#include<string.h>
int main()
{
    char str[10],str1[10],cmp;
    printf("Enter a string::");
    gets(str);
    strcpy(str1,str); 
    strrev(str);
    cmp=strcmp(str,str1);
    if(cmp==0)
    {
        printf("palindrome");
    }
    else
    printf("not a palindrome");
    return 0;
}