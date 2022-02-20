#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, j, len;
    printf("Write a sentence:\n");
    scanf("%[^\n]s", &str);
    for (i = 0; str[i]!='\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            for (j = i; str[j]!='\0'; j++)
            {
                str[j] = str[j + 1];
            }
        }
    }
    printf("after removal:\n %s",str);
    return 0;
}