#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int i,j, len, len2;
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);
        for (i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            str[i]='-';
        }
    }
    printf("\n");
    puts(str);
    return 0;
}