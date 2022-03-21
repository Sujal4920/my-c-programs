//program to abbrivate an eltered name
#include <stdio.h>
#include<string.h>
int main()
{
    char ch[60],ch1[60],ch2[60];
    printf("Enter First,Middle and Last Name: \n");
    scanf("%s%s%s",ch,ch1,ch2);
    printf("\n");
    printf("Abbrivated names is:\n");
    printf("%c.%c.%s",ch[0],ch1[0],ch2);
    return 0;
}