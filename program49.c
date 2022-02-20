#include <stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter a string :  ");
    scanf("%[^\n]s", &str);
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
    printf("\nString after converting all lowercase characters to uppercase :\n\n%s", str);
    return 0;
}
