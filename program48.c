//program to count number of time a character appeared in a string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int l, k, i, j;
    printf("Enter a string:\n");
    scanf("%s", str);
    l = strlen(str);
    for (i = 0; i < l; i++)
    {
        k = 1;
        for (j = i + 1; j < l; j++)
            if (str[i] == str[j])
            {
                k++;
                str[j] = '*';
            }
        if (str[i] != '*')
            printf("\n%c appears %d times", str[i], k);
    }
    return 0;
}