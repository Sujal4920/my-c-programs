//program to delete the word "the" and "THE" from string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[150];
    int i, j;
    printf("Enter a sentence:\n");
    scanf("%[^\n]s", &str);
    for (i = 0; str[i] != '\0'; i++)
    {

        if ((str[i] == 't' || str[i] == 'T') && (str[i + 1] == 'h' || str[i + 1] == 'H') && (str[i + 2] == 'E' || str[i + 2] == 'e') && (str[i + 3] == '\0' || str[i + 3] == ' '))
            for (j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + 4];
            }
    }
    printf("After removal of \"the\" from sentence:\n%s", str);
    return 0;
}