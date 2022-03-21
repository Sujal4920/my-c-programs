//program to replace space with "Ox20"
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int length = 0, i, j, k;
    printf("Enter a string: ");
    scanf("%[^\n]s", &str);
    for (k = 0; str[k] != '\0'; k++)
        length++;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            length += 3;
            str[length] = '\0';
            for (j = length - 1; j >= i + 3; j--)
                if (j == i + 3)
                {
                    str[j] = '0';
                    str[j - 1] = '2';
                    str[j - 2] = 'x';
                    str[j - 3] = '0';
                }
                else
                    str[j] = str[j - 3];
        }
    }
    printf("\nString after replacing the spaces with '0x20':\n%s", str);
    return 0;
}