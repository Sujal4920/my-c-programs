#include <stdio.h>
#include <math.h>
/* Include other headers as needed */
int main()
{
  int n, i, j;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (i + j >= n - 1)

        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}