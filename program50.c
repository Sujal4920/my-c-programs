#include <stdio.h>
int main()
{
    char str[100];
    int i, start, end;
    printf("Enter a string :  ");
    scanf("%[^\n]s", &str);
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == ' ')
        {
            start = end = i;
            while (str[end + 1] == ' ')
                end++;
            if (end - start > 1)
            {
                while (str[end] != '\0')
                    str[start++] = str[end++];
                str[start] = '\0';
            }
        }
    printf("\nString after replacing extra spaces :\n\n%s", str);
    return 0;
}
